// Using an adapted version of https://kotlinlang.org/spec/syntax-and-grammar.html

const LETTER = /[\p{Lu}\p{Ll}\p{Lt}\p{Lm}\p{Lo}]/;
const UNICODE_DIGIT = /\p{Nd}/;
const NEWLINE = '\n';
const QUEST = '?';

module.exports = grammar({
  name: "kotlin",

  conflicts: $ => [
    [$.type_parameter],

    [$.function_type_parameters],

    [$.class_declaration],

    [$.delegation_specifiers],

    [$.modifier],

    [$.type_constraints],

    [$.class_body, $.enum_class_body],

    [$.enum_class_body],

    [$.enum_entries],

    [$.enum_entry],

    [$.class_parameters],

    [$.class_parameter],

    [$._semis],

    [$.annotated_delegation_specifier],

    [$.value_argument],

    [$.class_body],

    [$.constructor_invocation, $.unescaped_annotation],

    [$.delegation_specifier, $.explicit_delegation],

    [$.delegation_specifier, $.type_modifier],

    [$.receiver_type],

    [$.definitely_non_nullable_type, $.receiver_type],

    [$.definitely_non_nullable_type],

    [$.function_declaration],

    [$.function_value_parameter],

    [$.function_value_parameters],

    [$.statements],

    [$.block],
  ],

  rules: {
    // TODO: The rest
    kotlin_file: $ => seq(
      optional($.shebang_line),
      repeat(NEWLINE),
      optional($.package_header),
      repeat($.import_header),
      repeat($._top_level_object)
    ),

    shebang_line: $ => token(seq(
      '#!',
      /[^\r\n]*/,
      repeat1(NEWLINE),
    )),

    package_header: $ => seq(
      'package',
      $.identifier,
      optional($._semi),
    ),

    import_header: $ => seq(
      'import',
      $.identifier,
      optional(choice(
        token(seq('.', '*')),
        $.import_alias,
      )),
      optional($._semi),
    ),

    import_alias: $ => seq('as', $.simple_identifier),

    _top_level_object: $ => seq($._declaration, $._semis),

    // TODO: More declarations
    _declaration: $ => choice(
      $.class_declaration,
      // $.object_declaration,
      $.function_declaration,
      // $.property_declaration,
      $.type_alias,
    ),

    function_declaration: $ => seq(
      optional($.modifiers),
      'fun',
      optional(seq(repeat(NEWLINE), $.type_parameters)),
      optional(seq(
        repeat(NEWLINE),
        $.receiver_type,
        repeat(NEWLINE),
        '.',
      )),
      repeat(NEWLINE),
      $.simple_identifier,
      repeat(NEWLINE),
      $.function_value_parameters,
      optional(seq(
        repeat(NEWLINE),
        ':',
        repeat(NEWLINE),
        $.type,
      )),
      optional(seq(repeat(NEWLINE), $.type_constraints)),
      optional(seq(repeat(NEWLINE), $.function_body)),
    ),

    function_body: $ => choice(
      $.block,
      seq(
        '=',
        repeat(NEWLINE),
        $.expression,
      )
    ),

    function_value_parameters: $ => seq(
      '(',
      repeat(NEWLINE),
      optional(seq(
        $.function_value_parameter,
        repeat(seq(
          repeat(NEWLINE),
          ',',
          repeat(NEWLINE),
          $.function_value_parameter,
        )),
        optional(seq(repeat(NEWLINE), ',')),
      )),
      repeat(NEWLINE),
      ')'
    ),

    function_value_parameter: $ => seq(
      optional($.parameter_modifiers),
      $.parameter,
      optional(seq(
        repeat(NEWLINE),
        '=',
        repeat(NEWLINE),
        $.expression,
      )),
    ),

    parameter_modifiers: $ => choice(
      $.annotation,
      seq(
        $.parameter_modifier,
        repeat(seq(
          choice($.annotation, $.parameter_modifier),
        )),
      ),
    ),

    parameter_modifier: $ => choice(
      'vararg',
      'noinline',
      'crossinline',
    ),

    class_declaration: $ => seq(
      optional($.modifiers),
      choice(
        'class',
        seq(
          optional(seq('fun', repeat(NEWLINE))),
          'interface',
        ),
      ),
      repeat(NEWLINE),
      $.simple_identifier,
      optional(seq(repeat(NEWLINE), $.type_parameters)),
      optional(seq(repeat(NEWLINE), $.primary_constructor)),
      optional(seq(
        repeat(NEWLINE),
        ':',
        $.delegation_specifiers,
      )),
      optional(seq(repeat(NEWLINE), $.type_constraints)),
      optional(seq(
        repeat(NEWLINE),
        choice($.class_body, $.enum_class_body),
      )),
    ),

    primary_constructor: $ => seq(
      optional(seq(
        optional($.modifiers),
        'constructor',
        repeat(NEWLINE),
      )),
      $.class_parameters,
    ),

    class_parameters: $ => seq(
      '(',
      repeat(NEWLINE),
      optional(seq(
        $.class_parameter,
        repeat(seq(
          repeat(NEWLINE),
          ',',
          repeat(NEWLINE),
          $.class_parameter,
          optional(seq(
            repeat(NEWLINE),
            ',',
          )),
        )),
      )),
      repeat(NEWLINE),
      ')',
    ),

    class_parameter: $ => seq(
      optional($.modifiers),
      optional(choice('val', 'var')),
      repeat(NEWLINE),
      $.simple_identifier,
      ':',
      repeat(NEWLINE),
      $.type,
      optional(seq(
        repeat(NEWLINE),
        '=',
        repeat(NEWLINE),
        $.expression,
      )),
    ),

    block: $ => seq(
      '{',
      repeat(NEWLINE),
      optional($.statements),
      repeat(NEWLINE),
      '}',
    ),

    // In the official Kotlin syntax, this rule can match the empty
    // string. So we need to instead always call it as
    // `optional($.statements)` instead.
    statements: $ => seq(
      $.statement,
      repeat(seq(
        $._semis,
        $.statement,
      )),
      optional($._semis),
    ),

    // TODO Fix
    statement: $ => 'statement',

    // TODO Fix
    expression: $ => 'expression',

    delegation_specifiers: $ => seq(
      $.annotated_delegation_specifier,
      repeat(seq(
        repeat(NEWLINE),
        ',',
        repeat(NEWLINE),
        $.annotated_delegation_specifier,
      )),
    ),

    annotated_delegation_specifier: $ => seq(
      repeat($.annotation),
      repeat(NEWLINE),
      $.delegation_specifier,
    ),

    delegation_specifier: $ => choice(
      $.constructor_invocation,
      $.explicit_delegation,
      $.user_type,
      $.function_type,
      seq(
        'suspend',
        repeat(NEWLINE),
        $.function_type,
      ),
    ),

    constructor_invocation: $ => seq(
      $.user_type,
      repeat(NEWLINE),
      $.value_arguments,
    ),

    explicit_delegation: $ => seq(
      choice($.user_type, $.function_type),
      repeat(NEWLINE),
      'by',
      repeat(NEWLINE),
      $.expression,
    ),

    type_constraints: $ => seq(
      'where',
      repeat(NEWLINE),
      $.type_constraint,
      repeat(seq(
        repeat(NEWLINE),
        ',',
        repeat(NEWLINE),
        $.type_constraint,
      )),
    ),

    type_constraint: $ => seq(
      repeat($.annotation),
      $.simple_identifier,
      repeat(NEWLINE),
      ':',
      repeat(NEWLINE),
      $.type,
    ),

    class_body: $ => seq(
      '{',
      repeat(NEWLINE),
      repeat(seq(
        $.class_member_declaration,
        optional($._semis),
      )),
      repeat(NEWLINE),
      '}'
    ),

    enum_class_body: $ => seq(
      '{',
      repeat(NEWLINE),
      optional($.enum_entries),
      optional(seq(
        repeat(NEWLINE),
        ';',
        repeat(NEWLINE),
        repeat(seq(
          $.class_member_declaration,
          optional($._semis),
        )),
      )),
      repeat(NEWLINE),
      '}'
    ),

    enum_entries: $ => seq(
      $.enum_entry,
      repeat(seq(
        repeat(NEWLINE),
        ',',
        repeat(NEWLINE),
        $.enum_entry,
        optional(','),
      )),
    ),

    enum_entry: $ => seq(
      optional(seq($.modifiers, repeat(NEWLINE))),
      $.simple_identifier,
      optional(seq(
        repeat(NEWLINE),
        $.value_arguments,
      )),
      optional(seq(
        repeat(NEWLINE),
        $.class_body,
      )),
    ),

    value_arguments: $ => seq(
      '(',
      repeat(NEWLINE),
      optional(seq(
        $.value_argument,
        repeat(seq(
          repeat(NEWLINE),
          ',',
          repeat(NEWLINE),
          $.value_argument,
        )),
        optional(seq(
          repeat(NEWLINE),
          ',',
        )),
        repeat(NEWLINE),
      )),
      ')',
    ),

    value_argument: $ => seq(
      optional($.annotation),
      repeat(NEWLINE),
      optional(seq(
        $.simple_identifier,
        repeat(NEWLINE),
        '=',
        repeat(NEWLINE),
      )),
      optional('*'),
      repeat(NEWLINE),
      $.expression,
    ),

    // TODO The rest
    class_member_declaration: $ => choice(
      $._declaration,
    ),

    type_alias: $ => prec.left(seq(
      optional($.modifiers),
      'typealias',
      repeat(NEWLINE),
      $.simple_identifier,
      optional(seq(repeat(NEWLINE), $.type_parameters)),
      repeat(NEWLINE),
      '=',
      repeat(NEWLINE),
      $.type,
    )),

    modifiers: $ => choice(
      $.annotation,
      seq($.modifier, repeat(choice($.annotation, $.modifier))),
    ),


    modifier: $ => seq(
      choice(
        $.class_modifier,
      ),
      repeat(NEWLINE),
    ),

    // modifier:
    // (classModifier | memberModifier | visibilityModifier | functionModifier | propertyModifier | inheritanceModifier | parameterModifier | platformModifier) {NL}

    class_modifier: $ => choice(
      'enum',
      'sealed',
      'annotation',
      'data',
      'inner',
      'value',
    ),

    annotation: $ => prec.left(seq(
      choice($.single_annotation, $.multi_annotation),
      repeat(NEWLINE),
    )),

    single_annotation: $ => seq(
      choice(
        seq($.annotation_use_site_target, repeat(NEWLINE)),
        '@',
      ),
      $.unescaped_annotation,
    ),

    multi_annotation: $ => seq(
      choice(
        seq($.annotation_use_site_target, repeat(NEWLINE)),
        '@',
      ),
      '[',
      repeat1($.unescaped_annotation),
      ']',
    ),

    unescaped_annotation: $ => choice(
      $.constructor_invocation,
      $.user_type,
    ),

    annotation_use_site_target: $ => seq(
      '@',
      choice(
        'field',
        'property',
        'get',
        'set',
        'receiver',
        'param',
        'setparam',
        'delegate'
,
      ),
      repeat(NEWLINE),
      ':',
    ),

    type_parameters: $ => seq(
      '<',
      repeat(NEWLINE),
      $.type_parameter,
      repeat(seq(
        repeat(NEWLINE),
        ',',
        repeat(NEWLINE),
        $.type_parameter,
      )),
      optional(seq(
        repeat(NEWLINE),
        ',',
      )),
      repeat(NEWLINE),
      '>',
    ),

    type_parameter: $ => prec.left(seq(
      repeat($.type_parameter_modifier),
      repeat(NEWLINE),
      $.simple_identifier,
      optional(seq(
        repeat(NEWLINE),
        ':',
        repeat(NEWLINE),
        $.type,
      )),
    )),

    type_parameter_modifier: $ => prec.left(choice(
      seq('reified', repeat(NEWLINE)),
      seq($.variance_modifier, repeat(NEWLINE)),
      $.annotation,
    )),

    variance_modifier: $ => choice(
      'in',
      'out',
    ),

    // TODO: The rest
    type: $ => prec.left(1, seq(
      repeat($.type_modifier),
      choice(
        $.function_type,
        $.parenthesized_type,
        $.nullable_type,
        $.type_reference,
        $.definitely_non_nullable_type,
      ),
    )),

    type_modifier: $ => choice(
      'annotation',
      seq('suspend', repeat(NEWLINE)),
    ),

    function_type: $ => prec.left(5, seq(
      optional(seq(
        $.receiver_type,
        repeat(NEWLINE),
        '.',
        repeat(NEWLINE),
      )),
      $.function_type_parameters,
      repeat(NEWLINE),
      '->',
      repeat(NEWLINE),
      $.type,
    )),

    function_type_parameters: $ => seq(
      '(',
      repeat(NEWLINE),
      optional(choice($.parameter, $.type)),
      repeat(seq(
        repeat(NEWLINE),
        ',',
        repeat(NEWLINE),
        choice($.parameter, $.type),
      )),
      optional(seq(
        repeat(NEWLINE),
        ',',
      )),
      repeat(NEWLINE),
      ')',
    ),

    parenthesized_type: $ => prec.left(4, seq(
      '(',
      repeat(NEWLINE),
      $.type,
      repeat(NEWLINE),
      ')'
    )),

    nullable_type: $ => prec.left(3, seq(
      choice($.type_reference, $.parenthesized_type),
      repeat(NEWLINE),
      repeat(QUEST),
    )),

    type_reference: $ => prec.left(2, choice(
      $.user_type,
      'dynamic',
    )),

    definitely_non_nullable_type: $ => seq(
      repeat($.type_modifier),
      choice($.user_type, $.parenthesized_type),
      repeat(NEWLINE),
      '&',
      repeat(NEWLINE),
      repeat($.type_modifier),
      choice($.user_type, $.parenthesized_type),
    ),

    receiver_type: $ => seq(
      repeat($.type_modifier),
      choice(
        $.parenthesized_type,
        $.nullable_type,
        $.type_reference,
      ),
    ),

    user_type: $ => prec.left(seq(
      $.simple_user_type,
      repeat(seq(
        repeat(NEWLINE),
        '.',
        repeat(NEWLINE),
        $.simple_user_type,
      )),
    )),

    simple_user_type: $ => prec.left(seq(
      $.simple_identifier,
      optional(seq(
        repeat(NEWLINE),
        $.type_arguments,
      )),
    )),

    type_arguments: $ => seq(
      '<',
      repeat(NEWLINE),
      $.type_projection,
      repeat(seq(
        repeat(NEWLINE),
        ',',
        repeat(NEWLINE),
        $.type_projection,
      )),
      optional(seq(
        repeat(NEWLINE),
        ',',
      )),
      repeat(NEWLINE),
      '>',
    ),

    type_projection: $ => choice(
      seq(
        repeat($.type_projection_modifier),
        $.type,
      ),
      '*',
    ),

    type_projection_modifier: $ => choice(
      seq($.variance_modifier, repeat(NEWLINE)),
      $.annotation,
    ),

    parameter: $ => seq(
      $.simple_identifier,
      repeat(NEWLINE),
      ':',
      repeat(NEWLINE),
      $.type,
    ),

    identifier: $ => prec.left(1, seq(
      $.simple_identifier,
      repeat(seq(
        repeat(NEWLINE),
        '.',
        $.simple_identifier,
      )))
    ),

    simple_identifier: $ => choice($._non_backtick_identifier, $._backtick_identifier),

    _non_backtick_identifier: $ => token(seq(
      choice(LETTER, '_'),
      repeat(choice(LETTER, '_', UNICODE_DIGIT)),
    )),

    _backtick_identifier: $ => token(seq(
      '`',
      /[^\r\n`]+/,
      '`',
    )),

    _semi: $ => seq(
      choice(';', NEWLINE),
      repeat(NEWLINE),
    ),

    _semis: $ => choice(
      ';',
      seq(NEWLINE, repeat(choice(';', NEWLINE))),
    ),
  }
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
