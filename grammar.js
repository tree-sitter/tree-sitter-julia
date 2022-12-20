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
  'colon',
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
  += -= *= /= //= \\= ^= ÷= %= <<= >>= >>>= |= &= ⊻= ≔ ⩴ ≕
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

const ELLIPSIS_OPERATORS = '… ⁝ ⋮ ⋱ ⋰ ⋯';

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

const ESCAPE_SEQUENCE = token(seq(
  '\\',
  choice(
    /[^uUx0-7]/,
    /[uU][0-9a-fA-F]{1,6}/, // unicode codepoints
    /[0-7]{1,3}/,
    /x[0-9a-fA-F]{2}/,
  )
));

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
    $._immediate_bracket,

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
  conflicts: $ => [
    [$._quotable, $._function_signature],
    [$._quotable, $.scoped_identifier],

    [$._function_signature, $._primary_expression],
    [$._function_signature, $.parameter_list, $._quotable],
    [$._function_signature, $._expression],

    [$.parameter_list, $._primary_expression],
    [$.parameter_list, $.argument_list],

    [$._quotable, $.named_field, $.optional_parameter],
    [$._quotable, $.named_field],
    [$.optional_parameter, $.named_field],

    [$._quotable, $.parameter_list],
    [$._quotable, $.typed_parameter],
    [$._quotable, $.slurp_parameter],
    [$._quotable, $.optional_parameter],
    [$._quotable, $.keyword_parameters],

    [$.matrix_row, $.comprehension_expression],
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
      field('name', choice($.identifier, $.interpolation_expression)),
      optional($._terminator),
      optional($._block),
      'end'
    ),

    abstract_definition: $ => seq(
      'abstract',
      'type',
      field('name', choice($.identifier, $.interpolation_expression)),
      field('type_parameters', optional($.type_parameter_list)),
      optional($.subtype_clause),
      'end'
    ),

    primitive_definition: $ => seq(
      'primitive',
      'type',
      field('name', choice($.identifier, $.interpolation_expression)),
      field('type_parameters', optional($.type_parameter_list)),
      optional($.subtype_clause),
      alias(numeral('0-9'), $.integer_literal),
      'end'
    ),

    struct_definition: $ => seq(
      optional('mutable'),
      'struct',
      field('name', choice($.identifier, $.interpolation_expression)),
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
          optional($._terminator),
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

    short_function_definition: $ => prec.right(PREC.assign, seq(
      $._function_signature,
      '=',
      choice(
        $._expression,
        $.assignment,
        $.bare_tuple,
      ),
    )),

    _function_signature: $ => seq(
      field('name', choice(
        $.identifier,
        $.operator,
        $.scoped_identifier,
        parenthesize(choice(
          $.identifier,
          $.operator,
        )),
        parenthesize(alias($.typed_parameter, $.function_object)),
        $.interpolation_expression,
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
      optional($._terminator),
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
        $.interpolation_expression,
        alias($._closed_macrocall_expression, $.macrocall_expression),
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
      optional(','),
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

    compound_statement: $ => seq('begin', optional($._terminator), optional($._block), 'end'),

    quote_statement: $ => seq('quote', optional($._terminator), optional($._block), 'end'),

    let_statement: $ => seq(
      'let',
      sep(',', choice(
        $.identifier,
        alias($.named_field, $.let_binding),
      )),
      $._terminator,
      optional($._block),
      'end'
    ),

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
      optional($._terminator),
      optional($._block)
    ),

    try_statement: $ => seq(
      'try',
      optional($._terminator),
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
        $.assignment,
        $.bare_tuple,
      ))
    )),

    export_statement: $ => seq(
      'export',
      prec.right(sep1(',', choice(
        $.identifier,
        $.macro_identifier,
        $.operator,
        parenthesize(choice($.identifier, $.operator)),
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
      parenthesize(choice($.identifier, $.operator)),
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


    // Quotables are expressions that can be quoted without additional parentheses.
    _quotable: $ => choice(
      $.identifier,
      $.comprehension_expression,
      $.matrix_expression,
      $.vector_expression,
      $.generator_expression,
      $.parenthesized_expression,
      $.tuple_expression,
    ),

    comprehension_expression: $ => prec(-1, seq(
      '[',
      choice(
        $._expression,
        $.assignment,
      ),
      optional($._terminator),
      $._comprehension_clause,
      ']'
    )),

    _comprehension_clause: $ => seq(
      $.for_clause,
      optional('\n'),
      sep(optional('\n'), choice(
        $.for_clause,
        $.if_clause
      )),
      optional('\n'),
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
      choice($.identifier, $.tuple_expression, $.typed_parameter),
      choice('in', '=', '∈'),
      $._expression
    ),

    matrix_expression: $ => prec(-1, seq(
      '[',
      choice(
        // Must allow newlines even if there's already a semicolon.
        seq($.matrix_row, $._terminator, optional('\n')),
        sep1(seq($._terminator, optional('\n')), $.matrix_row),
      ),
      optional($._terminator),
      ']'
    )),

    matrix_row: $ => repeat1(prec(-1, choice(
      $._expression,
      alias($.named_field, $.assignment), // JuMP.jl
    ))),

    vector_expression: $ => seq(
      '[',
      sep(',', choice(
      $._expression,
      alias($.named_field, $.assignment), // JuMP.jl
      )),
      optional(','),
      ']'
    ),

    generator_expression: $ => parenthesize(
      $._expression,
      $._comprehension_clause,
    ),

    parenthesized_expression: $ => parenthesize(
      sep1(';', choice(
        $._declaration,
        $._expression,
        $.assignment,
        $.short_function_definition,
      )),
      optional(';'),
    ),

    tuple_expression: $ => parenthesize(optional(
      choice(
        // Singleton requires comma
        seq(
          choice($._expression, $.named_field),
          ','
        ),
        seq(
          choice($._expression, $.named_field),
          repeat1(seq(',', choice($._expression, $.named_field))),
          optional(',')
        ),
        ';', // Empty NamedTuple
        // NamedTuple with leading semicolon
        seq(
          ';',
          sep1(',', choice($._expression, $.named_field)),
          optional(','),
        ),
      ),
    )),


    // Primary expressions can be called, indexed, accessed, and type parametrized.
    _primary_expression: $ => choice(
      $._quotable,
      $.broadcast_call_expression,
      $.call_expression,
      alias($._closed_macrocall_expression, $.macrocall_expression),
      $.parametrized_type_expression,
      $.field_expression,
      $.index_expression,
      $.interpolation_expression,
      $.quote_expression,
      $.prefixed_command_literal,
      $.prefixed_string_literal,
    ),

    field_expression: $ => prec(PREC.dot, seq(
      field('value', $._primary_expression),
      token.immediate('.'),
      choice(
        $.identifier,
        $.interpolation_expression,
        $.quote_expression,
        $.command_literal,
        $.string_literal,
        $.prefixed_command_literal,
        $.prefixed_string_literal,
      ),
    )),

    index_expression: $ => seq(
      field('value', $._primary_expression),
      $._immediate_bracket,
      choice(
        $.comprehension_expression,
        $.matrix_expression,
        $.vector_expression,
      ),
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

    _closed_macrocall_expression: $ => prec(PREC.call, seq(
      optional(seq(
        $._primary_expression,
        token.immediate('.'),
      )),
      $.macro_identifier,
      $._immediate_paren,
      choice($.argument_list, $.generator_expression),
      optional($.do_clause)
    )),

    macrocall_expression: $ => prec.right(seq(
      optional(seq(
        $._primary_expression,
        token.immediate('.'),
      )),
      $.macro_identifier,
      optional($.macro_argument_list),
    )),

    macro_argument_list: $ => prec.left(repeat1(prec(-2, choice(
      $._expression,
      $.assignment,
      $.bare_tuple,
      $.short_function_definition,
    )))),

    argument_list: $ => parenthesize(
      sep(',', choice(
        $._expression,
        alias($.named_field, $.named_argument)
      )),
      optional(seq(
        ';',
        sep(',', choice(
          $._expression,
          alias($.named_field, $.named_argument),
        )),
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
        $.typed_parameter,
        $.tuple_expression,
        parenthesize(choice(
          $.identifier,
          $.slurp_parameter,
          $.typed_parameter,
        )),
      )),
      $._terminator,
    ),

    named_field: $ => seq(
      $.identifier,
      '=',
      choice(
        $._expression,
        $.named_field,
      ),
    ),

    interpolation_expression: $ => prec.right(PREC.prefix, seq(
      '$',
      choice(
        $._literal,
        $._quotable,
      ),
    )),

    quote_expression: $ => prec.right(PREC.prefix, seq(
      ':',
      choice(
        $._literal,
        $._quotable,
        $.operator,
        alias(choice(
          '+', '-', // unary-and-binary operators
          $._lazy_and,
          $._lazy_or,
          token.immediate(parenthesize(choice('->', '.', '::', ':=', '='))),
          token.immediate(choice('->', '.')),
        ), $.operator),
        alias(token.immediate(choice('global', 'local', 'end')), $.identifier),
      ),
    )),

    // Expressions

    _expression: $ => choice(
      // All previous rules are expressions
      $._definition,
      $._statement,
      $._literal,
      $._primary_expression,
      $.macrocall_expression,
      $.unary_expression,
      $.binary_expression,
      $.range_expression,
      $.splat_expression,
      $.ternary_expression,
      $.typed_expression,
      $.function_expression,
      $.coefficient_expression,
      $.compound_assignment_expression,
      $.operator,
      alias(':', $.operator),
    ),

    unary_expression: $ => choice(
      prec.right(PREC.prefix, seq(
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
        [prec.left, PREC.plus, choice('+', '-', $._plus_operator)],
        [prec.left, PREC.colon, $._ellipsis_operator],
        [prec.right, PREC.arrow, $._arrow_operator],
        [prec.right, PREC.pipe_left, $._pipe_left_operator],
        [prec.left, PREC.pipe_right, $._pipe_right_operator],
        [prec.left, PREC.comparison, choice('in', 'isa', $._comparison_operator)],
        [prec.left, PREC.lazy_or, $._lazy_or],
        [prec.left, PREC.lazy_and, $._lazy_and],
        [prec.right, PREC.pair, $._pair_operator],
      ];

      return choice(...table.map(([fn, prec, op]) => fn(prec, seq(
        $._expression,
        alias(op, $.operator),
        $._expression,
      ))));
    },

    range_expression: $ => prec.left(PREC.colon, seq(
      $._expression,
      token.immediate(':'),
      $._expression
    )),

    splat_expression: $ => prec(PREC.dot, seq($._expression, '...')),

    ternary_expression: $ => prec.right(PREC.conditional, seq(
      $._expression,
      '?',
      $._expression,
      ':',
      $._expression
    )),

    typed_expression: $ => prec(PREC.decl, seq(
      $._expression,
      choice('::', '<:'),
      choice($._primary_expression)
    )),

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

    compound_assignment_expression: $ => prec.right(PREC.assign, seq(
      $._primary_expression,
      alias($._assign_operator, $.operator),
      $._expression,
    )),


    // Assignments and declarations

    assignment: $ => prec.right(PREC.assign, seq(
      // LHS
      choice(
        $._quotable,
        // No function calls. Those are parsed as short_function_definition
        $.field_expression,
        $.index_expression,
        $.parametrized_type_expression,
        $.interpolation_expression,
        $.quote_expression,
        $.typed_expression,
        $.operator,

        $.prefixed_command_literal,
        $.prefixed_string_literal,

        $.binary_expression,
        $.unary_expression,
        $.bare_tuple
      ),
      alias('=', $.operator),
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
        $.typed_parameter,
      ),
    )),

    global_declaration: $ => prec.right(-2, seq(
      'global',
      choice(
        $.assignment,
        $.bare_tuple,
        $.identifier,
        $.typed_parameter,
      ),
    )),

    local_declaration: $ => prec.right(-2, seq(
      'local',
      choice(
        $.assignment,
        $.bare_tuple,
        $.identifier,
        $.typed_parameter,
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
      alias(token.immediate('.'), $.operator)
    )),

    scoped_identifier: $ => seq(
      choice($.identifier, $.scoped_identifier),
      token.immediate('.'),
      choice(
        $.identifier,
        $.interpolation_expression,
        $.quote_expression,
      ),
    ),

    identifier: $ => {
      const operators = [
        '$',
        '&',
        ',',
        ':',
        ';',
        '@',
        '(', ')',
        '{', '}',
        ASSIGN_OPERATORS,
        ARROW_OPERATORS,
        COMPARISON_OPERATORS,
        ELLIPSIS_OPERATORS,
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

      // Some symbols in Sm and So unicode categories that are identifiers
      const validMathSymbols = "∂∇∏∑°";

      const start = `[_\\p{XID_Start}${validMathSymbols}\\p{Emoji}&&[^0-9#*]]`;
      const rest = `[^"'\`\\s\\.\\-\\[\\]${operatorCharacters}]*`;
      return new RegExp(start + rest);
    },

    operator: $ => choice(
      // assignment, && and || pseudo-operators cannot be used as identifiers
      $._pair_operator,
      $._arrow_operator,
      $._comparison_operator,
      $._pipe_left_operator,
      $._pipe_right_operator,
      $._ellipsis_operator,
      $._plus_operator,
      $._times_operator,
      $._rational_operator,
      $._bitshift_operator,
      $._power_operator,
      $._unary_operator,
    ),

    // Literals

    _literal: $ => choice(
      $.boolean_literal,
      $.integer_literal,
      $.float_literal,
      $.character_literal,
      $.string_literal,
      $.command_literal,
    ),

    boolean_literal: $ => choice('true', 'false'),

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

    escape_sequence: $ => ESCAPE_SEQUENCE,

    character_literal: $ => token(seq(
      "'",
      choice(
        /[^'\\]/,
        ESCAPE_SEQUENCE,
      ),
      "'"
    )),

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
        seq($._immediate_paren, parenthesize(choice(
          $._expression,
          alias($.named_field, $.assignment),
        ))),
      ),
    ),

    _unary_operator: $ => token(addDots('+ - ! ~ ¬ √ ∛ ∜')),

    _power_operator: $ => token(addDots(POWER_OPERATORS)),

    _bitshift_operator: $ => token(addDots(BITSHIFT_OPERATORS)),

    _rational_operator: $ => token(addDots('//')),

    _times_operator: $ => token(addDots(TIMES_OPERATORS)),

    _plus_operator: $ => token(addDots(PLUS_OPERATORS)),

    _ellipsis_operator: $ => token(choice('..', addDots(ELLIPSIS_OPERATORS))),

    _pipe_right_operator: $ => token(addDots('<|')),

    _pipe_left_operator: $ => token(addDots('|>')),

    _comparison_operator: $ => token(choice('<:', '>:', addDots(COMPARISON_OPERATORS))),

    _arrow_operator: $ => token(choice('<--', '-->', '<-->', addDots(ARROW_OPERATORS))),

    _lazy_and: $ => token(addDots('&&')),

    _lazy_or: $ => token(addDots('||')),

    _pair_operator: $ => token(addDots('=>')),

    _assign_operator: $ => token(choice(':=', '~', '$=', '.=', addDots(ASSIGN_OPERATORS))),

    _terminator: $ => choice('\n', /;+/),

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
