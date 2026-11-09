// JuliaSyntax's lexer rule for `[x -y]`, compiled from Julia to C (src/jsyntax/, script/jsyntax/).
// Included first: it is one translation unit with this file.
#include "jsyntax/jsyntax.c"
#include "tree_sitter/parser.h"

/// Block comments and immediate parentheses are easy to parse, but strings
/// require extra-attention.
///
/// The main problems that arise when parsing strings are:
/// 1. Triple quoted strings allow single quotes inside. e.g. """ "foo" """.
/// 2. Strings can have arbitrary interpolations, including other strings.
///    e.g. "echo $("foo")"
/// 3. Non-standard string literals don't allow interpolations or escape
///    sequences, but you can always write \" and \`.
/// All of the above also applies to command literals.
enum TokenType {
    BLOCK_COMMENT_REST,
    IMMEDIATE_PAREN,
    IMMEDIATE_BRACKET,
    IMMEDIATE_BRACE,
    IMMEDIATE_STRING_START,
    IMMEDIATE_COMMAND_START,
    CONTENT_CMD_1,
    CONTENT_CMD_1_RAW,
    CONTENT_CMD_3,
    CONTENT_CMD_3_RAW,
    CONTENT_STR_1,
    CONTENT_STR_1_RAW,
    CONTENT_STR_3,
    CONTENT_STR_3_RAW,
    END_CMD,
    END_STR,
    SPACE_PREFIX_OPERATOR,
    SPACE_SENSITIVE_PROBE,
    // lexed by JuliaSyntax (scan_token)
    IDENTIFIER,
    INTEGER_LITERAL,
    FLOAT_LITERAL,
    BOOLEAN_LITERAL,
    ASSIGNMENT_OPERATOR, // ... UNARY_OPERATOR: same order as JuliaSyntax classes JSK_C_ASSIGNMENT ... JSK_C_UNARY
    PAIR_OPERATOR,
    ARROW_OPERATOR,
    LAZY_OR_OPERATOR,
    LAZY_AND_OPERATOR,
    COMPARISON_OPERATOR,
    PIPE_LEFT_OPERATOR,
    PIPE_RIGHT_OPERATOR,
    ELLIPSIS_OPERATOR,
    PLUS_OPERATOR,
    UNARY_PLUS_OPERATOR,
    TIMES_OPERATOR,
    RATIONAL_OPERATOR,
    BITSHIFT_OPERATOR,
    POWER_OPERATOR,
    TILDE_OPERATOR,
    TYPE_ORDER_OPERATOR,
    UNARY_OPERATOR,
    NEWLINE,
    IMPORT_DOTS,
    QUOTED_KEYWORD,
    ELEMENT_OF,
    KW_BAREMODULE, KW_MODULE, KW_ABSTRACT, KW_PRIMITIVE, KW_MUTABLE, KW_STRUCT, KW_TYPE, KW_FUNCTION, KW_MACRO,
    KW_BEGIN, KW_QUOTE, KW_LET, KW_IF, KW_ELSEIF, KW_ELSE, KW_TRY, KW_CATCH, KW_FINALLY, KW_FOR, KW_WHILE, KW_DO,
    KW_BREAK, KW_CONTINUE, KW_RETURN, KW_CONST, KW_GLOBAL, KW_LOCAL, KW_EXPORT, KW_PUBLIC, KW_IMPORT, KW_USING,
    KW_AS, KW_OUTER, KW_IN, KW_ISA, KW_WHERE, KW_END,
};

void *tree_sitter_julia_external_scanner_create() {
    return NULL;
}

void tree_sitter_julia_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_julia_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_julia_external_scanner_deserialize(void *payload, const char *buffer, unsigned size) {}

// Scanner functions

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }

