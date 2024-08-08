#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"
#include <string.h> // memcpy
#include <wctype.h>

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
    BLOCK_COMMENT,
    IMMEDIATE_PAREN,
    IMMEDIATE_BRACKET,
    IMMEDIATE_BRACE,
    STRING_START,
    COMMAND_START,
    IMMEDIATE_STRING_START,
    IMMEDIATE_COMMAND_START,
    STRING_END,
    COMMAND_END,
    STRING_CONTENT,
    STRING_CONTENT_NO_INTERP,
};

/// To efficiently store a delimiter, we take advantage of the fact that:
///     (int)'"' % 2 == 0
///     (int)'`' % 2 == 0
/// Since " and ` have an even numeric representation,
/// we store a triple quoted delimiter as (delimiter + 1).
typedef char Delimiter;

/// Use a stack to keep track of string and command delimiters.
typedef Array(Delimiter) Stack;

void *tree_sitter_julia_external_scanner_create() {
    unsigned capacity = TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
    Delimiter *contents = ts_malloc(capacity);
    if (contents == NULL) abort();
    Stack *stack = ts_malloc(sizeof(Stack));
    if (stack == NULL) abort();
    stack->contents = contents;
    stack->capacity = capacity;
    stack->size = 0;
    return stack;
}

void tree_sitter_julia_external_scanner_destroy(void *payload) {
    array_delete(payload);
    ts_free(payload);
}

unsigned tree_sitter_julia_external_scanner_serialize(void *payload, char *buffer) {
    Stack *stack = payload;
    // Truncate size to avoid overflows
    unsigned size = stack->size > TREE_SITTER_SERIALIZATION_BUFFER_SIZE ? TREE_SITTER_SERIALIZATION_BUFFER_SIZE : stack->size;
    memcpy(buffer, stack->contents, size);
    return size;
}

void tree_sitter_julia_external_scanner_deserialize(void *payload, const char *buffer, unsigned size) {
    Stack *stack = payload;
    if (size > 0) {
        memcpy(stack->contents, buffer, size);
        stack->size = size;
    } else {
        stack->size = 0;
    }
}

// Scanner functions

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }

static bool scan_string_start(TSLexer *lexer, Stack *stack, char start_char) {
    if (lexer->lookahead != start_char) return false;
    advance(lexer);
    mark_end(lexer);
    bool is_triple = true;
    for (unsigned i = 1; i < 3; i++) {
        if (lexer->lookahead == start_char) {
            advance(lexer);
        } else {
            is_triple = false;
            break;
        }
    }
    if (is_triple) {
        mark_end(lexer);
        array_push(stack, start_char + 1);
    } else {
        array_push(stack, start_char);
    }
    return true;
}

static bool scan_string_content(TSLexer *lexer, Stack *stack, bool interp) {
    if (stack->size == 0) return false;      // Stack is empty, so we're not in a string
    Delimiter end_char = *array_back(stack); // peek
    bool is_triple = false;
    if (end_char % 2 != 0) {
        is_triple = true;
        end_char--;
    }
    TSSymbol end_symbol = (end_char == '"') ? STRING_END : COMMAND_END;
    TSSymbol content_symbol = interp ? STRING_CONTENT : STRING_CONTENT_NO_INTERP;
    bool has_content = false;
    int32_t next;
    while ((next = lexer->lookahead)) {
        mark_end(lexer);
        if (next == '\\') {
            lexer->result_symbol = content_symbol;
            return has_content;
        } else if (next == '$' && interp) {
            lexer->result_symbol = content_symbol;
            return has_content;
        } else if (next == end_char) {
            bool is_end_delimiter = true;
            if (is_triple) {
                for (unsigned i = 0; i < 3; i++) {
                    if (lexer->lookahead == end_char) {
                        advance(lexer);
                    } else {
                        is_end_delimiter = false;
                        break;
                    }
                }
            } else {
                advance(lexer);
            }
            if (is_end_delimiter) {
                if (has_content) {
                    lexer->result_symbol = content_symbol;
                    return true;
                } else {
                    mark_end(lexer);
                    array_pop(stack);
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
    if (lexer->lookahead != '#') return false;
    advance(lexer);
    if (lexer->lookahead != '=') return false;
    advance(lexer);

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
                        lexer->result_symbol = BLOCK_COMMENT;
                        return true;
                    }
                } else {
                    after_eq = false;
                    if (lexer->lookahead == '=') {
                        nesting_depth++;
                        advance(lexer);
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
    }

    if (valid_symbols[IMMEDIATE_STRING_START] && scan_string_start(lexer, payload, '"')) {
        lexer->result_symbol = IMMEDIATE_STRING_START;
        return true;
    }

    if (valid_symbols[IMMEDIATE_COMMAND_START] && scan_string_start(lexer, payload, '`')) {
        lexer->result_symbol = IMMEDIATE_COMMAND_START;
        return true;
    }

    // content or end
    if (valid_symbols[STRING_CONTENT] && scan_string_content(lexer, payload, true)) {
        return true;
    }

    if (valid_symbols[STRING_CONTENT_NO_INTERP] && scan_string_content(lexer, payload, false)) {
        return true;
    }

    // Ignore whitespace
    while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
    }

    if (valid_symbols[STRING_START] && scan_string_start(lexer, payload, '"')) {
        lexer->result_symbol = STRING_START;
        return true;
    }

    if (valid_symbols[COMMAND_START] && scan_string_start(lexer, payload, '`')) {
        lexer->result_symbol = COMMAND_START;
        return true;
    }

    if (valid_symbols[BLOCK_COMMENT] && scan_block_comment(lexer)) {
        return true;
    }

    return false;
}
