/* jscompare LIST JSDUMP KINDS OUTPREFIX: tree-sitter-julia (the build this is linked with) against
   JuliaSyntax's trees (jsdump.mjs). See README.md.

   A JuliaSyntax node is reproduced when a tree-sitter node has exactly its span. Spans on both sides are
   trimmed the same way: JuliaSyntax's leave out whitespace and comment tokens at either end; a tree-sitter
   node's span leaves out whitespace (newline terminators are tokens inside blocks) and whole comments
   (extras) at either end; a token keeps its own span (string content may end in spaces), and a token of
   only whitespace has none.

   Two numbers per build:
     raw:        the span comparison above, nothing else
     normalized: raw, plus these mappings of documented conventions (each counted separately):
       char     a Char (the character, JuliaSyntax) is the character_literal minus its quotes
       string   String/CmdString pieces: JuliaSyntax splits a string's text at each line of a triple-quoted
                string (the indentation it strips is whitespace between them) and keeps escapes inside
                pieces; tree-sitter splits at escapes (escape_sequence) and keeps lines together. A run
                of pieces with nothing but whitespace between them counts when the same text (trimmed of
                whitespace) is a run of adjacent content/escape_sequence nodes
       dotop    an operator identifier is the tree-sitter `operator` minus a leading `.` (broadcast,
                JuliaSyntax: a separate `.` token) and/or a trailing `=` (updating `+=`, JuliaSyntax:
                op= with the bare operator)
       interp   `(x)` after `$` in a string is the string_interpolation minus its `$`
       iter     an iteration (`i in xs, j in ys`) is a comprehension's for_clause minus its `for`
       sep      a block or matrix row whose span starts or ends with `;` separators (JuliaSyntax: `if a; b;
                end`, `[1 2;\n 3 4]`) is the block/matrix_row without them
       var      a `var"…"` identifier (JuliaSyntax: the name inside) is the identifier minus `var"` and `"`
       tomb     TOMBSTONE nodes (JuliaSyntax's placeholders for removed nodes) are not counted
   "core" leaves out a fixed list of kinds whose boundaries no grammar shares with JuliaSyntax (CORE_OUT).
   Writes OUTPREFIX.kinds.tsv (kind, leaf, nodes, raw, normalized), OUTPREFIX.files.tsv (file, js_error,
   ts_error, js_nodes, raw, normalized, error_bytes) and a summary on stdout.
   SHOWKIND=<kind> [SHOWLEAF=1] [SHOWN=n]: unmatched (after normalization) examples. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include <tree_sitter/api.h>
const TSLanguage *tree_sitter_julia(void);

typedef struct { uint64_t *k; size_t cap, n; } Set;
static uint64_t hsh(uint64_t x) { x ^= x >> 33; x *= 0xff51afd7ed558ccdULL; x ^= x >> 33; return x; }
static void set_reset(Set *s, size_t want) {
    size_t cap = 64; while (cap < want * 2) cap <<= 1;
    if (cap > s->cap) { free(s->k); s->k = malloc(cap * 8); s->cap = cap; }
    memset(s->k, 0xff, s->cap * 8); s->n = 0;
}
static void set_add(Set *s, uint64_t v) {
    if (2 * (s->n + 1) > s->cap) { // grow
        Set t = {0}; set_reset(&t, s->cap);
        for (size_t i = 0; i < s->cap; i++) if (s->k[i] != UINT64_MAX) set_add(&t, s->k[i]);
        free(s->k); *s = t;
    }
    size_t m = s->cap - 1, i = hsh(v) & m;
    while (s->k[i] != UINT64_MAX) { if (s->k[i] == v) return; i = (i + 1) & m; }
    s->k[i] = v; s->n++;
}
static int set_has(const Set *s, uint64_t v) {
    size_t m = s->cap - 1, i = hsh(v) & m;
    while (s->k[i] != UINT64_MAX) { if (s->k[i] == v) return 1; i = (i + 1) & m; }
    return 0;
}
// spans are < 2^31 bytes; the top bits of the start tag the set a span belongs to
enum { T_ANY, T_CHAR, T_STR, T_OP, T_INTERP, T_ITER, T_SEP };
#define SPAN(t, a, b) (((uint64_t)(t) << 60) | ((uint64_t)(a) << 30) | (uint32_t)(b))

enum { N_CHAR, N_STRING, N_DOTOP, N_INTERP, N_ITER, N_SEP, N_VAR, N_TOMB, NNORM };
static const char *norm_name[NNORM] = {"char", "string", "dotop", "interp", "iter", "sep", "var", "tomb"};
static long norm_count[NNORM];

static const char *CORE_OUT[] = { // kind/leaf
    "&/0", "Char/1", "CmdString/1", "Error**/1", "ErrorAmbiguousNumericConstant/1",
    "ErrorInvalidEscapeSequence/1", "ErrorInvalidNumericConstant/1", "ErrorInvalidOperator/1",
    "ErrorOverLongCharacter/1", "String/1", "TOMBSTONE/0", "cmdstring/0", "doc/0", "elseif/0", "filter/0",
    "generator/0", "iteration/0", "nrow/0", "op=/1", "outer/0", "parameters/0", "parens/0", "row/0",
    "string/0", "toplevel/0", NULL};

