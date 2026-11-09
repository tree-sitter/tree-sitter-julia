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
    SPACE_PREFIX_GATE,
    SPACE_SENSITIVE_PROBE,
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

static bool is_unary_plus_char(int32_t c) { return c == '+' || c == '-' || c == 0x00B1 || c == 0x2213; } // + - ± ∓

/// `[x -y]` is `[x (-y)]`, but `[x - y]`, `[x -= y]` and `[x +₁y]` are infix. Called right after an element
/// of a matrix row or of macro arguments (SPACE_SENSITIVE_PROBE valid), where a new element may start
/// (SPACE_PREFIX_GATE valid). After whitespace, with `+`/`-`/`±`/`∓` (or a dotted one) next, it asks
/// JuliaSyntax's own rule (parse_with_chains: whitespace before, an operator that is both unary and binary,
/// no whitespace after; computed by JuliaSyntax's lexer, compiled to C) and emits a zero-width token if the
/// operator is a prefix operator. Reads ahead to the end of the line: the lexer needs the operator and the
/// token after it.
static bool scan_space_prefix_gate(TSLexer *lexer) {
    if (lexer->lookahead != ' ' && lexer->lookahead != '\t') return false;
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') lexer->advance(lexer, true);
    int32_t c = lexer->lookahead;
    if (!is_unary_plus_char(c) && c != '.') return false;
    lexer->mark_end(lexer);
    uint8_t buf[256];
    size_t n = 0;
    while (n + 4 <= sizeof buf && !lexer->eof(lexer)) {
        int32_t ch = lexer->lookahead;
        n += utf8_encode(buf + n, ch);
        if (ch == '\n') break;
        lexer->advance(lexer, false);
        if (n == 1 && c == '.' && !is_unary_plus_char(lexer->lookahead)) return false;
    }
    if (jsyn_space_prefix(buf, n) != 1) return false;
    lexer->result_symbol = SPACE_PREFIX_GATE;
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

    if (valid_symbols[BLOCK_COMMENT_REST] && scan_block_comment(lexer)) {
        return true;
    }

    // After an element of a matrix row or of macro arguments; not right after `#=`, and not in error
    // recovery (where every symbol is valid)
    if (valid_symbols[SPACE_PREFIX_GATE] && valid_symbols[SPACE_SENSITIVE_PROBE] && !valid_symbols[BLOCK_COMMENT_REST] &&
        !(valid_symbols[CONTENT_STR_1] && valid_symbols[CONTENT_CMD_1])) {
        return scan_space_prefix_gate(lexer);
    }

    if (valid_symbols[CONTENT_STR_1] && scan_content(lexer, CONTENT_STR_1, '"', 1, true)) {
        return true;
    }

    if (valid_symbols[CONTENT_STR_3] && scan_content(lexer, CONTENT_STR_3, '"', 3, true)) {
        return true;
    }

    if (valid_symbols[CONTENT_CMD_1] && scan_content(lexer, CONTENT_CMD_1, '`', 1, true)) {
        return true;
    }

    if (valid_symbols[CONTENT_CMD_3] && scan_content(lexer, CONTENT_CMD_3, '`', 3, true)) {
        return true;
    }

    if (valid_symbols[CONTENT_STR_1_RAW] && scan_content(lexer, CONTENT_STR_1_RAW, '"', 1, false)) {
        return true;
    }

    if (valid_symbols[CONTENT_STR_3_RAW] && scan_content(lexer, CONTENT_STR_3_RAW, '"', 3, false)) {
        return true;
    }

    if (valid_symbols[CONTENT_CMD_1_RAW] && scan_content(lexer, CONTENT_CMD_1_RAW, '`', 1, false)) {
        return true;
    }

    if (valid_symbols[CONTENT_CMD_3_RAW] && scan_content(lexer, CONTENT_CMD_3_RAW, '`', 3, false)) {
        return true;
    }

    return false;
}
