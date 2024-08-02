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
      // $.class_declaration,
      // $.object_declaration,
      // $.function_declaration,
      // $.property_declaration,
      $.type_alias,
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
      // $.constructor_invocation,
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
      // repeat($.type_modifier),
      choice($.user_type, $.parenthesized_type),
      repeat(NEWLINE),
      '&',
      repeat(NEWLINE),
      // repeat($.type_modifier),
      choice($.user_type, $.parenthesized_type),
    ),

    receiver_type: $ => seq(
      // repeat($.type_modifier),
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
        // repeat($.type_projection_modifier),
        $.type,
      ),
      '*',
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
