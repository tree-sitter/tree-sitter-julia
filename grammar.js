/**
 * @file Julia grammar for tree-sitter
 * @author Max Brunsfeld <maxbrunsfeld@gmail.com>
 * @author Sergio A. Vargas <savargasqu+git@unal.edu.co>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = [
  'afunc',
  'pair',
  'conditional',
  'arrow',
  'lazy_or',
  'lazy_and',
  'where', // FIXME
  'comparison',
  'pipe_left',
  'pipe_right',
  'colon',
  'plus',
  'times',
  'rational',
  'bitshift',
  'prefix',
  'juxtapose', // `2x`: tighter than prefix (`-2x` is `-(2x)`), looser than power (`2x^2` is `2(x^2)`)
  'power',
  'decl',
  'dot',
].reduce((result, name, index) => {
  result[name] = index + 10;
  return result;
}, {});

PREC.array = -1;
PREC.tuple = -1;
PREC.assign = -2;
PREC.stmt = -3;
PREC.macro_arg = -4;


module.exports = grammar({
  name: 'julia',

  inline: $ => [
    $._block_form,
    $._terminator,
    $._definition,
    $._statement,
    $._operation,
    $._argument_separator,
    $._tuple_body,
    $._matrix_body,
  ],

  // The scanner's tokens (src/scanner.c, lexed by JuliaSyntax: src/jsyntax/), generated from
  // script/jsyntax/tokens.jl and JuliaSyntax's keyword list by script/jsyntax/regenerate.sh
  externals: $ => require('./grammar-tokens.js')($),

  conflicts: $ => [
    [$.matrix_row, $.comprehension_expression], // Comprehensions with newlines
    [$.parenthesized_expression, $.tuple_expression],
    [$.compound_statement, $._expression], // `a[begin+1]`: `begin` is firstindex inside indexing
    [$.macro_argument_list], // `[@m a b for x in xs]`: in brackets, where macro arguments end
  ],

  supertypes: $ => [
    $._expression,
    $._statement,
    $._definition,
  ],

  extras: $ => [
    /\s/,
    $.line_comment,
    $.block_comment,
  ],

  rules: {
    source_file: $ => optional(seq(
      sep1($._terminator, $._block_form),
      optional($._terminator)
    )),

    block: $ => seq(
      sep1($._terminator, $._block_form),
      optional($._terminator)
    ),

    _block_form: $ => choice(
      $._expression,
      $.assignment,
      $.open_tuple,
      alias($._assignment_operator, $.operator), // `≔` (not syntactic) as a name
    ),

    _bracket_form: $ => choice(
      $._expression,
      alias($._closed_assignment, $.assignment),
    ),

    open_tuple: $ => prec(PREC.tuple, seq(
      $._expression,
      repeat1(seq(',', $._expression))
    )),

    _open_tuple_comma: $ => prec(0, seq(sep1(',', $._expression), ',')), // `x, = xs`

    // assignments inside blocks
    assignment: $ => prec.right(PREC.assign, seq(
      choice(
        $._primary_expression,
        $.open_tuple,
        alias($._open_tuple_comma, $.open_tuple),
        $._operation,
        $.operator,
      ),
      alias('=', $.operator),
      $._block_form,
    )),

    // assignments inside brackets
    _closed_assignment: $ => prec.right(PREC.assign, seq(
      choice(
        $._primary_expression,
        $._operation,
        $.operator,
      ),
      alias('=', $.operator),
      $._bracket_form,
    )),

    _expression: $ => choice(
      $._definition,
      $._statement,
      $._primary_expression,
      $._operation,
      $.compound_assignment_expression,
      $.macrocall_expression,
      $.arrow_function_expression,
      $.juxtaposition_expression,
      $.ternary_expression,
      $.operator,
      $.integer_literal,
      $.float_literal,
      // `a[begin]`: firstindex inside indexing (GLR, see conflicts); elsewhere the block wins
      prec.dynamic(-1, alias('begin', $.identifier)),
    ),

    // Definitions

    _definition: $ => choice(
      $.module_definition,
      $.abstract_definition,
      $.primitive_definition,
      $.struct_definition,
      $.function_definition,
      $.macro_definition,
    ),

    module_definition: $ => seq(
      choice('module', 'baremodule'),
      field('name', choice($.identifier, $.interpolation_expression)),
      optional($._terminator),
      optional($.block),
      'end',
    ),

    // TODO: Rename
    type_head: $ => prec(PREC.stmt, choice(
      $._primary_expression,
      $.binary_expression,
    )),

    abstract_definition: $ => seq(
      'abstract',
      'type',
      $.type_head,
      optional($._terminator),
      'end',
    ),

    primitive_definition: $ => seq(
      'primitive',
      'type',
      $.type_head,
      $._expression,
      optional($._terminator),
      'end',
    ),

    struct_definition: $ => seq(
      optional('mutable'),
      'struct',
      $.type_head,
      optional($._terminator),
      optional($.block),
      'end',
    ),

    signature: $ => prec(PREC.stmt, choice(
      $.identifier, // zero-method definition
      $.operator, // `function + end`
      $.interpolation_expression, // `function $name end`
      $.call_expression,
      alias($.tuple_expression, $.argument_list), // anonymous function
      $.typed_expression,
      $.where_expression,
    )),

    function_definition: $ => seq(
      'function',
      $.signature,
      optional($._terminator),
      optional($.block),
      'end',
    ),

    macro_definition: $ => seq(
      'macro',
      $.signature,
      optional($._terminator),
      optional($.block),
      'end',
    ),


    // Statements

    _statement: $ => choice(
      // block statements:
      $.compound_statement,
      $.quote_statement,
      $.let_statement,
      $.if_statement,
      $.try_statement,
      $.for_statement,
      $.while_statement,
      // simple statements:
      $.break_statement,
      $.continue_statement,
      $.return_statement,
      $.const_statement,
      $.global_statement,
      $.local_statement,
      $.export_statement,
      $.public_statement,
      $.import_statement,
      $.using_statement,
    ),

    compound_statement: $ => seq('begin', optional($._terminator), optional($.block), 'end'),

    quote_statement: $ => seq('quote', optional($._terminator), optional($.block), 'end'),

    let_statement: $ => seq(
      'let',
      choice(
        seq(sep(',', $._bracket_form), $._terminator, optional($.block)),
        sep1(',', $._bracket_form), // `let x = 1 end`
      ),
      'end',
    ),

    if_statement: $ => seq(
      'if',
      field('condition', $._expression),
      optional($._terminator),
      optional($.block),
      field('alternative', repeat($.elseif_clause)),
      field('alternative', optional($.else_clause)),
      'end',
    ),

    elseif_clause: $ => seq(
      'elseif',
      field('condition', $._expression),
      optional($._terminator),
      optional($.block),
    ),

    else_clause: $ => seq(
      'else',
      optional($._terminator),
      optional($.block),
    ),

    try_statement: $ => seq(
      'try',
      optional($._terminator),
      optional($.block),
      choice(
        seq(
          $.catch_clause,
          optional($.else_clause),
          optional($.finally_clause),
        ),
        seq(
          $.finally_clause,
          optional($.catch_clause),
          // `else` is not valid here.
        ),
      ),
      'end',
    ),

    catch_clause: $ => prec(1, seq(
      'catch',
      optional($.identifier),
      optional($._terminator),
      optional($.block),
    )),

    finally_clause: $ => seq(
      'finally',
      optional($._terminator),
      optional($.block),
    ),

    for_statement: $ => seq(
      'for',
      sep1(',', $.for_binding),
      optional($._terminator),
      optional($.block),
      'end',
    ),

    while_statement: $ => seq(
      'while',
      field('condition', $._expression),
      optional($._terminator),
      optional($.block),
      'end',
    ),

    break_statement: _ => 'break',

    continue_statement: _ => 'continue',

    return_statement: $ => prec.right(PREC.stmt, seq(
      'return',
      optional($._block_form),
    )),

    const_statement: $ => prec.right(PREC.stmt, seq(
      'const',
      $._block_form,
    )),

    global_statement: $ => prec.right(PREC.stmt, seq(
      'global',
      $._block_form,
    )),

    local_statement: $ => prec.right(PREC.stmt, seq(
      'local',
      $._block_form,
    )),

    import_alias: $ => seq($._importable, 'as', $._exportable),

    import_path: $ => seq(
      $._import_dots,
      choice(
        $.identifier,
        $._import_dotted,
        $.operator, // `import .⋆`
      ),
    ),

    // `Base.Math`, `Base.@kwdef`
    _import_dotted: $ => seq(
      choice($.identifier, $.interpolation_expression),
      repeat1(seq(
        token.immediate('.'),
        choice(
          choice($.identifier, $.interpolation_expression),
          alias($._simple_macro_identifier, $.macro_identifier),
          $.operator, // `import Base.*`: a dotted operator is not valid here, so the scanner leaves `.` to the lexer
        ),
      )),
    ),

    _simple_macro_identifier: $ => seq('@', $.identifier),

    _exportable: $ => choice(
      $.identifier,
      $.macro_identifier,
      $.operator,
      $.interpolation_expression,
      $.prefixed_string_literal, // `var"@debug"`
      parenthesize($._exportable),
    ),

    _importable: $ => choice(
      $._exportable,
      alias($._import_dotted, $.import_path),
      $.import_path,
    ),

    _import_list: $ => prec.right(sep1(',', choice(
      $._importable,
      $.import_alias,
    ))),

    selected_import: $ => prec(1, seq( // over a range on the import statement
      $._importable,
      alias($._colon, ':'),
      $._import_list,
    )),

    export_statement: $ => seq('export', prec.right(sep1(',', $._exportable))),

    public_statement: $ => seq('public', prec.right(sep1(',', $._exportable))),

    import_statement: $ => seq(
      'import',
      choice(
        $._import_list,
        $.selected_import,
      ),
    ),

    using_statement: $ => seq(
      'using',
      choice(
        $._import_list,
        $.selected_import,
      ),
    ),

    // Primary expressions can be called, indexed, accessed, and type parametrized.
    _primary_expression: $ => choice(
      $.identifier,
      $.boolean_literal,
      $.curly_expression, // Only valid in macros
      $.parenthesized_expression,
      $.tuple_expression,
      $._array,
      $._string,
      $.adjoint_expression,
      $.broadcast_call_expression,
      $.call_expression,
      alias($._closed_macrocall_expression, $.macrocall_expression),
      $.parametrized_type_expression,
      $.field_expression,
      $.index_expression,
      $.interpolation_expression,
      $.quote_expression,
    ),

    _array: $ => choice(
      $.comprehension_expression,
      $.matrix_expression,
      $.vector_expression,
    ),

    comprehension_expression: $ => prec(PREC.array, seq(
      '[',
      $._bracket_form,
      optional($._terminator),
      $.for_clause,
      repeat(choice(
        $.for_clause,
        $.if_clause,
      )),
      ']',
    )),

    generator: $ => seq(
      $._bracket_form,
      $.for_clause,
      repeat(choice(
        $.for_clause,
        $.if_clause,
      )),
    ),

    if_clause: $ => seq(
      'if',
      $._expression,
    ),

    for_clause: $ => prec.right(seq(
      'for',
      sep1(',', $.for_binding),
    )),

    for_binding: $ => prec(1, seq(
      optional('outer'),
      choice(
        $.identifier,
        $.tuple_expression,
        $.typed_expression,
        $.interpolation_expression,
      ),
      alias(choice('in', '=', '∈'), $.operator),
      $._expression,
    )),

    matrix_expression: $ => prec(PREC.array, seq(
      '[',
      choice(
        $._matrix_body,
        $._semicolon, // `[;;]`: an empty ncat
      ),
      ']',
    )),

    _matrix_body: $ => seq($.matrix_row, repeat(seq($._terminator, $.matrix_row)), optional($._terminator)),

    matrix_row: $ => repeat1(prec(PREC.array, seq($._bracket_form, optional($._space_sensitive_probe)))),

    vector_expression: $ => seq(
      '[',
      sep(',', $._bracket_form),
      optional(','),
      ']',
    ),

    parenthesized_expression: $ => prec.dynamic(1, parenthesize(
      sep1($._semicolon, choice(
        $._bracket_form,
        $.generator,
      )),
      optional($._semicolon),
    )),

    tuple_expression: $ => parenthesize(optional($._tuple_body)),

    _tuple_body: $ => choice(
      $._semicolon,
      seq(
        optional($._semicolon),
        sep1($._argument_separator, choice($._bracket_form, $.generator)),
        optional($._argument_separator),
      ),
    ),

    // `f(a, b; c)`, `f(a, b, ; c)`, `f(a;)`
    _argument_separator: $ => choice(',', seq(optional(','), $._semicolon)),

    curly_expression: $ => seq(
      '{',
      optional(choice($._tuple_body, prec(PREC.array, $._matrix_body))), // `{a, b; c}`, `{x for x in xs}`, `{a b}`
      '}',
    ),

    adjoint_expression: $ => seq(
      $._primary_expression,
      alias($._adjoint, "'"),
    ),

    field_expression: $ => prec(PREC.dot, seq(
      field('value', $._primary_expression),
      token.immediate('.'),
      choice(
        $.identifier,
        $.interpolation_expression,
        $.quote_expression,
        $._string,
      ),
    )),

    index_expression: $ => seq(
      $._primary_expression,
      $._immediate_bracket,
      $._array,
    ),

    parametrized_type_expression: $ => seq(
      $._primary_expression,
      $._immediate_brace,
      $.curly_expression,
    ),

    call_expression: $ => seq(
      choice($._primary_expression, $.operator),
      $._immediate_paren,
      alias($.tuple_expression, $.argument_list),
      optional($.do_clause),
    ),

    broadcast_call_expression: $ => seq(
      $._primary_expression,
      token.immediate('.'),
      $._immediate_paren,
      alias($.tuple_expression, $.argument_list),
      optional($.do_clause),
    ),

    _qualified_macro_identifier: $ => seq(
      $._primary_expression,
      token.immediate('.'),
      $.macro_identifier,
    ),

    _macro_head: $ => choice(
      alias($._qualified_macro_identifier, $.field_expression),
      $.macro_identifier,
    ),

    _closed_macrocall_expression: $ => seq(
      $._macro_head,
      choice(
        seq($._immediate_brace, $.curly_expression),
        seq($._immediate_bracket, $._array),
        seq(
          $._immediate_paren,
          alias($.tuple_expression, $.argument_list),
          optional($.do_clause)
        ),
      ),
    ),

    macrocall_expression: $ => prec.right(seq($._macro_head, optional($._macro_args_probe), optional($.macro_argument_list))),

    macro_argument_list: $ => repeat1(prec(PREC.macro_arg, seq($._block_form, optional($._space_sensitive_probe)))),

    do_clause: $ => seq(
      'do',
      choice(seq(sep(',', $._bracket_form), $._terminator), sep1(',', $._bracket_form)),
      optional($.block),
      'end',
    ),

    interpolation_expression: $ => prec.right(PREC.prefix, seq(
      '$',
      choice(
        $.integer_literal,
        $.float_literal,
        $.identifier,
        $.curly_expression,
        $.parenthesized_expression,
        $.tuple_expression,
        $._array,
        $._string,
        $.interpolation_expression, // `$$x`
      ),
    )),

    quote_expression: $ => prec.right(PREC.prefix, seq(
      alias($._quote_colon, ':'),
      choice(
        $.integer_literal,
        $.float_literal,
        $._string,
        $.identifier,
        $.operator,
        alias($._simple_macro_identifier, $.macro_identifier), // `:@foo`
        seq($._immediate_brace, $.curly_expression),
        seq($._immediate_bracket, $._array),
        seq($._immediate_paren, choice(
          $.parenthesized_expression,
          $.tuple_expression,
          // Syntactic operators in parentheses
          parenthesize(
            alias(
              choice(
                '::', ':=', '.=', '=',
                $._assignment_operator,
                $._lazy_or_operator,
                $._lazy_and_operator,
                $._syntactic_operator,
              ),
              $.operator,
            ),
          ),
        )),
        // Syntactic operators without parentheses
        alias(
          choice(
            $._assignment_operator,
            $._lazy_or_operator,
            $._lazy_and_operator,
            $._syntactic_operator,
          ),
          $.operator,
        ),
        alias($._quoted_keyword, $.identifier),
      ),
    )),


    // Operations

    _operation: $ => choice(
      $.unary_expression,
      $.binary_expression,
      $.range_expression,
      $.splat_expression,
      $.typed_expression,
      $.unary_typed_expression,
      $.where_expression,
    ),

    binary_expression: $ => {
      const table = [
        [prec.right, PREC.pair, $._pair_operator],
        [prec.right, PREC.arrow, $._arrow_operator],
        [prec.left, PREC.lazy_or, $._lazy_or_operator],
        [prec.left, PREC.lazy_and, $._lazy_and_operator],
        [prec.left, PREC.comparison, choice('in', 'isa', $._comparison_operator, $._type_order_operator)],
        [prec.right, PREC.pipe_left, $._pipe_left_operator],
        [prec.left, PREC.pipe_right, $._pipe_right_operator],
        [prec.left, PREC.colon, $._ellipsis_operator],
        [prec.left, PREC.plus, choice($._unary_plus_operator, $._plus_operator)],
        [prec.left, PREC.times, $._times_operator],
        [prec.left, PREC.rational, $._rational_operator],
        [prec.left, PREC.bitshift, $._bitshift_operator],
        [prec.left, PREC.power, $._power_operator],
      ];

      return choice(...table.map(([fn, prec, op]) => fn(prec, seq(
        $._expression,
        alias(op, $.operator),
        $._expression,
      ))));
    },

    unary_expression: $ => choice(
      prec.right(PREC.prefix, seq(
        alias(choice(
          $._tilde_operator,
          $._type_order_operator,
          $._unary_operator,
          $._unary_plus_operator,
        ), $.operator),
        $._expression,
      )),
      // `[x -y]`: a prefix operator starting a new element (decided by the scanner)
      prec.right(PREC.prefix, seq(
        alias($._space_prefix_operator, $.operator),
        $._expression,
      )),
    ),

    // `a:b`, `a : b`, `length(x) : -1 : 2` (the scanner applies JuliaSyntax's parse_range rule)
    range_expression: $ => prec.left(PREC.colon, seq(
      $._expression,
      alias($._colon, ':'),
      $._expression,
    )),

    splat_expression: $ => prec(PREC.colon, seq($._expression, '...')),

    // JuliaSyntax parses the middle branch with ranges switched off (parse_cond), so a `:` there ends it:
    // the scanner emits `_ternary_colon` whenever that token is valid
    ternary_expression: $ => prec.right(PREC.conditional, seq(
      $._expression,
      '?',
      choice($._expression, alias($._closed_assignment, $.assignment)),
      alias($._ternary_colon, ':'),
      choice($._expression, alias($._closed_assignment, $.assignment)),
    )),

    typed_expression: $ => prec(PREC.decl, seq(
      $._expression,
      '::',
      $._primary_expression,
    )),

    unary_typed_expression: $ => prec.right(PREC.prefix, seq(
      '::',
      $._primary_expression,
    )),

    arrow_function_expression: $ => prec.right(PREC.afunc, seq(
      choice( // JuliaSyntax: any expression; here the atoms that occur
        $.identifier,
        alias($.tuple_expression, $.argument_list),
        $.typed_expression,
        alias($._closed_macrocall_expression, $.macrocall_expression), // `@nospecialize(a) -> …`
        $.interpolation_expression, // `$var -> $body`
        $.parametrized_type_expression, // `Tuple{Float64}->_`
        $.boolean_literal, // `@breaking true -> …`
        $.character_literal, // `@trigger '*' -> …`
        $.integer_literal,
        $.float_literal,
      ),
      '->',
      $._bracket_form,
    )),

    // `2x`, `(n+1)ε`, `VT'Vecs`, `2(x)`, `1√x`: the scanner says when (JuliaSyntax's is_juxtapose)
    // Like a binary operator (so its tokens are valid exactly where operators are, which keeps the parse
    // table small), between prefix and power: `-2x` is `-(2x)`, `2x^2` is `2(x^2)`.
    juxtaposition_expression: $ => prec.left(PREC.juxtapose, seq(
      // the scanner emits `_juxtapose` only where JuliaSyntax juxtaposes (never after an operator)
      $._expression,
      $._juxtapose,
      choice($._primary_expression, $.unary_expression),
    )),

    compound_assignment_expression: $ => prec.right(PREC.assign, seq(
      choice($._primary_expression, $._operation),
      alias(choice($._assignment_operator, $._tilde_operator), $.operator),
      $._bracket_form,
    )),

    where_expression: $ => prec.left(PREC.where, seq(
      $._expression,
      'where',
      $._expression,
    )),


    // Tokens

    macro_identifier: $ => seq('@', choice(
      $.identifier,
      $.operator,
      alias($._syntactic_operator, $.operator),
      alias($._scoped_identifier, $.field_expression),
    )),

    _scoped_identifier: $ => seq(
      choice($.identifier, $.interpolation_expression),
      repeat1(
        seq(
          token.immediate('.'),
          choice($.identifier, $.interpolation_expression),
        ),
      ),
    ),

    // Literals

    _string: $ => choice(
      $.character_literal,
      $.string_literal,
      $.command_literal,
      $.prefixed_string_literal,
      $.prefixed_command_literal,
    ),

    string_literal: $ => choice(
      seq(
        $._delimiter_str_1,
        repeat(choice(alias($._content_str_1_run, $.content), $.string_interpolation, $.escape_sequence)),
        $._end_str,
      ),
      seq(
        $._delimiter_str_3,
        repeat(choice(alias($._content_str_3_run, $.content), $.string_interpolation, $.escape_sequence)),
        $._end_str,
      ),
    ),

    command_literal: $ => choice(
      seq(
        $._delimiter_cmd_1,
        repeat(choice(alias($._content_cmd_1_run, $.content), $.string_interpolation, $.escape_sequence)),
        $._end_cmd,
      ),
      seq(
        $._delimiter_cmd_3,
        repeat(choice(alias($._content_cmd_3_run, $.content), $.string_interpolation, $.escape_sequence)),
        $._end_cmd,
      ),
    ),

    prefixed_string_literal: $ => prec.left(seq(
      field('prefix', $.identifier),
      $._immediate_string_start,
      choice(
        seq(
          $._delimiter_str_1,
          repeat(choice(alias($._content_str_1_raw_run, $.content), $.escape_sequence)),
          $._end_str,
        ),
        seq(
          $._delimiter_str_3,
          repeat(choice(alias($._content_str_3_raw_run, $.content), $.escape_sequence)),
          $._end_str,
        ),
      ),
      optional(field('suffix', alias($._string_suffix, $.identifier))),
    )),

    prefixed_command_literal: $ => prec.left(seq(
      field('prefix', $.identifier),
      $._immediate_command_start,
      choice(
        seq(
          $._delimiter_cmd_1,
          repeat(choice(alias($._content_cmd_1_raw_run, $.content), $.escape_sequence)),
          $._end_cmd,
        ),
        seq(
          $._delimiter_cmd_3,
          repeat(choice(alias($._content_cmd_3_raw_run, $.content), $.escape_sequence)),
          $._end_cmd,
        ),
      ),
      optional(field('suffix', alias($._string_suffix, $.identifier))),
    )),

    string_interpolation: $ => seq(
      '$',
      choice(
        $.identifier,
        seq($._immediate_paren, parenthesize($._bracket_form)),
      ),
    ),

    operator: $ => choice(
      // NOTE: Syntactic operators (&&, +=, etc) cannot be used as identifiers.
      $._pair_operator,
      $._arrow_operator,
      $._comparison_operator,
      $._pipe_left_operator,
      $._pipe_right_operator,
      $._ellipsis_operator,
      ':',
      $._plus_operator,
      $._times_operator,
      $._rational_operator,
      $._bitshift_operator,
      $._power_operator,
      $._tilde_operator,
      $._type_order_operator,
      $._unary_operator,
      $._unary_plus_operator,
    ),

    _syntactic_operator: _ => choice('$', '.', '...', '->', '?'),


    _semicolon: _ => seq(';', repeat(token.immediate(';'))),

    _terminator: $ => choice($._newline, $._semicolon),

    // content: a run of content pieces (JuliaSyntax's chunks), between escapes and interpolations
    _content_str_1_run: $ => prec.right(repeat1($._content_str_1)),
    _content_str_3_run: $ => prec.right(repeat1($._content_str_3)),
    _content_cmd_1_run: $ => prec.right(repeat1($._content_cmd_1)),
    _content_cmd_3_run: $ => prec.right(repeat1($._content_cmd_3)),
    _content_str_1_raw_run: $ => prec.right(repeat1($._content_str_1_raw)),
    _content_str_3_raw_run: $ => prec.right(repeat1($._content_str_3_raw)),
    _content_cmd_1_raw_run: $ => prec.right(repeat1($._content_cmd_1_raw)),
    _content_cmd_3_raw_run: $ => prec.right(repeat1($._content_cmd_3_raw)),
  },
});

/**
 *
 * @param {RuleOrLiteral} separator
 * @param {RuleOrLiteral} rule
 */
function sep(separator, rule) {
  return optional(sep1(separator, rule));
}

/**
 *
 * @param {RuleOrLiteral} separator
 * @param {RuleOrLiteral} rule
 */
function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}

/**
 *
 * @param {...any} rules
 */
function parenthesize(...rules) {
  return seq('(', ...rules, ')');
}
