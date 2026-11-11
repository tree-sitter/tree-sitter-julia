// JuliaSyntax's lexer and parser rules, compiled from Julia to C (src/jsyntax/, script/jsyntax/).
// Included first: it is one translation unit with this file.
#include "jsyntax/jsyntax.c"
#include "tree_sitter/parser.h"

#include "jsyntax/externals.h" // enum TokenType, keyword_symbol: generated from script/jsyntax/tokens.jl

/// Every token with lexical rules comes from JuliaSyntax's lexer (src/jsyntax/): identifiers, numbers,
/// operators, keywords, strings, characters, comments. The grammar's state (valid_symbols) supplies the
/// context JuliaSyntax's parser would: which string we are in, whether a newline ends a statement,
/// whether a keyword can start a statement here, whether whitespace is significant.

typedef struct {
    uint8_t *buf; // text of the token being lexed (block comments can be long)
    size_t n;     // bytes consumed from the TSLexer so far
    size_t cap;
    uint8_t after_operator; // no left operand next: the last token was an operator or keyword; 2: an
                            // operator right after an operand, which is infix (serialized)
    uint8_t in_import;      // inside `import`/`using`, up to a newline, `;` or closing bracket (serialized)
    uint8_t in_head;        // in the head of `if`/`elseif`/`while`/`for`, up to a newline or `;`:
                            // not space-sensitive there (serialized)
    uint8_t doc_open;       // the open string is a whole statement so far (serialized)
    uint8_t after_doc;      // the last token closed such a string: what follows on its line is documented
                            // (serialized)
    size_t tok_end;         // length of the token scan_token just emitted (bytes of buf)
} TokBuf;

void *tree_sitter_julia_external_scanner_create(void) {
    TokBuf *t = calloc(1, sizeof(TokBuf));
    if (t) { t->cap = 1024; t->buf = malloc(t->cap); }
    return t;
}

void tree_sitter_julia_external_scanner_destroy(void *payload) {
    TokBuf *t = payload;
    if (t) { free(t->buf); free(t); }
}

// Five bytes of state: whether the next token has no left operand (after an operator or keyword: `a && !b`
// does not juxtapose, `return -1` is a prefix minus), whether we are in an import path (`import Base.*`)
// and whether we are in a block head (`if x :a`: a range); two more for docstrings on the line of what they
// document. Everything else is in the text ahead and in valid_symbols.
unsigned tree_sitter_julia_external_scanner_serialize(void *payload, char *buffer) {
    buffer[0] = (char)((TokBuf *)payload)->after_operator;
    buffer[1] = (char)((TokBuf *)payload)->in_import;
    buffer[2] = (char)((TokBuf *)payload)->in_head;
    buffer[3] = (char)((TokBuf *)payload)->doc_open;
    buffer[4] = (char)((TokBuf *)payload)->after_doc;
    return 5;
}

void tree_sitter_julia_external_scanner_deserialize(void *payload, const char *buffer, unsigned size) {
    ((TokBuf *)payload)->after_operator = size > 0 ? (uint8_t)buffer[0] : 0;
    ((TokBuf *)payload)->in_import = size > 1 ? (uint8_t)buffer[1] : 0;
    ((TokBuf *)payload)->in_head = size > 2 ? (uint8_t)buffer[2] : 0;
    ((TokBuf *)payload)->doc_open = size > 3 ? (uint8_t)buffer[3] : 0;
    ((TokBuf *)payload)->after_doc = size > 4 ? (uint8_t)buffer[4] : 0;
}

static size_t utf8_encode(uint8_t *b, int32_t c) {
    if (c < 0) { b[0] = 0xFF; return 1; } // invalid UTF-8 (tree-sitter reports -1): an invalid byte
    if (c < 0x80) { b[0] = (uint8_t)c; return 1; }
    if (c < 0x800) { b[0] = (uint8_t)(0xC0 | (c >> 6)); b[1] = (uint8_t)(0x80 | (c & 0x3F)); return 2; }
    if (c < 0x10000) {
        b[0] = (uint8_t)(0xE0 | (c >> 12)); b[1] = (uint8_t)(0x80 | ((c >> 6) & 0x3F)); b[2] = (uint8_t)(0x80 | (c & 0x3F));
        return 3;
    }
    b[0] = (uint8_t)(0xF0 | (c >> 18)); b[1] = (uint8_t)(0x80 | ((c >> 12) & 0x3F));
    b[2] = (uint8_t)(0x80 | ((c >> 6) & 0x3F)); b[3] = (uint8_t)(0x80 | (c & 0x3F));
    return 4;
}

// Room for one more character (and a padding byte); false past 1 MiB (a token that long is split)
static bool tb_reserve(TokBuf *t) {
    if (t->n + 8 <= t->cap) return true;
    if (t->cap >= (1u << 20)) return false;
    uint8_t *b = realloc(t->buf, t->cap * 2);
    if (!b) return false;
    t->buf = b; t->cap *= 2;
    return true;
}

// Base.isspace (and the BOM), minus newlines, which are tokens or skipped separately.
static bool is_space(int32_t c) {
    return c == ' ' || c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == 0x85 || c == 0xFEFF ||
           (c >= 0xA0 && jsk_utf8proc_category((uint32_t)c) == 23 /* Zs */);
}

static bool is_plain(const uint8_t *plain, int32_t c) { return c >= 0 && c < 0x80 && plain[c]; }

// In a comment, JuliaSyntax keeps every character whatever follows, except the ASCII ones that can end or
// nest it (the plain table says which), invalid UTF-8 and bidirectional formatting characters (errors).
static bool is_plain_comment(const uint8_t *plain, int32_t c) {
    return is_plain(plain, c) ||
           (c >= 0x80 && !(c >= 0x202A && c <= 0x202E) && !(c >= 0x2066 && c <= 0x2069));
}

