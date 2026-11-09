// JuliaSyntax's lexer rule for `[x -y]`, compiled from Julia to C (src/jsyntax/, script/jsyntax/).
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

// Stateless: everything the scanner needs is in the text ahead and in valid_symbols.
unsigned tree_sitter_julia_external_scanner_serialize(void *payload, char *buffer) { (void)payload; (void)buffer; return 0; }

void tree_sitter_julia_external_scanner_deserialize(void *payload, const char *buffer, unsigned size) {
    (void)payload; (void)buffer; (void)size;
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
        } else if (cl == JSK_C_COMMENT) {
            uint8_t x = t->buf[t->n - 1];
            while (is_plain(plain, x)) {
                lexer->mark_end(lexer);
                mark = (int32_t)(t->n - base); kind = k; *suffix = 0;
                int32_t y = lexer->lookahead;
                if (lexer->eof(lexer) || !is_plain(plain, y) || !tb_reserve(t)) break;
                t->buf[t->n++] = (uint8_t)y;
                lexer->advance(lexer, false);
                x = (uint8_t)y;
            }
        }
    }
    if (mark <= 0) return -1;
    if (last_end == mark) { kind = last_kind; *suffix = last_suffix; } // the call that saw the most
    *len = mark;
    return kind;
}

// Read ahead (after the marked token end) into t, for the kernel's lookahead questions: to the end of
// the line, at most 256 bytes.
static void read_ahead(TSLexer *lexer, TokBuf *t) {
    while (t->n + 4 <= 256 && tb_reserve(t) && !lexer->eof(lexer)) {
        int32_t ch = lexer->lookahead;
        t->n += utf8_encode(t->buf + t->n, ch);
        if (ch == '\n') break;
        lexer->advance(lexer, false);
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
            if (invalid) return false; // JuliaSyntax: invalid escape sequence
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
        if (t->n >= 5 && t->buf[t->n - 1] == '\n') return false;
        t->n += utf8_encode(t->buf + t->n, lexer->lookahead);
        lexer->advance(lexer, false);
    }
}

// ---- Everything else ----

/// The next token, lexed by JuliaSyntax: identifiers, keywords, numbers, booleans, operators (dotted and
/// suffixed), opening quotes, characters, comments. Returns false for punctuation (the internal lexer).
static bool scan_token(TSLexer *lexer, const bool *valid, bool ws_before, bool recovering, TokBuf *t) {
    switch (lexer->lookahead) {
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
    t->n = 0;
    int32_t len = 0, suffix = 0;
    const uint8_t *plain = NULL;
    if (lexer->lookahead == '#') plain = jsk_plain_line_comment; // switched to block below if `#=`
    int k;
    if (plain) {
        // comments: `#` then the line, or `#=` ... `=#` (nested)
        lexer->advance(lexer, false);
        t->buf[0] = '#'; t->n = 1;
        if (lexer->lookahead == '=') plain = jsk_plain_block_comment;
        k = lex_jsyntax_token(lexer, t, 0, 0, plain, &len, &suffix);
        if (k < 0) return false;
        if (jsk_kind_class[k] != JSK_C_COMMENT && k != JSK_K_ErrorInvalidUTF8 && k != JSK_K_ErrorBidiFormatting) return false;
        TSSymbol sym = plain == jsk_plain_block_comment ? BLOCK_COMMENT : LINE_COMMENT;
        if (!valid[sym]) return false;
        lexer->result_symbol = sym;
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
    }
    int sym;
    if (valid[STRING_SUFFIX] && !ws_before && !recovering &&
        (cls == JSK_C_IDENTIFIER || cls == JSK_C_KEYWORD || cls == JSK_C_INTEGER || cls == JSK_C_FLOAT || cls == JSK_C_BOOL)) {
        sym = STRING_SUFFIX; // `r"x"i`, `x"s"2`, `x"s"end` (JuliaSyntax: is_string_macro_suffix)
    } else if (k == JSK_K_DQUOTE || k == JSK_K_TRIPLE_DQUOTE || k == JSK_K_BACKTICK || k == JSK_K_TRIPLE_BACKTICK) {
        sym = k == JSK_K_DQUOTE ? DELIMITER_STR_1 : k == JSK_K_TRIPLE_DQUOTE ? DELIMITER_STR_3 :
              k == JSK_K_BACKTICK ? DELIMITER_CMD_1 : DELIMITER_CMD_3;
    } else if (k == JSK_K_var && len == 3 && valid[IDENTIFIER] &&
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
        if (cls == JSK_C_UNARY_PLUS && ws_before && valid[SPACE_PREFIX_OPERATOR] && valid[SPACE_SENSITIVE_PROBE] &&
            !recovering) {
            read_ahead(lexer, t);
            if (jsyn_space_prefix(t->buf, t->n) == 1) sym = SPACE_PREFIX_OPERATOR;
        }
    } else {
        return false;
    }
    if (!valid[sym]) return false;
    lexer->result_symbol = (TSSymbol)sym;
    return true;
}

bool tree_sitter_julia_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    TokBuf *t = payload;
    // In error recovery every symbol is valid: no string context then
    bool recovering = valid_symbols[CONTENT_STR_1] && valid_symbols[CONTENT_CMD_1];

    if (valid_symbols[IMMEDIATE_PAREN] && lexer->lookahead == '(') {
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
            if (valid_symbols[NEWLINE]) {
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
    // `using ..A`: in an import path, leading dots are the path's (JuliaSyntax: parse_import_path)
    if (valid_symbols[IMPORT_DOTS] && !recovering && lexer->lookahead == '.') {
        while (lexer->lookahead == '.') lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        lexer->result_symbol = IMPORT_DOTS;
        return true;
    }
    return scan_token(lexer, valid_symbols, ws_before, recovering, t);
}