#define NK 2048
static long ktot[NK][2], kraw[NK][2], knorm[NK][2];
static int core_out[NK][2];

static const char *src; static long srclen;
static int is_ws(char c) { return c == ' ' || c == '\t' || c == '\n' || c == '\r'; }
static void trim_ws(uint32_t *s, uint32_t *e) {
    while (*e > *s && is_ws(src[*e - 1])) (*e)--;
    while (*e > *s && is_ws(src[*s])) (*s)++;
}
typedef struct { uint32_t s, e; } Span;
typedef struct { uint32_t s, e; TSSymbol sym; uint8_t extra, leaf; } Node;
static Span *cm; static size_t ncm, cmcap; // the file's comments, in order
static Node *nd; static size_t nn, ndcap;
static long cm_find(uint32_t v, int by_end) { // index of the comment starting (ending) at v, or -1
    size_t lo = 0, hi = ncm;
    while (lo < hi) { size_t m = (lo + hi) / 2; uint32_t k = by_end ? cm[m].e : cm[m].s; if (k < v) lo = m + 1; else hi = m; }
    return lo < ncm && (by_end ? cm[lo].e : cm[lo].s) == v ? (long)lo : -1;
}
// trimmed of whitespace and of whole comments at either end (JuliaSyntax's spans leave both out)
static void trim(uint32_t *s, uint32_t *e) {
    for (;;) {
        trim_ws(s, e);
        long i;
        if (*e > *s && (i = cm_find(*s, 0)) >= 0 && cm[i].e <= *e) *s = cm[i].e;
        else if (*e > *s && (i = cm_find(*e, 1)) >= 0 && cm[i].s >= *s) *e = cm[i].s;
        else return;
    }
}

