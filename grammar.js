const PREC = [
  'assign',
  'pair',
  'conditional',
  'lazy_or',
  'lazy_and',
  'arrow',
  'comparison',
  'pipe_left',
  'pipe_right',
  'colon_quote',
  'colon_range',
  'plus',
  'times',
  'rational',
  'bitshift',
  'power',
  'call',
  'decl',
  'dot',
  'postfix',
  'prefix',
].reduce((result, name, index) => {
  result[name] = index + 10;
  return result;
}, {});

const ASSIGN_OPERATORS = `
  = += -= *= /= //= \\= ^= ÷= %= <<= >>= >>>= |= &= ⊻= ≔ ⩴ ≕
`;

const ARROW_OPERATORS = `
  ← → ↔ ↚ ↛ ↞ ↠ ↢ ↣ ↦ ↤ ↮ ⇎ ⇍ ⇏ ⇐ ⇒ ⇔ ⇴ ⇶
  ⇷ ⇸ ⇹ ⇺ ⇻ ⇼ ⇽ ⇾ ⇿ ⟵ ⟶ ⟷ ⟹ ⟺ ⟻ ⟼ ⟽ ⟾
  ⟿ ⤀ ⤁ ⤂ ⤃ ⤄ ⤅ ⤆ ⤇ ⤌ ⤍ ⤎ ⤏ ⤐ ⤑ ⤔ ⤕ ⤖ ⤗ ⤘
  ⤝ ⤞ ⤟ ⤠ ⥄ ⥅ ⥆ ⥇ ⥈ ⥊ ⥋ ⥎ ⥐ ⥒ ⥓ ⥖ ⥗ ⥚ ⥛ ⥞ ⥟
  ⥢ ⥤ ⥦ ⥧ ⥨ ⥩ ⥪ ⥫ ⥬ ⥭ ⥰ ⧴ ⬱ ⬰ ⬲ ⬳ ⬴ ⬵ ⬶ ⬷
  ⬸ ⬹ ⬺ ⬻ ⬼ ⬽ ⬾ ⬿ ⭀ ⭁ ⭂ ⭃ ⭄ ⭇ ⭈ ⭉ ⭊ ⭋ ⭌ ￩ ￫
  ⇜ ⇝ ↜ ↝ ↩ ↪ ↫ ↬ ↼ ↽ ⇀ ⇁ ⇄ ⇆ ⇇ ⇉ ⇋ ⇌ ⇚ ⇛ ⇠ ⇢
`;