// The code point starting at b[0] (b holds a whole character written by utf8_encode).
static int32_t utf8_decode(const uint8_t *b) {
    if (b[0] < 0x80) return b[0];
    if (b[0] == 0xFF) return -1;
    if (b[0] < 0xE0) return ((b[0] & 0x1F) << 6) | (b[1] & 0x3F);
    if (b[0] < 0xF0) return ((b[0] & 0x0F) << 12) | ((b[1] & 0x3F) << 6) | (b[2] & 0x3F);
    return ((b[0] & 0x07) << 18) | ((b[1] & 0x3F) << 12) | ((b[2] & 0x3F) << 6) | (b[3] & 0x3F);
}

/// Lex one JuliaSyntax token whose first byte is t->buf[base] (bytes base..t->n are already consumed),
/// advancing the TSLexer over it and marking its end. Returns the Kind (kinds.h) or -1; *len is the
/// token's length from base.
///
/// tree-sitter's lexer cannot go back: a token's end must be marked while the lexer is there, before
/// looking further. JuliaSyntax's lexer decides whether a character is part of the token by looking at
/// most one character further outside strings. So: at each step, lex the consumed bytes plus the
/// lookahead character; if the token covers everything consumed, mark here; if it (tentatively) covers
/// the lookahead character too, or ends exactly before it, advance and look again. Marks only move
/// forward, and the last one is the token's end. Characters that JuliaSyntax's lexer always keeps in the
/// token (`plain`, from kinds.h; NULL: identifiers, Tokenize's ASCII fast path) are marked through
/// without asking again.
static int lex_jsyntax_token(TSLexer *lexer, TokBuf *t, size_t base, int last, const uint8_t *plain,
                             int32_t *len, int32_t *suffix) {
    int kind = -1, last_kind = -1;
    int32_t mark = -1, last_end = -1, last_suffix = 0;
    for (;;) {
        size_t c = t->n - base;
        bool la = !lexer->eof(lexer);
        size_t w = 0;
        if (la) {
            if (!tb_reserve(t)) break;
            w = utf8_encode(t->buf + t->n, lexer->lookahead);
        }
        int32_t o[2];
        int k = jsyn_token(t->buf + base, c + w, last, o);
        if (k < 0) return -1;
        size_t e = (size_t)o[0];
        last_kind = k; last_end = o[0]; last_suffix = o[1];
        if (c > 0 && e >= c) {
            lexer->mark_end(lexer);
            mark = (int32_t)c; kind = k; *suffix = o[1];
        }
        if (!la || e < c) break;
        int32_t ch = lexer->lookahead;
        lexer->advance(lexer, false); // e > c: the lookahead character is in the token; e == c: confirm
        t->n += w;
        if (e <= c) continue;
        int cl = jsk_kind_class[k];
        if (plain == NULL) {
            // Tokenize's own fast path (lex_identifier): an all-ASCII identifier continues over ASCII
            // identifier characters, except `!` (`x!=y`).
            if (!(cl == JSK_C_IDENTIFIER || cl == JSK_C_KEYWORD || cl == JSK_C_BOOL)) continue;
            bool ascii = true;
            for (size_t i = base; i < t->n; i++) ascii = ascii && t->buf[i] < 0x80;
            uint8_t x = t->buf[t->n - 1];
            while (ascii && x != '!' && jsk_ascii_identifier_char[x]) {
                lexer->mark_end(lexer); // x is in the token whatever follows
                mark = (int32_t)(t->n - base); kind = k; *suffix = 0;
                int32_t y = lexer->lookahead;
                if (lexer->eof(lexer) || y < 0 || y >= 0x80 || !jsk_ascii_identifier_char[y] || !tb_reserve(t)) break;
                t->buf[t->n++] = (uint8_t)y;
                lexer->advance(lexer, false);
                x = (uint8_t)y;
            }
        } else if (cl == JSK_C_COMMENT || k == JSK_K_ErrorEofMultiComment) {
            // (every prefix of a `#= =#` comment is an unterminated one: the fast path must cover it, or
            // each character would re-lex the whole comment)
            while (is_plain_comment(plain, ch)) {
                lexer->mark_end(lexer);
                mark = (int32_t)(t->n - base); kind = k; *suffix = 0;
                int32_t y = lexer->lookahead;
                if (lexer->eof(lexer) || !is_plain_comment(plain, y) || !tb_reserve(t)) break;
                t->n += utf8_encode(t->buf + t->n, y);
                lexer->advance(lexer, false);
                ch = y;
            }
        }
    }
    if (mark <= 0) return -1;
    if (last_end == mark) { kind = last_kind; *suffix = last_suffix; } // the call that saw the most
    *len = mark;
    return kind;
}

// Read ahead (after the marked token end) into t, for the kernel's lookahead questions: to the end of
// the line, at most 256 bytes. Newlines and bytes inside `#= =#` comments do not count (`mutable #= …
// =# struct`), up to 4 KiB in all.
static void read_ahead(TSLexer *lexer, TokBuf *t) {
    int depth = 0;
    size_t outside = t->n;
    int32_t prev = 0;
    while (outside + 4 <= 256 && t->n + 4 <= 4096 && tb_reserve(t) && !lexer->eof(lexer)) {
        int32_t ch = lexer->lookahead;
        t->n += utf8_encode(t->buf + t->n, ch);
        if (depth == 0) outside++;
        if (ch == '\n' && depth == 0) break;
        lexer->advance(lexer, false);
        if (prev == '#' && ch == '=') { depth++; ch = 0; }                     // `#=` opens (nested)
        else if (prev == '=' && ch == '#' && depth > 0) { depth--; ch = 0; }   // `=#` closes
        prev = ch;
    }
}

static bool is_contextual_keyword(int k) {
    return k == JSK_K_abstract || k == JSK_K_as || k == JSK_K_doc || k == JSK_K_mutable || k == JSK_K_outer ||
           k == JSK_K_primitive || k == JSK_K_public || k == JSK_K_type || k == JSK_K_var;
}

// ---- Strings and commands ----