static bool scan_content(TSLexer *lexer, TSSymbol content_symbol, char end_char, unsigned n_delim, bool interp) {
    TSSymbol end_symbol = (end_char == '"') ? END_STR : END_CMD;
    bool has_content = false;
    int32_t next;
    while ((next = lexer->lookahead)) {
        mark_end(lexer);
        if (interp && (next == '$' || next == '\\')) {
            lexer->result_symbol = content_symbol;
            return has_content;
        } else if (next == '\\') {
            // Parse backslash in raw strings (check escaped delimiters and '\\')
            advance(lexer);
            next = lexer->lookahead;
            if (next == end_char || next == '\\') {
                lexer->result_symbol = content_symbol;
                return has_content;
            }
        } else {
            bool is_end_delimiter = true;
            for (unsigned i = 1; i <= n_delim; i++) {
                if (lexer->lookahead == end_char) {
                    advance(lexer);
                } else {
                    is_end_delimiter = false;
                    break;
                }
            }
            if (is_end_delimiter) {
                if (has_content) {
                    lexer->result_symbol = content_symbol;
                    return true;
                } else {
                    mark_end(lexer);
                    lexer->result_symbol = end_symbol;
                    return true;
                }
            }
        }
        advance(lexer);
        has_content = true;
    }
    return false;
}

static bool scan_block_comment(TSLexer *lexer) {
    // NOTE: The first `#=` is scanned by tree-sitter
    bool after_eq = false;
    unsigned nesting_depth = 1;
    for (;;) {
        switch (lexer->lookahead) {
            case '=':
                advance(lexer);
                after_eq = true;
                break;
            case '#':
                advance(lexer);
                if (after_eq) {
                    after_eq = false;
                    nesting_depth--;
                    if (nesting_depth == 0) {
                        lexer->result_symbol = BLOCK_COMMENT_REST;
                        return true;
                    }
                } else {
                    after_eq = false;
                    if (lexer->lookahead == '=') {
                        advance(lexer);
                        nesting_depth++;
                    }
                }
                break;
            case '\0':
                return false;
            default:
                advance(lexer);
                after_eq = false;
                break;
        }
    }
}

