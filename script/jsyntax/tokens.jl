# The scanner's tokens: grammar.js's externals (grammar-tokens.js) and scanner.c's enum (externals.h) are
# generated from this list by gen_kinds.jl, so the two can't disagree. Keywords come from JuliaSyntax.
const SCANNER_TOKENS = [
    # zero-width: an opening bracket/quote with no whitespace before (call, index, string macro)
    "_immediate_paren", "_immediate_bracket", "_immediate_brace", "_immediate_string_start", "_immediate_command_start",
    # strings and commands (lex_string_chunk): content pieces, closing delimiters
    "_content_cmd_1", "_content_cmd_1_raw", "_content_cmd_3", "_content_cmd_3_raw",
    "_content_str_1", "_content_str_1_raw", "_content_str_3", "_content_str_3_raw",
    "_end_cmd", "_end_str",
    "_delimiter_str_1", "_delimiter_str_3", "_delimiter_cmd_1", "_delimiter_cmd_3",
    "escape_sequence", "character_literal",
    "_adjoint",                # `'` right after an expression
    "_string_suffix",          # `r"x"i`, `x"s"2`: right after a string macro's closing quote
    "line_comment", "block_comment",
    # `[x -y]`: a prefix `+`/`-` starting a new element (JuliaSyntax's space-sensitive rule)
    "_space_prefix_operator",
    "_space_sensitive_probe",  # never emitted: valid right after a matrix-row / macro-argument element
    "_macro_args_probe",       # never emitted: valid right after a macro name, where arguments may start
    # JuliaSyntax's tokens
    "identifier", "integer_literal", "float_literal", "boolean_literal",
    # operators by JuliaSyntax precedence class (same order as kernel.jl CLASSES, ASSIGNMENT..UNARY)
    "_assignment_operator", "_pair_operator", "_arrow_operator", "_lazy_or_operator", "_lazy_and_operator",
    "_comparison_operator", "_pipe_left_operator", "_pipe_right_operator", "_ellipsis_operator",
    "_plus_operator", "_unary_plus_operator", "_times_operator", "_rational_operator", "_bitshift_operator",
    "_power_operator", "_tilde_operator", "_type_order_operator", "_unary_operator",
    "_newline",                # a newline where it terminates a statement or a matrix row
    "_import_dots",            # `using ..A`
    "_quoted_keyword",         # `:end`, `:true`
    "_juxtapose",              # zero-width: `2x`, `(n+1)ε`, `VT'Vecs`, `2(x)`, `1√x` (JuliaSyntax's is_juxtapose)
    # `:` (JuliaSyntax: parse_range, parse_cond, parse_atom)
    # three tokens: the grammar cannot tell a range from a quote or a ternary's `:`, JuliaSyntax can
    "_colon",                  # `a:b`, `a : b`, `c ? a : b`; not `[1 :a]` (space-sensitive: a quote)
    "_quote_colon",            # `:x`, `:(a + b)`
    "_ternary_colon",          # `:` ending a ternary's middle branch (JuliaSyntax: ranges off there)
]
const SCANNER_STRINGS = ["∈" => "ELEMENT_OF"]  # the iteration operator in `for x ∈ xs`