typedef struct {
    int32_t delim; // '"' or '`'
    bool triple, raw;
    int content, end;
    const uint8_t *plain;
} StrCtx;

// Which string we are in: the grammar's state has exactly one content token valid there.
static bool string_context(const bool *valid, StrCtx *x) {
    static const struct { int content; int32_t delim; bool triple, raw; const uint8_t *plain; } ctxs[] = {
        {CONTENT_STR_1, '"', false, false, jsk_plain_str_q},  {CONTENT_STR_3, '"', true, false, jsk_plain_str_qqq},
        {CONTENT_STR_1_RAW, '"', false, true, jsk_plain_str_q_raw}, {CONTENT_STR_3_RAW, '"', true, true, jsk_plain_str_qqq_raw},
        {CONTENT_CMD_1, '`', false, false, jsk_plain_cmd_b},  {CONTENT_CMD_3, '`', true, false, jsk_plain_cmd_bbb},
        {CONTENT_CMD_1_RAW, '`', false, true, jsk_plain_cmd_b_raw}, {CONTENT_CMD_3_RAW, '`', true, true, jsk_plain_cmd_bbb_raw},
    };
    for (size_t i = 0; i < sizeof ctxs / sizeof ctxs[0]; i++) {
        if (valid[ctxs[i].content]) {
            x->content = ctxs[i].content; x->delim = ctxs[i].delim; x->triple = ctxs[i].triple; x->raw = ctxs[i].raw;
            x->plain = ctxs[i].plain; x->end = ctxs[i].delim == '"' ? END_STR : END_CMD;
            return true;
        }
    }
    return false;
}

static bool is_content_kind(int k) {
    return k == JSK_K_String || k == JSK_K_CmdString || k == JSK_K_ErrorInvalidUTF8 || k == JSK_K_ErrorBidiFormatting ||
           k == JSK_K_ErrorInvalidInterpolationTerminator;
}

// JuliaSyntax's first token of w[0..n) in this string (+ the delimiter, if pad): its kind; *content =
// its length if it is content, else 0.
static int string_window(const StrCtx *x, TokBuf *t, size_t from, size_t n, bool pad, size_t *content) {
    if (pad) t->buf[from + n] = (uint8_t)x->delim; // tb_reserve left room for 4 bytes after n
    int32_t o[2];
    int k = jsyn_string_token(t->buf + from, n + (pad ? 1 : 0), x->delim, x->triple, x->raw, 0, o);
    *content = (k >= 0 && is_content_kind(k)) ? (size_t)o[0] : 0;
    if (*content > n) *content = n;
    return k;
}

/// Inside a string: an escape sequence, a run of content, or the closing delimiter (`$` is the internal
/// lexer's). Content never contains a backslash (escapes are their own tokens), so JuliaSyntax's string
/// lexer can be asked from any character of it. Plain characters (kinds.h) are content whatever follows.
/// At the others (delimiter, `$`, non-ASCII) the kernel lexes from that character, once with the input
/// ending after the lookahead and once with the delimiter appended: the end of a `"""` string depends on
/// the next two characters, and is the delimiter the only thing that matters there. The mark moves only
/// where both agree.
static bool scan_string(TSLexer *lexer, const bool *valid, const StrCtx *x, TokBuf *t) {
    if (lexer->eof(lexer)) return false;
    t->n = 0;
    if (lexer->lookahead == '\\' && valid[ESCAPE_SEQUENCE]) {
        size_t mark = 0;
        bool invalid = false;
        for (;;) {
            bool la = !lexer->eof(lexer);
            size_t w = 0;
            if (la) { if (!tb_reserve(t) || t->n > 16) break; w = utf8_encode(t->buf + t->n, lexer->lookahead); }
            // commands are raw strings in JuliaSyntax (lex_backtick): only \\ and \` are escapes there
            int r = jsyn_escape_len(t->buf, t->n + w, x->raw || x->delim == '`', x->delim);
            size_t e = (size_t)(r < -1 ? -r : r < 0 ? 0 : r);
            if (t->n > 0 && e >= t->n) { lexer->mark_end(lexer); mark = t->n; invalid = r < -1; }
            if (!la || e <= t->n) break;
            lexer->advance(lexer, false);
            t->n += w;
        }
        if (mark > 0) {
            // an invalid escape (JuliaSyntax: ErrorInvalidEscapeSequence, inside the string) is still an
            // escape token here: refusing it would leave the string open and break the rest of the file
            (void)invalid;
            lexer->result_symbol = (TSSymbol)ESCAPE_SEQUENCE;
            return true;
        }
    }
    size_t total = 0; // content bytes marked
    if (t->n > 0) {   // a raw string's backslash that starts no escape (`r"\s"`): content
        lexer->mark_end(lexer);
        total = t->n;
    }
    int first_kind = -1; size_t first_len = 0;
    for (;;) {
        if (lexer->eof(lexer)) break;
        int32_t c = lexer->lookahead;
        if (is_plain(x->plain, c)) {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            total++;
            continue;
        }
        if (c == '\\') {
            if (!x->raw) break; // an escape: its own token
            // raw: `\\` and `\` + delimiter are escapes, any other backslash is content
            lexer->advance(lexer, false);
            int32_t d = lexer->lookahead;
            if (d == '\\' || d == x->delim) break; // the content ends before the backslash (marked)
            lexer->mark_end(lexer);
            total++;
            continue;
        }
        // JuliaSyntax decides, from this character on
        t->n = 0;
        size_t certain = 0;
        bool stop = false;
        for (;;) {
            bool la = !lexer->eof(lexer);
            size_t w = 0;
            if (la) { if (!tb_reserve(t) || t->n > 48) { stop = true; break; } w = utf8_encode(t->buf + t->n, lexer->lookahead); }
            size_t e1, e2;
            int k = string_window(x, t, 0, t->n + w, false, &e1);
            string_window(x, t, 0, t->n + w, true, &e2);
            if (t->n == 0) { first_kind = k; }
            size_t e = e1 < e2 ? e1 : e2;
            if (t->n > 0 && e >= t->n) { lexer->mark_end(lexer); certain = t->n; }
            if (la && (e > t->n || e1 != e2)) { // in the token, or not yet decided: look further
                lexer->advance(lexer, false);
                t->n += w;
                if (certain == t->n - w && e > t->n - w && is_plain(x->plain, lexer->lookahead)) {
                    // the character is content whatever follows, and so is the next: back to plain
                    lexer->mark_end(lexer);
                    certain = t->n;
                    break;
                }
                continue;
            }
            if (t->n == 0 || e < t->n || !la) {
                // the content ends here (or this is the closing delimiter / `$`)
                if (certain == 0 && total == 0) {
                    int32_t o[2];
                    first_kind = jsyn_string_token(t->buf, t->n + w, x->delim, x->triple, x->raw, 0, o);
                    first_len = (size_t)o[0];
                }
                stop = true;
            }
            break;
        }
        total += certain;
        if (stop || certain == 0) break;
    }
    if (total > 0) { lexer->result_symbol = (TSSymbol)x->content; return true; }
    // no content: the closing delimiter (or `$`, EOF: not ours)
    if ((first_kind == JSK_K_DQUOTE || first_kind == JSK_K_TRIPLE_DQUOTE || first_kind == JSK_K_BACKTICK ||
         first_kind == JSK_K_TRIPLE_BACKTICK) && valid[x->end]) {
        while (t->n < first_len && !lexer->eof(lexer)) { lexer->advance(lexer, false); t->n++; }
        lexer->mark_end(lexer);
        lexer->result_symbol = (TSSymbol)x->end;
        return true;
    }
    return false;
}