static size_t utf8_encode(uint8_t *b, int32_t c) {
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

// ---- Tokens from JuliaSyntax's lexer ----

// Base.isspace (and the BOM), minus newlines, which are tokens or skipped separately.
static bool is_space(int32_t c) {
    return c == ' ' || c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == 0x85 || c == 0xFEFF ||
           (c >= 0xA0 && jsk_utf8proc_category((uint32_t)c) == 23 /* Zs */);
}

typedef struct {
    uint8_t buf[1024];
    size_t n; // bytes consumed from the TSLexer so far
} TokBuf;

/// Lex one JuliaSyntax token whose first byte is t->buf[base] (bytes base..t->n are already consumed),
/// advancing the TSLexer over it and marking its end. Returns the Kind (kinds.h) or -1; *len is the
/// token's length from base.
///
/// tree-sitter's lexer cannot go back: a token's end must be marked while the lexer is there, before
/// looking further. JuliaSyntax's lexer decides whether a character is part of the token by looking at
/// most one character further (two inside strings, which are not lexed here). So: at each step, lex the
/// consumed bytes plus the lookahead character; if the token covers everything consumed, mark here;
/// if it (tentatively) covers the lookahead character too, or ends exactly before it, advance and look
/// again. Marks only move forward, and the last one is the token's end.
static int lex_jsyntax_token(TSLexer *lexer, TokBuf *t, size_t base, int last, int32_t *len, int32_t *suffix) {
    int kind = -1, last_kind = -1;
    int32_t mark = -1, last_end = -1, last_suffix = 0;
    for (;;) {
        size_t c = t->n - base;
        bool la = !lexer->eof(lexer);
        size_t w = 0;
        if (la) {
            if (t->n + 4 > sizeof t->buf) break;
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
        // Tokenize's own fast path (lex_identifier): an all-ASCII identifier continues over ASCII
        // identifier characters, except `!` (`x!=y`). Mark through them without asking again.
        int cl = jsk_kind_class[k];
        if (e > c && (cl == JSK_C_IDENTIFIER || cl == JSK_C_KEYWORD || cl == JSK_C_BOOL)) {
            bool ascii = true;
            for (size_t i = base; i < t->n; i++) ascii = ascii && t->buf[i] < 0x80;
            uint8_t x = t->buf[t->n - 1];
            while (ascii && x != '!' && jsk_ascii_identifier_char[x]) {
                lexer->mark_end(lexer); // x is in the token whatever follows
                mark = (int32_t)(t->n - base);
                int32_t y = lexer->lookahead;
                if (lexer->eof(lexer) || y >= 0x80 || t->n + 4 > sizeof t->buf || !jsk_ascii_identifier_char[y]) break;
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

// Read the rest of the line (after the marked token end) into t, for the kernel's lookahead questions.
static void read_line(TSLexer *lexer, TokBuf *t) {
    while (t->n + 4 <= 256 && !lexer->eof(lexer)) {
        int32_t ch = lexer->lookahead;
        t->n += utf8_encode(t->buf + t->n, ch);
        if (ch == '\n') break;
        lexer->advance(lexer, false);
    }
}

static int keyword_symbol(int k) {
    switch (k) {
        case JSK_K_baremodule: return KW_BAREMODULE;  case JSK_K_module: return KW_MODULE;
        case JSK_K_abstract: return KW_ABSTRACT;      case JSK_K_primitive: return KW_PRIMITIVE;
        case JSK_K_mutable: return KW_MUTABLE;        case JSK_K_struct: return KW_STRUCT;
        case JSK_K_type: return KW_TYPE;              case JSK_K_function: return KW_FUNCTION;
        case JSK_K_macro: return KW_MACRO;            case JSK_K_begin: return KW_BEGIN;
        case JSK_K_quote: return KW_QUOTE;            case JSK_K_let: return KW_LET;
        case JSK_K_if: return KW_IF;                  case JSK_K_elseif: return KW_ELSEIF;
        case JSK_K_else: return KW_ELSE;              case JSK_K_try: return KW_TRY;
        case JSK_K_catch: return KW_CATCH;            case JSK_K_finally: return KW_FINALLY;
        case JSK_K_for: return KW_FOR;                case JSK_K_while: return KW_WHILE;
        case JSK_K_do: return KW_DO;                  case JSK_K_break: return KW_BREAK;
        case JSK_K_continue: return KW_CONTINUE;      case JSK_K_return: return KW_RETURN;
        case JSK_K_const: return KW_CONST;            case JSK_K_global: return KW_GLOBAL;
        case JSK_K_local: return KW_LOCAL;            case JSK_K_export: return KW_EXPORT;
        case JSK_K_public: return KW_PUBLIC;          case JSK_K_import: return KW_IMPORT;
        case JSK_K_using: return KW_USING;            case JSK_K_as: return KW_AS;
        case JSK_K_outer: return KW_OUTER;            case JSK_K_in: return KW_IN;
        case JSK_K_isa: return KW_ISA;                case JSK_K_where: return KW_WHERE;
        case JSK_K_end: return KW_END;
        default: return -1; // doc, var: identifiers in this grammar
    }
}

static bool is_contextual_keyword(int k) {
    return k == JSK_K_abstract || k == JSK_K_as || k == JSK_K_doc || k == JSK_K_mutable || k == JSK_K_outer ||
           k == JSK_K_primitive || k == JSK_K_public || k == JSK_K_type || k == JSK_K_var;
}

/// The next token, lexed by JuliaSyntax: identifiers, keywords, numbers, booleans, operators (dotted and
/// suffixed). Returns false for anything else (punctuation, strings, comments: the internal lexer).
static bool scan_token(TSLexer *lexer, const bool *valid, bool ws_before, bool recovering) {
    // Characters that only ever start punctuation, strings, characters or comments in JuliaSyntax's
    // lexer: the internal lexer's tokens, no need to ask
    switch (lexer->lookahead) {
        case '(': case ')': case '[': case ']': case '{': case '}': case ',': case ';':
        case '"': case '`': case '#': case '\'':
            return false;
    }
    TokBuf t;
    t.n = 0;
    int32_t len = 0, suffix = 0;
    int k = lex_jsyntax_token(lexer, &t, 0, 0, &len, &suffix);
    if (k < 0) return false;
    int cls = jsk_kind_class[k];
    if (cls == JSK_C_DOT && len == 1) {
        // peek_dotted_op_token: `.` directly followed by an operator is a dotted operator (`.+`, `.=`)
        int32_t len2 = 0, suffix2 = 0;
        int k2 = lex_jsyntax_token(lexer, &t, 1, JSK_K_DOT, &len2, &suffix2);
        if (k2 < 0) return false;
        cls = k2 == JSK_K_EQ ? JSK_C_ASSIGNMENT : jsk_kind_class[k2];
        if (cls < JSK_C_ASSIGNMENT) return false; // field access, `...`: punctuation
    }
    int sym;
    if (cls == JSK_C_IDENTIFIER) {
        sym = IDENTIFIER;
    } else if (((cls == JSK_C_KEYWORD && keyword_symbol(k) >= 0) || cls == JSK_C_BOOL) && !ws_before &&
               valid[QUOTED_KEYWORD] && !recovering) {
        sym = QUOTED_KEYWORD; // `:end`: right after `:` (JuliaSyntax parse_atom: quote of the next atom)
    } else if (cls == JSK_C_KEYWORD) {
        int ks = keyword_symbol(k);
        bool kv = ks >= 0 && valid[ks], iv = valid[IDENTIFIER];
        if (kv && iv && is_contextual_keyword(k)) { // JuliaSyntax's parser looks at the next token
            read_line(lexer, &t);
            kv = jsyn_contextual_keyword(t.buf, t.n) == 1;
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
            read_line(lexer, &t);
            if (jsyn_space_prefix(t.buf, t.n) == 1) sym = SPACE_PREFIX_OPERATOR;
        }
    } else {
        return false;
    }
    if (!valid[sym]) return false;
    lexer->result_symbol = (TSSymbol)sym;
    return true;
}

bool tree_sitter_julia_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
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

    // In error recovery every symbol is valid: don't run the string/comment scanners there (they would
    // read to the end of the file); JuliaSyntax's lexer below says what the next token is
    bool recovering = valid_symbols[CONTENT_STR_1] && valid_symbols[CONTENT_CMD_1];

    if (!recovering && valid_symbols[BLOCK_COMMENT_REST] && scan_block_comment(lexer)) {
        return true;
    }

    if (!recovering && valid_symbols[CONTENT_STR_1] && scan_content(lexer, CONTENT_STR_1, '"', 1, true)) {
        return true;
    }

    if (!recovering && valid_symbols[CONTENT_STR_3] && scan_content(lexer, CONTENT_STR_3, '"', 3, true)) {
        return true;
    }

    if (!recovering && valid_symbols[CONTENT_CMD_1] && scan_content(lexer, CONTENT_CMD_1, '`', 1, true)) {
        return true;
    }

    if (!recovering && valid_symbols[CONTENT_CMD_3] && scan_content(lexer, CONTENT_CMD_3, '`', 3, true)) {
        return true;
    }

    if (!recovering && valid_symbols[CONTENT_STR_1_RAW] && scan_content(lexer, CONTENT_STR_1_RAW, '"', 1, false)) {
        return true;
    }

    if (!recovering && valid_symbols[CONTENT_STR_3_RAW] && scan_content(lexer, CONTENT_STR_3_RAW, '"', 3, false)) {
        return true;
    }

    if (!recovering && valid_symbols[CONTENT_CMD_1_RAW] && scan_content(lexer, CONTENT_CMD_1_RAW, '`', 1, false)) {
        return true;
    }

    if (!recovering && valid_symbols[CONTENT_CMD_3_RAW] && scan_content(lexer, CONTENT_CMD_3_RAW, '`', 3, false)) {
        return true;
    }

    bool any = false;
    for (int s = IDENTIFIER; s <= KW_END; s++) any = any || valid_symbols[s];
    if (!any) return false;

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
    return scan_token(lexer, valid_symbols, ws_before, recovering);
}