int main(int argc, char **argv) {
    if (argc < 5) { fprintf(stderr, "usage: jscompare LIST JSDUMP KINDS OUTPREFIX\n"); return 2; }
    FILE *L = fopen(argv[1], "r"), *J = fopen(argv[2], "rb");
    if (!L || !J) { perror("open"); return 1; }
    static char kn[NK][64]; int nk = 0; FILE *K = fopen(argv[3], "r");
    while (nk < NK && fgets(kn[nk], 64, K)) { kn[nk][strcspn(kn[nk], "\n")] = 0; nk++; }
    for (int k = 0; k < nk; k++) for (int l = 0; l < 2; l++) {
        char b[80]; snprintf(b, sizeof b, "%s/%d", kn[k], l);
        for (const char **c = CORE_OUT; *c; c++) if (!strcmp(*c, b)) core_out[k][l] = 1;
    }
    int K_String = -1, K_CmdString = -1, K_Char = -1, K_Identifier = -1, K_parens = -1, K_iteration = -1,
        K_row = -1, K_TOMB = -1, K_block = -1;
    for (int k = 0; k < nk; k++) {
        if (!strcmp(kn[k], "String")) K_String = k;
        if (!strcmp(kn[k], "CmdString")) K_CmdString = k;
        if (!strcmp(kn[k], "Char")) K_Char = k;
        if (!strcmp(kn[k], "Identifier")) K_Identifier = k;
        if (!strcmp(kn[k], "parens")) K_parens = k;
        if (!strcmp(kn[k], "iteration")) K_iteration = k;
        if (!strcmp(kn[k], "row")) K_row = k;
        if (!strcmp(kn[k], "block")) K_block = k;
        if (!strcmp(kn[k], "TOMBSTONE")) K_TOMB = k;
    }
    char p[4096];
    snprintf(p, sizeof p, "%s.files.tsv", argv[4]); FILE *F = fopen(p, "w");
    const TSLanguage *lang = tree_sitter_julia();
    TSParser *parser = ts_parser_new(); ts_parser_set_language(parser, lang);
    TSSymbol S_char = ts_language_symbol_for_name(lang, "character_literal", 17, true);
    TSSymbol S_content = ts_language_symbol_for_name(lang, "content", 7, true);
    TSSymbol S_escape = ts_language_symbol_for_name(lang, "escape_sequence", 15, true);
    TSSymbol S_op = ts_language_symbol_for_name(lang, "operator", 8, true);
    TSSymbol S_interp = ts_language_symbol_for_name(lang, "string_interpolation", 20, true);
    TSSymbol S_for = ts_language_symbol_for_name(lang, "for_clause", 10, true);
    TSSymbol S_row = ts_language_symbol_for_name(lang, "matrix_row", 10, true);
    TSSymbol S_block = ts_language_symbol_for_name(lang, "block", 5, true);
    static char strsym[4096]; // nodes whose children are string pieces
    for (uint32_t i = 0; i < ts_language_symbol_count(lang) && i < 4096; i++) {
        const char *nm = ts_language_symbol_name(lang, (TSSymbol)i);
        strsym[i] = nm && (strstr(nm, "string_literal") || strstr(nm, "command_literal"));
    }
    Set ts = {0};
    long files = 0, jerr = 0, terr = 0, both = 0, gap = 0, perm = 0, errbytes = 0, totbytes = 0, skipped = 0;
    long jn = 0, jraw = 0, jnorm = 0, cn = 0, craw = 0, cnorm = 0, jn_t = 0, jraw_t = 0;
    double tparse = 0;
    char path[4096];
    uint8_t *jb = NULL; size_t jcap = 0;
    uint8_t *matched = NULL; size_t mcap = 0;
    int showk = -1, showleaf = getenv("SHOWLEAF") ? atoi(getenv("SHOWLEAF")) : 0, shown = 0;
    int showmax = getenv("SHOWN") ? atoi(getenv("SHOWN")) : 20;
    if (getenv("SHOWKIND")) for (int k = 0; k < nk; k++) if (!strcmp(kn[k], getenv("SHOWKIND"))) showk = k;
    while (fgets(path, sizeof path, L)) {
        path[strcspn(path, "\n")] = 0;
        uint32_t idx, cnt; uint8_t herr;
        if (fread(&idx, 4, 1, J) != 1 || fread(&herr, 1, 1, J) != 1 || fread(&cnt, 4, 1, J) != 1) { fprintf(stderr, "short dump\n"); return 1; }
        if ((long)idx != files + skipped) { fprintf(stderr, "dump out of step at %ld\n", files + skipped); return 1; }
        if (cnt * 12ul > jcap) { jcap = cnt * 24ul + 64; jb = realloc(jb, jcap); }
        if (fread(jb, 12, cnt, J) != cnt) { fprintf(stderr, "short dump\n"); return 1; }
        if (herr == 2) { skipped++; continue; } // JuliaSyntax (Wasm) failed on this file
        FILE *f = fopen(path, "rb"); fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
        char *buf = malloc(n + 1); if (fread(buf, 1, n, f) != (size_t)n) return 1; fclose(f);
        src = buf; srclen = n;
        struct timespec a, b; clock_gettime(CLOCK_MONOTONIC, &a);
        TSTree *tree = ts_parser_parse_string(parser, NULL, buf, (uint32_t)n);
        clock_gettime(CLOCK_MONOTONIC, &b); tparse += (b.tv_sec - a.tv_sec) + 1e-9 * (b.tv_nsec - a.tv_nsec);
        TSNode root = ts_tree_root_node(tree);
        int te = ts_node_has_error(root);
        set_reset(&ts, (size_t)n + 64);
        // pass 1: every visible node in document order; comments (extras) separately
        TSTreeCursor c = ts_tree_cursor_new(root);
        long eb = 0; uint32_t err_end = 0; nn = 0; ncm = 0;
        for (;;) {
            TSNode x = ts_tree_cursor_current_node(&c);
            uint32_t s = ts_node_start_byte(x), e = ts_node_end_byte(x);
            if (ts_node_is_error(x) && s >= err_end) { eb += e - s; err_end = e; }
            if (ts_node_is_extra(x)) { // a comment
                if (ncm == cmcap) { cmcap = cmcap ? cmcap * 2 : 1024; cm = realloc(cm, cmcap * sizeof *cm); }
                cm[ncm++] = (Span){s, e};
            }
            if (nn == ndcap) { ndcap = ndcap ? ndcap * 2 : 4096; nd = realloc(nd, ndcap * sizeof *nd); }
            nd[nn++] = (Node){s, e, ts_node_symbol(x), (uint8_t)ts_node_is_extra(x), ts_node_child_count(x) == 0};
            TSSymbol sym = ts_node_symbol(x);
            if (sym < 4096 && strsym[sym]) { // runs of adjacent content/escape_sequence children
                TSTreeCursor cc = ts_tree_cursor_new(x);
                int more = ts_tree_cursor_goto_first_child(&cc), in = 0; uint32_t rs = 0, re = 0;
                for (;;) {
                    TSNode ch = ts_tree_cursor_current_node(&cc);
                    TSSymbol cs = more ? ts_node_symbol(ch) : 0;
                    int piece = more && (cs == S_content || cs == S_escape);
                    if (piece && in && ts_node_start_byte(ch) == re) re = ts_node_end_byte(ch);
                    else {
                        if (in) { uint32_t s2 = rs, e2 = re; trim_ws(&s2, &e2); if (e2 > s2) set_add(&ts, SPAN(T_STR, s2, e2)); in = 0; }
                        if (piece) { in = 1; rs = ts_node_start_byte(ch); re = ts_node_end_byte(ch); }
                    }
                    if (!more) break;
                    more = ts_tree_cursor_goto_next_sibling(&cc);
                }
                ts_tree_cursor_delete(&cc);
            }
            if (ts_tree_cursor_goto_first_child(&c)) continue;
            while (!ts_tree_cursor_goto_next_sibling(&c))
                if (!ts_tree_cursor_goto_parent(&c)) goto done;
        }
    done:
        ts_tree_cursor_delete(&c);
        // pass 2: spans trimmed of whitespace and of comments at either end
        for (size_t i = 0; i < nn; i++) {
            Node *x = &nd[i];
            if (x->extra) continue;
            uint32_t s = x->s, e = x->e;
            if (!x->leaf) trim(&s, &e); // a token keeps its span (string content can be or end in spaces)
            if (e <= s) continue;
            TSSymbol sym = x->sym;
            set_add(&ts, SPAN(T_ANY, s, e));
            if (sym == S_char) set_add(&ts, SPAN(T_CHAR, s, e));
            else if (sym == S_op) set_add(&ts, SPAN(T_OP, s, e));
            else if (sym == S_interp) set_add(&ts, SPAN(T_INTERP, s, e));
            else if (sym == S_row || sym == S_block) set_add(&ts, SPAN(T_SEP, s, e));
            else if (sym == S_for && e - s > 3 && !memcmp(src + s, "for", 3)) { // minus `for` and what follows it
                uint32_t q = s + 3, e2 = e; trim(&q, &e2);
                if (e2 > q) set_add(&ts, SPAN(T_ITER, q, e2));
            }
        }
        if (cnt > mcap) { mcap = cnt * 2 + 64; matched = realloc(matched, mcap); }
        // string regions: runs of String/CmdString leaves (trivia or not) separated only by whitespace
        memset(matched, 0, cnt);
        for (uint32_t r = 0; r < cnt;) {
            uint16_t k; memcpy(&k, jb + 12 * r, 2);
            if (!(jb[12 * r + 2] && (k == K_String || k == K_CmdString))) { r++; continue; }
            uint32_t r0 = r, s0, e0; memcpy(&s0, jb + 12 * r + 4, 4); memcpy(&e0, jb + 12 * r + 8, 4);
            for (r++; r < cnt; r++) {
                uint16_t k2; uint32_t s2, e2; memcpy(&k2, jb + 12 * r, 2);
                if (!(jb[12 * r + 2] && (k2 == K_String || k2 == K_CmdString))) break;
                memcpy(&s2, jb + 12 * r + 4, 4); memcpy(&e2, jb + 12 * r + 8, 4);
                int gap_ws = s2 >= e0; for (uint32_t q = e0; gap_ws && q < s2; q++) gap_ws = is_ws(src[q]);
                if (!gap_ws) break;
                e0 = e2;
            }
            uint32_t ts0 = s0, te0 = e0; trim(&ts0, &te0);
            if (te0 > ts0 && set_has(&ts, SPAN(T_STR, ts0, te0))) for (uint32_t q = r0; q < r; q++) matched[q] = 1;
        }
        long fj = 0, fraw = 0, fnorm = 0;
        for (uint32_t r = 0; r < cnt; r++) {
            uint16_t k; uint8_t leaf, triv; uint32_t s, e;
            memcpy(&k, jb + 12 * r, 2); leaf = jb[12 * r + 2]; triv = jb[12 * r + 3];
            memcpy(&s, jb + 12 * r + 4, 4); memcpy(&e, jb + 12 * r + 8, 4);
            if (leaf && triv) continue; // punctuation/keywords that are not AST leaves
            int raw = set_has(&ts, SPAN(T_ANY, s, e)), norm = raw, why = -1;
            if (k == K_TOMB) { // counted raw only
                norm_count[N_TOMB]++; jn_t++; jraw_t += raw;
                if (k < NK) { ktot[k][leaf]++; kraw[k][leaf] += raw; }
                continue;
            }
            if (!norm) {
                if (leaf && k == K_Char && s > 0 && set_has(&ts, SPAN(T_CHAR, s - 1, e + 1))) why = N_CHAR;
                else if (leaf && (k == K_String || k == K_CmdString) && matched[r]) why = N_STRING;
                else if (leaf && k == K_Identifier &&
                         ((s > 0 && src[s - 1] == '.' && set_has(&ts, SPAN(T_OP, s - 1, e))) ||
                          (e < (uint32_t)n && src[e] == '=' && set_has(&ts, SPAN(T_OP, s, e + 1))) ||
                          (s > 0 && src[s - 1] == '.' && e < (uint32_t)n && src[e] == '=' && set_has(&ts, SPAN(T_OP, s - 1, e + 1)))))
                    why = N_DOTOP;
                else if (!leaf && k == K_parens && s > 0 && src[s - 1] == '$' && set_has(&ts, SPAN(T_INTERP, s - 1, e))) why = N_INTERP;
                else if (!leaf && k == K_iteration && set_has(&ts, SPAN(T_ITER, s, e))) why = N_ITER;
                else if (!leaf && (k == K_row || k == K_block) && (src[s] == ';' || src[e - 1] == ';')) {
                    uint32_t s2 = s, e2 = e;
                    for (;;) { // `;` separators, whitespace and comments at either end
                        uint32_t s0 = s2, e0 = e2;
                        while (s2 < e2 && src[s2] == ';') s2++;
                        while (e2 > s2 && src[e2 - 1] == ';') e2--;
                        trim(&s2, &e2);
                        if (s2 == s0 && e2 == e0) break;
                    }
                    if (e2 > s2 && set_has(&ts, SPAN(T_SEP, s2, e2))) why = N_SEP;
                }
                else if (leaf && k == K_Identifier && s >= 4 && e < (uint32_t)n && !memcmp(src + s - 4, "var\"", 4) &&
                         src[e] == '"' && set_has(&ts, SPAN(T_ANY, s - 4, e + 1))) why = N_VAR;
                if (why >= 0) { norm = 1; norm_count[why]++; }
            }
            if (!norm && showk >= 0 && k == showk && leaf == showleaf && shown < showmax) {
                shown++;
                TSNode d = ts_node_descendant_for_byte_range(root, s, e);
                char t[121]; int len = (int)(e - s) < 120 ? (int)(e - s) : 120; memcpy(t, src + s, len); t[len] = 0;
                for (char *q = t; *q; q++) if (*q == '\n') *q = '~';
                printf("UNMATCHED %s %u-%u |%s| ts: %s %u-%u\n", path, s, e, t, ts_node_type(d), ts_node_start_byte(d), ts_node_end_byte(d));
            }
            if (k < NK) { ktot[k][leaf]++; kraw[k][leaf] += raw; knorm[k][leaf] += norm; }
            fj++; fraw += raw; fnorm += norm;
            if (k < NK && !core_out[k][leaf]) { cn++; craw += raw; cnorm += norm; }
        }
        files++; totbytes += n; errbytes += eb;
        jerr += herr; terr += te; both += herr && te; gap += te && !herr; perm += herr && !te;
        jn += fj; jraw += fraw; jnorm += fnorm;
        fprintf(F, "%s\t%d\t%d\t%ld\t%ld\t%ld\t%ld\n", path, herr, te, fj, fraw, fnorm, eb);
        ts_tree_delete(tree); free(buf);
    }
    fclose(F);
    snprintf(p, sizeof p, "%s.kinds.tsv", argv[4]); F = fopen(p, "w");
    for (int k = 0; k < NK; k++) for (int l = 0; l < 2; l++) if (ktot[k][l])
        fprintf(F, "%s\t%d\t%ld\t%ld\t%ld\n", k < nk ? kn[k] : "?", l, ktot[k][l], kraw[k][l], knorm[k][l]);
    fclose(F);
    // raw counts TOMBSTONE nodes too (they are never reproduced)
    long rawn = jn + jn_t, rawc = cn; jraw += jraw_t; // TOMBSTONE is outside core
    printf("skipped (JuliaSyntax failed): %ld\n", skipped);
    printf("files %ld, %.1f MB, parse %.2f s (%.3f s/MB)\n", files, totbytes / 1e6, tparse, tparse / (totbytes / 1e6));
    printf("file errors: JuliaSyntax %ld, tree-sitter %ld; agree-clean %ld, gap %ld, permissive %ld, both %ld\n",
           jerr, terr, files - jerr - terr + both, gap, perm, both);
    printf("bytes inside ERROR nodes: %ld (%.3f%%)\n", errbytes, 100.0 * errbytes / totbytes);
    printf("raw:        all %ld / %ld (%.2f%%), core %ld / %ld (%.2f%%)\n", jraw, rawn, 100.0 * jraw / rawn, craw, rawc, 100.0 * craw / rawc);
    printf("normalized: all %ld / %ld (%.2f%%), core %ld / %ld (%.2f%%)\n", jnorm, jn, 100.0 * jnorm / jn, cnorm, cn, 100.0 * cnorm / cn);
    printf("normalizations:");
    for (int i = 0; i < NNORM; i++) printf(" %s %ld", norm_name[i], norm_count[i]);
    printf("\n");
    return 0;
}