// ---- Characters ----

// A character literal at the lookahead `'` (JuliaSyntax's lexer: `'`, a Char chunk, `'`): advance to its
// end. Its end is the first point where the kernel reads a complete one.
static bool scan_character(TSLexer *lexer, TokBuf *t) {
    t->n = 0;
    while (t->n < 64 && !lexer->eof(lexer) && tb_reserve(t)) {
        size_t w = utf8_encode(t->buf + t->n, lexer->lookahead);
        int e = jsyn_char_literal(t->buf, t->n + w);
        lexer->advance(lexer, false);
        t->n += w;
        if (e > 0 && (size_t)e == t->n) {
            lexer->mark_end(lexer);
            lexer->result_symbol = (TSSymbol)CHARACTER_LITERAL;
            return true;
        }
        if (e > 0) return false;
        if (t->n >= 2 && t->buf[t->n - 1] == '\n') return false;
    }
    return false;
}

// `var"..."`: an identifier (JuliaSyntax: the `var` keyword directly followed by a raw string). t holds
// `var` (and possibly the next characters); advance to the closing quote.
static bool scan_var_identifier(TSLexer *lexer, TokBuf *t) {
    for (;;) {
        int e = jsyn_var_identifier(t->buf, t->n);
        if (e > 0 && (size_t)e == t->n) { lexer->mark_end(lexer); return true; }
        if (e > 0 || lexer->eof(lexer) || t->n > 4096 || !tb_reserve(t)) return false;
        t->n += utf8_encode(t->buf + t->n, lexer->lookahead);
        lexer->advance(lexer, false);
    }
}

// ---- Everything else ----