const COMPARISON_OPERATORS = `
  > < >= ≥ <= ≤ == === ≡ != ≠ !== ≢ ∈ ∉ ∋ ∌ ⊆ ⊈ ⊂ ⊄ ⊊ ∝ ∊ ∍ ∥ ∦ ∷ ∺ ∻ ∽ ∾ ≁
  ≃ ≂ ≄ ≅ ≆ ≇ ≈ ≉ ≊ ≋ ≌ ≍ ≎ ≐ ≑ ≒ ≓ ≖ ≗ ≘ ≙ ≚ ≛ ≜ ≝ ≞ ≟ ≣ ≦ ≧ ≨ ≩ ≪ ≫ ≬ ≭
  ≮ ≯ ≰ ≱ ≲ ≳ ≴ ≵ ≶ ≷ ≸ ≹ ≺ ≻ ≼ ≽ ≾ ≿ ⊀ ⊁ ⊃ ⊅ ⊇ ⊉ ⊋ ⊏ ⊐ ⊑ ⊒ ⊜ ⊩ ⊬ ⊮ ⊰ ⊱
  ⊲ ⊳ ⊴ ⊵ ⊶ ⊷ ⋍ ⋐ ⋑ ⋕ ⋖ ⋗ ⋘ ⋙ ⋚ ⋛ ⋜ ⋝ ⋞ ⋟ ⋠ ⋡ ⋢ ⋣ ⋤ ⋥ ⋦ ⋧ ⋨ ⋩ ⋪ ⋫
  ⋬ ⋭ ⋲ ⋳ ⋴ ⋵ ⋶ ⋷ ⋸ ⋹ ⋺ ⋻ ⋼ ⋽ ⋾ ⋿ ⟈ ⟉ ⟒ ⦷ ⧀ ⧁ ⧡ ⧣ ⧤ ⧥ ⩦ ⩧ ⩪ ⩫ ⩬ ⩭ ⩮ ⩯
  ⩰ ⩱ ⩲ ⩳ ⩵ ⩶ ⩷ ⩸ ⩹ ⩺ ⩻ ⩼ ⩽ ⩾ ⩿ ⪀ ⪁ ⪂ ⪃ ⪄ ⪅ ⪆ ⪇ ⪈ ⪉ ⪊ ⪋ ⪌ ⪍ ⪎ ⪏ ⪐ ⪑ ⪒ ⪓ ⪔
  ⪕ ⪖ ⪗ ⪘ ⪙ ⪚ ⪛ ⪜ ⪝ ⪞ ⪟ ⪠ ⪡ ⪢ ⪣ ⪤ ⪥ ⪦ ⪧ ⪨ ⪩ ⪪ ⪫ ⪬ ⪭ ⪮ ⪯ ⪰ ⪱ ⪲ ⪳ ⪴ ⪵ ⪶ ⪷ ⪸
  ⪹ ⪺ ⪻ ⪼ ⪽ ⪾ ⪿ ⫀ ⫁ ⫂ ⫃ ⫄ ⫅ ⫆ ⫇ ⫈ ⫉ ⫊ ⫋ ⫌ ⫍ ⫎ ⫏ ⫐ ⫑ ⫒ ⫓ ⫔ ⫕ ⫖ ⫗ ⫘ ⫙ ⫷ ⫸
  ⫹ ⫺ ⊢ ⊣ ⟂
`;

const DOTTY_OPERATORS = '… ⁝ ⋮ ⋱ ⋰ ⋯';

const PLUS_OPERATORS = `
  + - | ⊕ ⊖ ⊞ ⊟ ++ ∪ ∨ ⊔ ± ∓ ∔ ∸ ≂ ≏ ⊎ ⊻ ⊽ ⋎ ⋓ ⧺ ⧻ ⨈
  ⨢ ⨣ ⨤ ⨥ ⨦ ⨧ ⨨ ⨩ ⨪ ⨫ ⨬ ⨭ ⨮ ⨹ ⨺ ⩁ ⩂ ⩅ ⩊ ⩌ ⩏ ⩐ ⩒ ⩔ ⩖ ⩗ ⩛ ⩝ ⩡ ⩢ ⩣
`;

const TIMES_OPERATORS = `
  * / ÷ % & ⋅ ∘ × \\ ∩ ∧ ⊗ ⊘ ⊙ ⊚ ⊛ ⊠ ⊡ ⊓ ∗ ∙
  ∤ ⅋ ≀ ⊼ ⋄ ⋆ ⋇ ⋉ ⋊ ⋋ ⋌ ⋏ ⋒ ⟑ ⦸ ⦼ ⦾ ⦿ ⧶ ⧷ ⨇ ⨰
  ⨱ ⨲ ⨳ ⨴ ⨵ ⨶ ⨷ ⨸ ⨻ ⨼ ⨽ ⩀ ⩃ ⩄ ⩋ ⩍ ⩎ ⩑ ⩓ ⩕ ⩘
  ⩚ ⩜ ⩞ ⩟ ⩠ ⫛ ⊍ ▷ ⨝ ⟕ ⟖ ⟗
`;

const BITSHIFT_OPERATORS = '<< >> >>>';