/// The next token, lexed by JuliaSyntax: identifiers, keywords, numbers, booleans, operators (dotted and
/// suffixed), opening quotes, characters, comments. Returns false for punctuation (the internal lexer).
/// prefilled: t->buf[0..t->n) holds the start of the token, already consumed (an ASCII word).
static bool scan_token(TSLexer *lexer, const bool *valid, bool ws_before, bool recovering, TokBuf *t,
                       bool prefilled) {
    if (!prefilled) switch (lexer->lookahead) {
        case '(': case ')': case '[': case ']': case '{': case '}': case ',': case ';':
            return false; // punctuation only, in JuliaSyntax's lexer too
        case '\'':
            // `x'` is an adjoint, `'a'` a character: JuliaSyntax's lexer asks what came before (lex_prime);
            // here, whether an expression just ended and no whitespace separates
            if (valid[ADJOINT] && !ws_before) {
                lexer->advance(lexer, false);
                lexer->mark_end(lexer);
                lexer->result_symbol = (TSSymbol)ADJOINT;
                return true;
            }
            return valid[CHARACTER_LITERAL] && scan_character(lexer, t);
    }
    if (!prefilled) t->n = 0;
    int32_t len = 0, suffix = 0;
    const uint8_t *plain = NULL;
    if (!prefilled && lexer->lookahead == '#') plain = jsk_plain_line_comment; // `#=`: block comment, below
    int k;
    if (plain) {
        // comments: `#` then the line, or `#=` ... `=#` (nested)
        lexer->advance(lexer, false);
        t->buf[0] = '#'; t->n = 1;
        if (lexer->lookahead == '=') {
            // `#= … =#`, nested: Tokenize's lex_comment, character by character (re-lexing the whole
            // comment at each step, as for other tokens, would be quadratic). Unterminated: not ours.
            if (!valid[BLOCK_COMMENT]) return false;
            lexer->advance(lexer, false);
            int depth = 1;
            while (!lexer->eof(lexer)) {
                int32_t c = lexer->lookahead;
                lexer->advance(lexer, false);
                if (c == '#' && lexer->lookahead == '=') { lexer->advance(lexer, false); depth++; }
                else if (c == '=' && lexer->lookahead == '#') {
                    lexer->advance(lexer, false);
                    if (--depth == 0) {
                        lexer->mark_end(lexer);
                        t->n = 0; // the text is not buffered: the wrapper reads on from the lexer
                        lexer->result_symbol = BLOCK_COMMENT;
                        return true;
                    }
                }
            }
            return false;
        }
        k = lex_jsyntax_token(lexer, t, 0, 0, plain, &len, &suffix);
        if (k < 0) return false;
        if (jsk_kind_class[k] != JSK_C_COMMENT && k != JSK_K_ErrorInvalidUTF8 && k != JSK_K_ErrorBidiFormatting) return false;
        TSSymbol sym = LINE_COMMENT;
        if (!valid[sym]) return false;
        lexer->result_symbol = sym;
        t->tok_end = (size_t)len;
        return true;
    }
    k = lex_jsyntax_token(lexer, t, 0, 0, NULL, &len, &suffix);
    if (k < 0) return false;
    int cls = jsk_kind_class[k];
    if (cls == JSK_C_DOT && len == 1) {
        // peek_dotted_op_token: `.` directly followed by an operator is a dotted operator (`.+`, `.=`)
        int32_t len2 = 0, suffix2 = 0;
        int k2 = lex_jsyntax_token(lexer, t, 1, JSK_K_DOT, NULL, &len2, &suffix2);
        if (k2 < 0) return false;
        cls = k2 == JSK_K_EQ ? JSK_C_ASSIGNMENT : jsk_kind_class[k2];
        if (cls < JSK_C_ASSIGNMENT) return false; // field access, `...`: punctuation
        // `import Base.*`: in an import path the dot separates and the operator is the name
        // (JuliaSyntax parse_import_path); the lexer takes the `.`
        if (t->in_import && !ws_before && !recovering) return false;
        len = 1 + len2;
    }
    int sym;
    if (k == JSK_K_COLON) {
        // JuliaSyntax: in a ternary's middle branch `:` ends it (parse_cond); after an expression it is a
        // range, except in a space-sensitive context with whitespace before and none after, where it
        // quotes the next element (parse_range: `[1 :a]`); at the start of an expression it quotes the
        // next atom (parse_atom), unless whitespace or a closing token follows (`x[:]`: a name).
        // the colon is marked; the character after it may already be in t (the lexer's confirming step)
        bool at_eof = t->n <= 1 && lexer->eof(lexer);
        int32_t next = t->n > 1 ? utf8_decode(t->buf + 1) : lexer->lookahead;
        // whitespace as JuliaSyntax's lexer sees it; a comment counts as whitespace (`[1 :#= c =#a]`)
        bool ws_after = at_eof || next == '\n' || is_space(next) || next == '#';
        bool closing = next == ')' || next == ']' || next == '}' || next == ',' || next == ';';
        // space-sensitive (matrix row, macro arguments): where an element may directly follow another,
        // both a range `:` and a quoting `:` are valid. The probes say so too, but incremental parsing
        // can reuse a repeat node and land in a state past the probe; the pair of tokens survives that.
        // A block head (`if x :a`, `for i = 1 :n`) has the pair too, but is not space-sensitive.
        bool space_sensitive = (valid[SPACE_SENSITIVE_PROBE] || valid[MACRO_ARGS_PROBE] ||
                                (valid[COLON] && valid[QUOTE_COLON] && !t->in_head)) && !recovering;
        // right after an operator JuliaSyntax parses an operand: a quote (`x === :a`), not a range
        bool operand = t->after_operator && valid[QUOTE_COLON] && !ws_after && !closing && !recovering;
        if (valid[TERNARY_COLON] && !recovering) sym = TERNARY_COLON;
        else if (valid[COLON] && !operand && !(ws_before && !ws_after && space_sensitive)) sym = COLON;
        else if (valid[QUOTE_COLON] && !ws_after && !closing) sym = QUOTE_COLON;
        else return false; // `:` as a name, `using A: b`: the internal lexer's
        lexer->result_symbol = (TSSymbol)sym;
        t->tok_end = (size_t)len;
        return true;
    }
    if (valid[STRING_SUFFIX] && !ws_before && !recovering &&
        (cls == JSK_C_IDENTIFIER || cls == JSK_C_KEYWORD || cls == JSK_C_INTEGER || cls == JSK_C_FLOAT || cls == JSK_C_BOOL)) {
        sym = STRING_SUFFIX; // `r"x"i`, `x"s"2`, `x"s"end` (JuliaSyntax: is_string_macro_suffix)
    } else if (k == JSK_K_DQUOTE || k == JSK_K_TRIPLE_DQUOTE || k == JSK_K_BACKTICK || k == JSK_K_TRIPLE_BACKTICK) {
        sym = k == JSK_K_DQUOTE ? DELIMITER_STR_1 : k == JSK_K_TRIPLE_DQUOTE ? DELIMITER_STR_3 :
              k == JSK_K_BACKTICK ? DELIMITER_CMD_1 : DELIMITER_CMD_3;
    } else if (k == JSK_K_var && len == 3 && valid[IDENTIFIER] &&
               // not right after a string's `$` (only a name or `(` is valid there: no number, no quoted
               // symbol, unlike after `.` in `M.var"#f#"`): `"a $var"`
               !(valid[IMMEDIATE_PAREN] && !valid[INTEGER_LITERAL] && !valid[QUOTE_COLON] && !recovering) &&
               (t->n > 3 ? t->buf[3] == '"' : lexer->lookahead == '"') && scan_var_identifier(lexer, t)) {
        sym = IDENTIFIER; // `var"..."`
    } else if (cls == JSK_C_IDENTIFIER) {
        sym = IDENTIFIER;
    } else if (((cls == JSK_C_KEYWORD && keyword_symbol(k) >= 0) || cls == JSK_C_BOOL) && !ws_before &&
               valid[QUOTED_KEYWORD] && !recovering) {
        sym = QUOTED_KEYWORD; // `:end`: right after `:` (JuliaSyntax parse_atom: quote of the next atom)
    } else if (cls == JSK_C_KEYWORD) {
        int ks = keyword_symbol(k);
        bool kv = ks >= 0 && valid[ks], iv = valid[IDENTIFIER];
        if (kv && iv && is_contextual_keyword(k)) { // JuliaSyntax's parser looks at the next token
            read_ahead(lexer, t);
            kv = jsyn_contextual_keyword(t->buf, t->n) == 1;
        } else if (kv && iv && (k == JSK_K_in || k == JSK_K_isa || k == JSK_K_where) && !recovering &&
                   ((ws_before && valid[MACRO_ARGS_PROBE]) || t->after_operator)) {
            // `@assert where.uuid`, `GC.@preserve in out begin`, `x === where.uuid`: a word operator with
            // no left operand (start of macro arguments, right after an operator); JuliaSyntax reads a name
            kv = false;
        }
        // a keyword where it is valid, else an identifier where that is valid (as tree-sitter's keyword
        // extraction did: `x[end]`, `x.end`)
        sym = kv ? ks : IDENTIFIER;
    } else if (cls == JSK_C_INTEGER) {
        sym = INTEGER_LITERAL;
    } else if (cls == JSK_C_FLOAT) {
        sym = FLOAT_LITERAL;
    } else if (cls == JSK_C_BOOL) {
        sym = valid[BOOLEAN_LITERAL] || !valid[IDENTIFIER] ? BOOLEAN_LITERAL : IDENTIFIER;
    } else if (cls >= JSK_C_ASSIGNMENT && cls <= JSK_C_UNARY) {
        sym = ASSIGNMENT_OPERATOR + (cls - JSK_C_ASSIGNMENT);
        // `for x ∈ xs`: the iteration operator where valid (JuliaSyntax parse_iteration_spec)
        if (k == JSK_K_ELEMENT_OF && valid[ELEMENT_OF]) sym = ELEMENT_OF;
        // `[x -y]`: in a space-sensitive context (right after an element of a matrix row or of macro
        // arguments), after whitespace, ask JuliaSyntax's rule whether this starts a new element
        // (space-sensitive as for `:` above: the probes, or the pair of colon tokens, which survives node
        // reuse in incremental parsing: `[x -(y)]` must not become a call of `-` after an edit elsewhere)
        int space_prefix = -1; // JuliaSyntax's spacing rule (`a -b`), asked at most once
        // (not at the first macro argument, which follows no element: `@inline -(x, y) = …`)
        bool space_sensitive = (valid[SPACE_SENSITIVE_PROBE] ||
                                (valid[COLON] && valid[QUOTE_COLON] && !t->in_head)) &&
                               !valid[MACRO_ARGS_PROBE];
        if (cls == JSK_C_UNARY_PLUS && ws_before && valid[SPACE_PREFIX_OPERATOR] && space_sensitive &&
            !recovering) {
            read_ahead(lexer, t);
            space_prefix = jsyn_space_prefix(t->buf, t->n);
            if (space_prefix == 1) sym = SPACE_PREFIX_OPERATOR;
        }
        // `~`: infix (binary, JuliaSyntax call-i at assignment precedence) after an operand, unless spaced as
        // a prefix in a space-sensitive context (`[a ~b]`); else the prefix (bitwise not) as a unary operator
        if (sym == TILDE_OPERATOR && !recovering) {
            bool operand = valid[JUXTAPOSE] && !t->after_operator;
            bool sens = valid[SPACE_SENSITIVE_PROBE] || valid[MACRO_ARGS_PROBE] ||
                        (valid[COLON] && valid[QUOTE_COLON] && !t->in_head);
            if (operand && ws_before && sens) {
                read_ahead(lexer, t);
                if (jsyn_space_prefix(t->buf, t->n) == 1) operand = false;
            }
            if (!valid[TILDE_OPERATOR] || (!operand && valid[UNARY_OPERATOR])) sym = UNARY_OPERATOR;
        }
        // `if T <: R`, `x <: y && z`: `<:`/`>:` right after an operand are infix (JuliaSyntax reads a prefix
        // `<:` only where an expression starts). The comparison token is accepted by the same binary rule
        // (same tree) and cannot start a block as a prefix. Not in matrix rows or macro arguments.
        if (sym == TYPE_ORDER_OPERATOR && valid[JUXTAPOSE] && valid[COMPARISON_OPERATOR] && !t->after_operator &&
            !valid[SPACE_SENSITIVE_PROBE] && !valid[MACRO_ARGS_PROBE] && !recovering)
            sym = COMPARISON_OPERATOR;
        // `if n - j; …`, `while a + b > c …`: right after an operand on the same line (the parser could
        // juxtapose here), JuliaSyntax reads `+`/`-` as infix unless it is spaced as a prefix (`a -b`, which
        // only space-sensitive contexts read as prefix). The infix-only token keeps the grammar from starting
        // a block with `-j`. `a -b` is left to the rule above: the space-sensitive probe can be skipped when
        // incremental parsing reuses a node, so the context is not known reliably here.
        if (sym == UNARY_PLUS_OPERATOR && valid[JUXTAPOSE] && valid[PLUS_OPERATOR] && !t->after_operator &&
            !recovering) {
            if (ws_before && space_prefix < 0) {
                read_ahead(lexer, t);
                space_prefix = jsyn_space_prefix(t->buf, t->n);
            }
            // (in a block head without a probe, `if n -j` is not space-sensitive: infix as well)
            if (!ws_before || space_prefix != 1 ||
                (t->in_head && !valid[SPACE_SENSITIVE_PROBE] && !valid[MACRO_ARGS_PROBE]))
                sym = PLUS_OPERATOR;
        }
    } else {
        return false;
    }
    if (!valid[sym]) return false;
    lexer->result_symbol = (TSSymbol)sym;
    t->tok_end = (size_t)len;
    return true;
}

static bool scan(TokBuf *t, TSLexer *lexer, const bool *valid_symbols);

// The byte at *i after the emitted token's start, reading on from the lexer as needed (looking past the
// token's marked end is free), skipping spaces and tabs; 0 at EOF. Non-ASCII characters give their first
// byte, which is enough for the ASCII punctuation the callers look for.
static int32_t peek_after(TokBuf *t, TSLexer *lexer, size_t *i) {
    for (;;) {
        while (*i >= t->n) {
            if (lexer->eof(lexer) || !tb_reserve(t)) return 0;
            t->n += utf8_encode(t->buf + t->n, lexer->lookahead);
            lexer->advance(lexer, false);
        }
        uint8_t b = t->buf[(*i)++];
        if (b != ' ' && b != '\t') return b;
    }
}

bool tree_sitter_julia_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    TokBuf *t = payload;
    // right after an operand on the same line (the parser could juxtapose); not right after a macro name,
    // where whitespace starts the arguments (`@m *(b)`)
    bool after_operand = valid_symbols[JUXTAPOSE] && !t->after_operator && !valid_symbols[MACRO_ARGS_PROBE] &&
                         !(valid_symbols[CONTENT_STR_1] && valid_symbols[CONTENT_CMD_1]);
    // where a statement starts at top level or in a module (JuliaSyntax parse_docstring there: a statement
    // that is only a string documents what follows it on its line or the next); `public` is valid only there
    bool stmt_start = valid_symbols[KW_PUBLIC] && !(valid_symbols[CONTENT_STR_1] && valid_symbols[CONTENT_CMD_1]);
    if (!scan(t, lexer, valid_symbols)) return false;
    TSSymbol s = lexer->result_symbol;
    if (s == DELIMITER_STR_1 || s == DELIMITER_STR_3) t->doc_open = stmt_start;
    t->after_doc = s == END_STR && t->doc_open;
    if (s == END_STR) t->doc_open = 0;
    if (s != JUXTAPOSE && s != IMMEDIATE_PAREN && s != IMMEDIATE_BRACKET && s != IMMEDIATE_BRACE &&
        s != IMMEDIATE_STRING_START && s != IMMEDIATE_COMMAND_START && s != LINE_COMMENT && s != BLOCK_COMMENT) {
        // no left operand next: after an operator, or a keyword that does not end an expression (`return -1`)
        bool op = (s >= ASSIGNMENT_OPERATOR && s <= UNARY_OPERATOR) || s == SPACE_PREFIX_OPERATOR || s == ELEMENT_OF;
        // infix: a binary operator token after an operand (not one spaced or read as a prefix: `[a -b]`,
        // `[a <:b]`, `!`), whose right operand may follow on the next line
        bool infix = after_operand && ((s >= ASSIGNMENT_OPERATOR && s <= TILDE_OPERATOR && s != UNARY_PLUS_OPERATOR) ||
                                       s == ELEMENT_OF);
        t->after_operator = op ? (infix ? 2 : 1) :
                            (s >= FIRST_KEYWORD && s <= LAST_KEYWORD && s != KW_END && s != KW_BEGIN && s != KW_BREAK &&
                             s != KW_CONTINUE); // `a[begin:i]`, `a[end - 1]`: operands
    }
    // which line an import is on: JuliaSyntax's parser knows; here the scanner follows it. Brackets and
    // `;` are the internal lexer's and do not update this state, so look at what follows the token:
    // `import Base: (+); x.*y`, `f(:(using A), x.+y)`, `import A #= c =#; x.*y`.
    if (s == KW_IMPORT || s == KW_USING) t->in_import = 1;
    else if (s == NEWLINE) t->in_import = 0;
    else if (t->in_import && (t->tok_end > 0 || s == BLOCK_COMMENT)) {
        size_t i = t->tok_end;
        int32_t c = peek_after(t, lexer, &i);
        if (c == ';' || c == ')' || c == ']' || c == '}') t->in_import = 0;
    }
    // a block head (JuliaSyntax parses it with parse_cond / parse_iteration_specs, not space-sensitive)
    // ends at a newline or `;`
    // (not `struct`: the grammar's type head has no range, `struct A :b end` stays a quoted body)
    if (s == KW_IF || s == KW_ELSEIF || s == KW_WHILE || s == KW_FOR) t->in_head = 1;
    else if (s == NEWLINE || s == KW_END || s == KW_ELSE) t->in_head = 0;
    else if (t->in_head && (t->tok_end > 0 || s == BLOCK_COMMENT)) {
        size_t i = t->tok_end;
        if (peek_after(t, lexer, &i) == ';') t->in_head = 0;
    }
    if (t->after_operator && (t->tok_end > 0 || s == BLOCK_COMMENT)) {
        // the bit must describe what the scanner sees next: if a closing token or separator follows
        // (lexed by the internal lexer, which does not update this state: `(==)) where`), or an empty
        // bracket pair (`a == [] isa T`), the next scanned token is not this operator's operand. An
        // opening bracket with something inside is (`.~[x]`, `-(x)`).
        size_t i = t->tok_end;
        int32_t c = peek_after(t, lexer, &i);
        while (c == '\n' || c == '\r') c = peek_after(t, lexer, &i); // `f(; op=+⏎) where {T}`
        if (c == ')' || c == ']' || c == '}' || c == ',' || c == ';') t->after_operator = 0;
        else if (c == '(' || c == '[' || c == '{') {
            int32_t d = peek_after(t, lexer, &i);
            if (d == (c == '(' ? ')' : c + 2)) t->after_operator = 0;
        }
    }
    return true;
}