const POWER_OPERATORS = `
  ^ ↑ ↓ ⇵ ⟰ ⟱ ⤈ ⤉ ⤊ ⤋ ⤒ ⤓ ⥉ ⥌ ⥍ ⥏ ⥑ ⥔ ⥕ ⥘ ⥙ ⥜ ⥝ ⥠ ⥡ ⥣ ⥥ ⥮ ⥯ ￪ ￬
`;

module.exports = grammar({
  name: 'julia',

  word: $ => $.identifier,

  inline: $ => [
    $._terminator,
    $._definition,
    $._statement,
  ],

  externals: $ => [
    $.block_comment,
    $._immediate_paren,

    $._string_start,
    $._command_start,
    $._immediate_string_start,
    $._immediate_command_start,
    $._string_end,
    $._command_end,
    $._string_content,
    $._string_content_no_interp,
  ],

  // The two notable conflicts in the grammar are:
  // - Arrow function parameters vs tuple expressions
  // - Short function definitions vs function calls
  // The femptolisp parser makes no distinction between these, but having the
  // distinction is better because it's easier to keep track of formal parameters.
  //
  // The other conflicts are there because `identifier` is a `_quotable`.
  conflicts: $ => [
    [$._quotable, $._function_signature],
    [$._quotable, $.scoped_identifier],

    [$._quotable, $.named_field, $.optional_parameter],
    [$._quotable, $.named_field],
    [$.optional_parameter, $.named_field],

    [$._quotable, $.parameter_list],
    [$._quotable, $.typed_parameter],
    [$._quotable, $.slurp_parameter],
    [$._quotable, $.optional_parameter],
    [$.parameter_list, $.argument_list],

    [$.keyword_parameters, $.tuple_expression],
    [$.keyword_parameters, $.argument_list],
    [$.keyword_parameters, $._implicit_named_field],
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
    source_file: $ => optional($._block),

    _block: $ => seq(
      sep1($._terminator, choice(
        $._expression,
        $._declaration,
        $.assignment,
        $.bare_tuple,
        $.short_function_definition,
      )),
      optional($._terminator)
    ),

    // Definitions

    _definition: $ => choice(
      $.module_definition,
      $.abstract_definition,
      $.primitive_definition,
      $.struct_definition,
      $.function_definition,
      $.macro_definition
    ),

    module_definition: $ => seq(
      choice('module', 'baremodule'),
      field('name', $.identifier),
      optional($._terminator),
      optional($._block),
      'end'
    ),

    abstract_definition: $ => seq(
      'abstract',
      'type',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      optional($.subtype_clause),
      'end'
    ),

    primitive_definition: $ => seq(
      'primitive',
      'type',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      optional($.subtype_clause),
      alias(numeral('0-9'), $.integer_literal),
      'end'
    ),

    struct_definition: $ => seq(
      optional('mutable'),
      'struct',
      field('name', $.identifier),
      field('type_parameters', optional($.type_parameter_list)),
      optional($.subtype_clause),
      optional($._terminator),
      optional($._block),
      'end'
    ),

    subtype_clause: $ => seq('<:', $._expression),

    function_definition: $ => seq(
      'function',
      choice(
        seq(
          choice(
            $._function_signature,
            field('parameters', $.parameter_list),
          ),
          optional($._block),
        ),
        // zero method functions
        field('name', choice(
          $.identifier,
          $.operator,
        )),
      ),
      'end'
    ),

    short_function_definition: $ => prec(PREC.assign, seq(
      $._function_signature,
      '=',
      $._expression,
    )),

    _function_signature: $ => seq(
      field('name', choice(
        $.identifier,
        $.operator,
        $.scoped_identifier,
        parenthesize(alias($.typed_parameter, $.function_object)),
      )),
      field('type_parameters', optional($.type_parameter_list)),
      $._immediate_paren,
      field('parameters', $.parameter_list),
      optional(seq(
        '::',
        field('return_type', $._primary_expression),
      )),
      optional($.where_clause),
    ),

    where_clause: $ => seq(
      'where',
      choice(
        $.identifier,
        $.type_parameter_list,
      ),
      optional($.subtype_clause),
    ),

    macro_definition: $ => seq(
      'macro',
      field('name', choice(
        $.identifier,
        $.operator
      )),
      $._immediate_paren,
      field('parameters', $.parameter_list),
      optional($._block),
      'end'
    ),

    parameter_list: $ => parenthesize(
      sep(',', choice(
        $.identifier,
        $.slurp_parameter,
        $.optional_parameter,
        $.typed_parameter,
        $.tuple_expression,
      )),
      optional(','),
      optional($.keyword_parameters),
    ),

    keyword_parameters: $ => seq(
      ';',
      sep1(',', choice(
        $.identifier,
        $.slurp_parameter,
        $.optional_parameter,
        $.typed_parameter,
      )),
      optional(','),
    ),

    optional_parameter: $ => seq(
      choice($.identifier, $.typed_parameter, $.tuple_expression),
      '=',
      $._expression
    ),

    slurp_parameter: $ => seq(
      choice($.identifier, $.typed_parameter),
      '...'
    ),

    typed_parameter: $ => seq(
      optional(field('parameter', choice($.identifier, $.tuple_expression))),
      '::',
      field('type', $._primary_expression),
      optional($.where_clause),
    ),

    type_parameter_list: $ => seq(
      '{',
      sep1(',', choice(
        $.identifier,
        $.scoped_identifier,
        $.constrained_type_parameter
      )),
      '}'
    ),

    constrained_type_parameter: $ => seq(
      field('type', $.identifier),
      '<:',
      field('supertype', $._primary_expression),
    ),


    // Statements

    _statement: $ => choice(
      $.compound_statement,
      $.quote_statement,
      $.let_statement,
      $.if_statement,
      $.try_statement,
      $.for_statement,
      $.while_statement,
      $.break_statement,
      $.continue_statement,
      $.return_statement,
      $.export_statement,
      $.import_statement,
    ),

    compound_statement: $ => seq('begin', optional($._block), 'end'),

    quote_statement: $ => seq('quote', optional($._block), 'end'),

    let_statement: $ => seq(
      'let',
      sep(',', $.let_binding),
      $._terminator,
      optional($._block),
      'end'
    ),

    let_binding: $ => prec.right(seq(
      $.identifier,
      optional(seq('=', $._expression))
    )),

    if_statement: $ => seq(
      'if',
      field('condition', $._expression),
      optional($._terminator),
      optional($._block),
      field('alternative', repeat($.elseif_clause)),
      field('alternative', optional($.else_clause)),
      'end'
    ),

    elseif_clause: $ => seq(
      'elseif',
      field('condition', $._expression),
      optional($._terminator),
      optional($._block)
    ),

    else_clause: $ => seq(
      'else',
      optional($._block)
    ),

    try_statement: $ => seq(
      'try',
      optional($._block),
      optional($.catch_clause),
      optional($.finally_clause),
      'end'
    ),

    catch_clause: $ => prec(1, seq(
      'catch',
      optional($.identifier),
      optional($._terminator),
      optional($._block),
    )),

    finally_clause: $ => seq(
      'finally',
      optional($._terminator),
      optional($._block),
    ),

    for_statement: $ => seq(
      'for',
      sep1(',', $.for_binding),
      optional($._terminator),
      optional($._block),
      'end'
    ),

    while_statement: $ => seq(
      'while',
      field('condition', $._expression),
      optional($._terminator),
      optional($._block),
      'end'
    ),

    break_statement: $ => 'break',

    continue_statement: $ => 'continue',

    return_statement: $ => prec.right(-2, seq(
      'return',
      optional(choice(
        $._expression,
        $.bare_tuple,
      ))
    )),

    export_statement: $ => seq(
      'export',
      prec.right(sep1(',', choice(
        $.identifier,
        $.macro_identifier,
        $.operator,
      ))),
    ),

    import_statement: $ => seq(
      choice('import', 'using'),
      choice(
        $._import_list,
        $.selected_import,
      ),
    ),

    relative_qualifier: $ => seq(
      repeat1('.'),
      choice(
        $.identifier,
        $.scoped_identifier,
      )
    ),

    _importable: $ => choice(
      $.identifier,
      $.scoped_identifier,
      $.relative_qualifier,
    ),

    import_alias: $ => seq($._importable, 'as', $.identifier),

    _import_list: $ => prec.right(sep1(',', choice(
      $._importable,
      $.import_alias,
    ))),

    selected_import: $ => seq(
      $._importable,
      token.immediate(':'),
      prec.right(sep1(',', choice(
        $._importable,
        $.import_alias,
        $.macro_identifier,
        $.operator,
      )))
    ),

    // Expressions

    _expression: $ => choice(
      $._definition,
      $._statement,
      $._literal,
      $._primary_expression,
      $.operator,
      $.typed_expression,
      $.pair_expression,
      alias(':', $.operator),
      $.macrocall_expression,
      $.compound_assignment_expression,
      $.unary_expression,
      $.binary_expression,
      $.ternary_expression,
      $.function_expression,
      $.coefficient_expression,
      $.spread_expression,
      $.range_expression,
    ),

    // Primary expressions can be called, indexed, accessed, and type parametrized.
    _primary_expression: $ => choice(
      $._quotable,
      $.broadcast_call_expression,
      $.call_expression,
      $.parametrized_type_expression,
      $.field_expression,
      $.index_expression,
      $.interpolation_expression,
      $.quote_expression,
      $.prefixed_command_literal,
      $.prefixed_string_literal,
    ),

    // Quotables are primary expressions that can be quoted without additional
    // parentheses.
    _quotable: $ => choice(
      $.identifier,
      $.array_comprehension_expression,
      $.array_expression,
      $.generator_expression,
      $.matrix_expression,
      $.parenthesized_expression,
      $.tuple_expression,
    ),

    field_expression: $ => prec(PREC.dot, seq(
      field('value', $._primary_expression),
      token.immediate('.'),
      $.identifier
    )),

    index_expression: $ => seq(
      field('value', $._primary_expression),
      token.immediate('['),
      sep(',', $._expression),
      optional(','),
      ']'
    ),


    parametrized_type_expression: $ => seq(
      field('value', $._primary_expression),
      '{',
      sep(',', choice($._expression, $.subtype_clause)),
      optional(','),
      '}'
    ),

    call_expression: $ => prec(PREC.call, seq(
      choice($._primary_expression, $.operator),
      $._immediate_paren,
      choice($.argument_list, $.generator_expression),
      optional($.do_clause)
    )),

    broadcast_call_expression: $ => prec(PREC.call, seq(
      $._primary_expression,
      token.immediate('.'),
      $._immediate_paren,
      choice($.argument_list, $.generator_expression),
      optional($.do_clause)
    )),

    macrocall_expression: $ => prec.right(seq(
      $.macro_identifier,
      optional(choice(
        seq($._immediate_paren, $.argument_list),
        $.macro_argument_list
      ))
    )),

    macro_argument_list: $ => prec(-1, repeat1(prec(-1, choice(
      $._expression,
      $.named_field,
      $.short_function_definition,
    )))),

    argument_list: $ => parenthesize(
      sep(',', choice(
        $._expression,
        alias($.named_field, $.named_argument)
      )),
      optional(seq(
        ';',
        sep1(',', choice(
          $._implicit_named_field,
          $.spread_expression,
          alias($.named_field, $.named_argument),
        ))
      )),
      optional(','),
    ),

    do_clause: $ => seq(
      'do',
      alias($._do_parameter_list, $.parameter_list),
      optional($._block),
      'end'
    ),

    _do_parameter_list: $ => seq(
      sep(',', choice(
        $.identifier,
        $.slurp_parameter,
        parenthesize($.optional_parameter),
        $.typed_parameter,
        $.tuple_expression,
      )),
      $._terminator,
    ),

    named_field: $ => seq(
      $.identifier,
      '=',
      $._expression
    ),

    _implicit_named_field: $ => choice(
      $.identifier,
      $.field_expression,
    ),

    spread_expression: $ => prec(PREC.dot, seq($._expression, '...')),

    compound_assignment_expression: $ => prec.right(PREC.assign, seq(
      $._primary_expression,
      alias($._assign_operator, $.operator),
      $._expression,
    )),

    unary_expression: $ => choice(
      prec(PREC.prefix, seq(
        alias($._unary_operator, $.operator),
        $._expression,
      )),
      prec(PREC.postfix, seq($._expression, alias("'", $.operator))),
    ),

    binary_expression: $ => {
      const table = [
        [prec.left, PREC.power, $._power_operator],
        [prec.left, PREC.rational, $._rational_operator],
        [prec.left, PREC.bitshift, $._bitshift_operator],
        [prec.left, PREC.times, $._times_operator],
        [prec.left, PREC.plus, choice('+', $._plus_operator)],
        [prec.left, PREC.colon_range, $._dotty_operator],
        [prec.right, PREC.arrow, $._arrow_operator],
        [prec.right, PREC.pipe_left, '<|'],
        [prec.left, PREC.pipe_right, '|>'],
        [prec.left, PREC.comparison, choice('in', 'isa', $._comparison_operator)],
        [prec.left, PREC.lazy_or, '||'],
        [prec.left, PREC.lazy_and, '&&'],
      ];

      return choice(...table.map(([fn, prec, op]) => fn(prec, seq(
        $._expression,
        alias(op, $.operator),
        $._expression,
      ))));
    },

    ternary_expression: $ => prec.right(PREC.conditional, seq(
      $._expression,
      '?',
      $._expression,
      ':',
      $._expression
    )),

    pair_expression: $ => prec.right(PREC.pair, seq(
      $._expression,
      '=>',
      $._expression
    )),

    typed_expression: $ => prec(PREC.decl, seq(
      $._expression,
      choice('::', '<:'),
      choice($._primary_expression)
    )),

    tuple_expression: $ => parenthesize(
      choice(
        optional(','),
        seq(
          choice($._expression, $.named_field),
          ','
        ),
        seq(
          $._expression,
          repeat1(seq(',', $._expression)),
          optional(',')
        ),
        // named tuple with explicit fields
        seq(
          $.named_field,
          repeat1(seq(',', $.named_field)),
          optional(',')
        ),
        ';', // empty named tuple
        // named tuple with leading semicolon and implicit fields
        seq(
          ';',
          sep1(',', choice($.named_field, $._implicit_named_field)),
          optional(','),
        ),
      ),
    ),

    parenthesized_expression: $ => parenthesize(
      sep1(';', choice($._expression, $.assignment)),
      optional(';'),
    ),

    array_expression: $ => seq(
      '[',
      sep(',', $._expression),
      optional(','),
      ']'
    ),

    matrix_expression: $ => prec(-1, seq(
      '[',
      sep(';', $.matrix_row),
      optional(';'),
      ']'
    )),

    matrix_row: $ => repeat1(prec(-1, $._expression)),

    generator_expression: $ => parenthesize(
      $._expression,
      $._comprehension_clause,
    ),

    array_comprehension_expression: $ => seq(
      '[',
      $._expression,
      $._comprehension_clause,
      ']'
    ),

    _comprehension_clause: $ => seq(
      $.for_clause,
      repeat(choice(
        $.for_clause,
        $.if_clause
      ))
    ),

    if_clause: $ => seq(
      'if',
      $._expression
    ),

    for_clause: $ => seq(
      'for',
      sep1(',', $.for_binding)
    ),

    for_binding: $ => seq(
      choice($.identifier, $.tuple_expression),
      choice('in', '=', '∈'),
      $._expression
    ),

    function_expression: $ => prec.right(PREC.arrow, seq(
      choice(
        $.identifier,
        $.parameter_list
      ),
      '->',
      choice(
        $._expression,
        $.assignment,
        $.bare_tuple,
      )
    )),

    range_expression: $ => prec.left(PREC.colon_range, seq(
      $._expression,
      ':',
      $._expression
    )),

    coefficient_expression: $ => prec(PREC.call, seq(
      choice(
        alias(numeral('0-9'), $.integer_literal),
        $.float_literal,
      ),
      choice(
        $._quotable,
        $.prefixed_command_literal,
        $.prefixed_string_literal,
      )
    )),

    quote_expression: $ => prec.left(PREC.colon_quote, seq(
      ':',
      choice(
        $._quotable,
        alias(choice('global', 'local', 'end'), $.identifier),
      ),
    )),

    interpolation_expression: $ => prec.left(PREC.colon_quote, seq(
      '$',
      $._quotable,
    )),

    assignment: $ => prec.right(PREC.assign, seq(
      // LHS
      choice(
        $._quotable,
        // No function calls. Those are parsed as short_function_definition
        $.field_expression,
        $.index_expression,
        $.interpolation_expression,
        $.typed_expression,
        $.operator,

        $.prefixed_command_literal,
        $.prefixed_string_literal,

        $.binary_expression,
        $.unary_expression,
        $.bare_tuple
      ),
      alias(addDots('='), $.operator),
      choice(
        $._expression,
        $.assignment,
        $.bare_tuple
      )
    )),

    _declaration: $ => choice(
      $.const_declaration,
      $.local_declaration,
      $.global_declaration,
    ),

    const_declaration: $ => prec.right(-2, seq(
      'const',
      choice(
        $.assignment,
        $.identifier,
      ),
    )),

    global_declaration: $ => prec.right(-2, seq(
      'global',
      choice(
        $.assignment,
        $.identifier,
      ),
    )),

    local_declaration: $ => prec.right(-2, seq(
      'local',
      choice(
        $.assignment,
        $.identifier,
      ),
    )),

    bare_tuple: $ => prec(-1, seq(
      $._expression,
      repeat1(prec(-1, seq(',', $._expression)))
    )),


    // Tokens

    macro_identifier: $ => seq('@', choice(
      $.identifier,
      $.operator,
      $.scoped_identifier,
      alias('.', $.operator)
    )),

    scoped_identifier: $ => seq(
      choice($.identifier, $.scoped_identifier),
      token.immediate('.'),
      $.identifier,
    ),

    identifier: $ => {
      const operators = [
        ',',
        ';',
        ':',
        '(', ')',
        '{', '}',
        '&',
        '$',
        '@',
        ASSIGN_OPERATORS,
        ARROW_OPERATORS,
        COMPARISON_OPERATORS,
        DOTTY_OPERATORS,
        PLUS_OPERATORS,
        TIMES_OPERATORS,
        BITSHIFT_OPERATORS,
        POWER_OPERATORS
      ];

      const operatorCharacters = operators
        .join(' ')
        .trim()
        .replace(/\s+/g, '')
        .replace(/-/g, '')
        .replace(/\\/g, '\\\\')
        .replace(/!/g, '');

      const start = "[_\\p{L}\\p{Nl}∇]"
      const rest = `[^"'\`\\s\\.\\-\\[\\]${operatorCharacters}]*`
      return new RegExp(start + rest)
    },

    operator: $ => choice(
      $._comparison_operator,
      $._dotty_operator,
      $._plus_operator,
      $._times_operator,
      $._rational_operator,
      $._bitshift_operator,
      $._power_operator,
      $._unary_operator,
    ),

    // Literals

    _literal: $ => choice(
      $.true,
      $.false,
      $.integer_literal,
      $.float_literal,
      $.character_literal,
      $.string_literal,
      $.command_literal,
    ),

    true: $ => 'true',
    false: $ => 'false',

    integer_literal: $ => choice(
      token(seq('0b', numeral('01'))),
      token(seq('0o', numeral('0-7'))),
      token(seq('0x', numeral('0-9a-fA-F'))),
      numeral('0-9'),
    ),

    float_literal: $ => {
      const dec = numeral('0-9');
      const hex = numeral('0-9a-fA-F');
      const float = seq(
        choice(
          seq(dec, optional('.'), optional(dec)),
          seq('.', dec),
        ),
        optional(/[eEf][+-]?\d+/), // the exponent doesn't allow underscores
      )
      const hex_float = seq(
        choice(
          seq('0x', hex, optional('.'), optional(hex)),
          seq('0x.', hex),
        ),
        /p[+-]?\d+/, // hex floats must always have an exponent
      )
      return token(choice(float, hex_float))
    },

    escape_sequence: $ => token(seq(
      '\\',
      token.immediate(choice(
        /[uU][0-9a-fA-F]{1,6}/, // unicode codepoints
        /x[0-9a-fA-F]{2}/,
        /["'`$\\abfnrtv]/,
        /[0-7]{1,3}/,
      )),
    )),

    character_literal: $ => seq(
      "'",
      choice(
        $.escape_sequence,
        /[^'\\]/,
      ),
      token.immediate("'"),
    ),

    string_literal: $ => seq(
      $._string_start,
      repeat(choice($._string_content, $.string_interpolation, $.escape_sequence)),
      $._string_end,
    ),

    command_literal: $ => seq(
      $._command_start,
      repeat(choice($._string_content, $.string_interpolation, $.escape_sequence)),
      $._command_end,
    ),

    prefixed_string_literal: $ => seq(
      field('prefix', $.identifier),
      $._immediate_string_start,
      repeat(choice($._string_content_no_interp, $.escape_sequence)),
      $._string_end,
    ),

    prefixed_command_literal: $ => seq(
      field('prefix', $.identifier),
      $._immediate_command_start,
      repeat(choice($._string_content_no_interp, $.escape_sequence)),
      $._command_end,
    ),

    string_interpolation: $ => seq(
      '$',
      choice(
        $.identifier,
        seq($._immediate_paren, parenthesize($._expression)),
      ),
    ),

    _unary_operator: $ => token(addDots('+ - ! ~ ¬ √ ∛ ∜')),

    _power_operator: $ => token(addDots(POWER_OPERATORS)),

    _bitshift_operator: $ => token(addDots(BITSHIFT_OPERATORS)),

    _rational_operator: $ => token(addDots('//')),

    _times_operator: $ => token(addDots(TIMES_OPERATORS)),

    _plus_operator: $ => token(choice('$', addDots(PLUS_OPERATORS))),

    _dotty_operator: $ => token(choice('..', addDots(DOTTY_OPERATORS))),

    _comparison_operator: $ => token(choice('<:', '>:', addDots(COMPARISON_OPERATORS))),

    _arrow_operator: $ => token(choice('<--', '-->', '<-->', addDots(ARROW_OPERATORS))),

    _assign_operator: $ => token(choice(':=', '~', '$=', addDots(ASSIGN_OPERATORS))),

    _terminator: $ => choice('\n', ';'),

    line_comment: $ => token(seq('#', /.*/))
  }
});

function sep(separator, rule) {
  return optional(sep1(separator, rule));
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}

function addDots(operatorString) {
  const operators = operatorString.trim().split(/\s+/);
  return seq(optional('.'), choice(...operators));
}

function numeral(range) {
  return RegExp(`[${range}]|([${range}][${range}_]*[${range}])`);
}

function parenthesize(...rules) {
  return seq('(', ...rules, ')');
}