static bool scan(TokBuf *t, TSLexer *lexer, const bool *valid_symbols) {
    t->n = 0;
    t->tok_end = 0; // set by scan_token for the tokens it lexes (their text is in t->buf)
    // In error recovery every symbol is valid: no string context then
    bool recovering = valid_symbols[CONTENT_STR_1] && valid_symbols[CONTENT_CMD_1];

    // `if m[i]*(c - 1) > s`: an operator right after an operand is infix (JuliaSyntax), so `(` starts its
    // right operand, not the arguments of a call of the operator (`*(b)` as the first statement of the block)
    if (valid_symbols[IMMEDIATE_PAREN] && lexer->lookahead == '(' && t->after_operator != 2) {
        lexer->result_symbol = IMMEDIATE_PAREN;
        return true;
    } else if (valid_symbols[IMMEDIATE_BRACKET] && lexer->lookahead == '[') {
        lexer->result_symbol = IMMEDIATE_BRACKET;
        return true;
    } else if (valid_symbols[IMMEDIATE_BRACE] && lexer->lookahead == '{') {
        lexer->result_symbol = IMMEDIATE_BRACE;
        return true;
    } else if (valid_symbols[IMMEDIATE_STRING_START] && lexer->lookahead == '"') {
        lexer->result_symbol = IMMEDIATE_STRING_START;
        return true;
    } else if (valid_symbols[IMMEDIATE_COMMAND_START] && lexer->lookahead == '`') {
        lexer->result_symbol = IMMEDIATE_COMMAND_START;
        return true;
    }

    StrCtx x;
    if (!recovering && string_context(valid_symbols, &x)) return scan_string(lexer, valid_symbols, &x, t);

    // Whitespace: skipped; a newline is a token where it terminates a statement (or a matrix row)
    bool ws_before = false;
    for (;;) {
        int32_t c = lexer->lookahead;
        if (c == '\n') {
            // not after an infix operator: its right operand follows (`if a >⏎ b`, where `>` could
            // otherwise end the condition and start the block as a name)
            if (valid_symbols[NEWLINE] && t->after_operator != 2) {
                lexer->advance(lexer, false);
                lexer->mark_end(lexer);
                lexer->result_symbol = NEWLINE;
                return true;
            }
        } else if (!is_space(c)) {
            break;
        }
        lexer->advance(lexer, true);
        ws_before = true;
    }
    // `2x`, `(n+1)ε`, `2(x)`, `1√x`: JuliaSyntax juxtaposes (is_juxtapose) when no whitespace separates,
    // the previous token is not an operator, and the next token is not an operator, a closing token, a
    // number or a reserved word. A word is read whole (`f(x)end`, `(x)isa T`, `1:3if c`): the juxtaposition
    // is marked zero-width at its start, and a reserved word is then scanned from what was read.
    if (!ws_before && valid_symbols[JUXTAPOSE] && !recovering && !t->after_operator && !lexer->eof(lexer) &&
        lexer->lookahead < 0x80 && lexer->lookahead >= 0 &&
        (jsk_ascii_identifier_char[lexer->lookahead] && !(lexer->lookahead >= '0' && lexer->lookahead <= '9'))) {
        lexer->mark_end(lexer);
        t->n = 0;
        while (t->n < 16 && !lexer->eof(lexer) && lexer->lookahead >= 0 && lexer->lookahead < 0x80 &&
               lexer->lookahead != '!' && jsk_ascii_identifier_char[lexer->lookahead]) {
            t->buf[t->n++] = (uint8_t)lexer->lookahead;
            lexer->advance(lexer, false);
        }
        int32_t o[2];
        int k = jsyn_token(t->buf, t->n, 0, o);
        if (!(k >= 0 && (size_t)o[0] == t->n && !jsk_juxtapose_next[k])) {
            lexer->result_symbol = JUXTAPOSE;
            return true;
        }
        return scan_token(lexer, valid_symbols, ws_before, recovering, t, true);
    }
    if (!ws_before && valid_symbols[JUXTAPOSE] && !recovering && !t->after_operator && !lexer->eof(lexer)) {
        uint8_t b[4];
        size_t w = utf8_encode(b, lexer->lookahead);
        int32_t o[2];
        int k = jsyn_token(b, w, 0, o);
        if (k >= 0 && (size_t)o[0] == w && jsk_juxtapose_next[k]) {
            lexer->mark_end(lexer);
            lexer->result_symbol = JUXTAPOSE;
            return true;
        }
    }
    // `"""doc""" f`: a statement that is only a string, followed on its line by what it documents
    // (JuliaSyntax parse_docstring): end the statement there, as a newline would (zero-width), unless a
    // word operator continues the expression or a block ends (`"a" in xs`, `"a" end`)
    if (ws_before && t->after_doc && valid_symbols[NEWLINE] && !valid_symbols[SPACE_SENSITIVE_PROBE] &&
        !valid_symbols[MACRO_ARGS_PROBE] && !recovering && !lexer->eof(lexer) &&
        lexer->lookahead >= 0 && lexer->lookahead < 0x80 &&
        (lexer->lookahead == '@' ||
         (jsk_ascii_identifier_char[lexer->lookahead] && !(lexer->lookahead >= '0' && lexer->lookahead <= '9')))) {
        lexer->mark_end(lexer);
        if (lexer->lookahead == '@') { lexer->result_symbol = NEWLINE; return true; }
        t->n = 0;
        while (t->n < 16 && !lexer->eof(lexer) && lexer->lookahead >= 0 && lexer->lookahead < 0x80 &&
               lexer->lookahead != '!' && jsk_ascii_identifier_char[lexer->lookahead]) {
            t->buf[t->n++] = (uint8_t)lexer->lookahead;
            lexer->advance(lexer, false);
        }
        int32_t o[2];
        int k = jsyn_token(t->buf, t->n, 0, o);
        bool whole = k >= 0 && (size_t)o[0] == t->n;
        if (!(whole && (k == JSK_K_in || k == JSK_K_isa || k == JSK_K_where || k == JSK_K_end || k == JSK_K_else ||
                        k == JSK_K_elseif || k == JSK_K_catch || k == JSK_K_finally))) {
            lexer->result_symbol = NEWLINE;
            return true;
        }
        return scan_token(lexer, valid_symbols, ws_before, recovering, t, true);
    }
    // `using ..A`: in an import path, leading dots are the path's (JuliaSyntax: parse_import_path)
    if (valid_symbols[IMPORT_DOTS] && !recovering && lexer->lookahead == '.') {
        lexer->advance(lexer, false); // one token per dot (`..A`: two)
        lexer->mark_end(lexer);
        lexer->result_symbol = IMPORT_DOTS;
        return true;
    }
    return scan_token(lexer, valid_symbols, ws_before, recovering, t, false);
}
