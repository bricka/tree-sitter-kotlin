// Using an adapted version of https://kotlinlang.org/spec/syntax-and-grammar.html

const LETTER = /[\p{Lu}\p{Ll}\p{Lt}\p{Lm}\p{Lo}]/;
const UNICODE_DIGIT = /\p{Nd}/;
const NEWLINE = '\n';
const QUEST = '?';

module.exports = grammar({
  name: "kotlin",

  conflicts: $ => [
    [$.delegation_specifiers],

    [$.type_constraints],

    [$.constructor_invocation, $.unescaped_annotation],

    [$.delegation_specifier, $.explicit_delegation],

    [$.delegation_specifier, $.type_modifier],

    [$.receiver_type],

    [$.definitely_non_nullable_type],

    [$.function_declaration],

    [$.function_value_parameter],
  ],

  rules: {
    // TODO: The rest
    kotlin_file: $ => seq(
      optional($.shebang_line),
      newlines(),
      repeat($.file_annotation),
      optional($.package_header),
      repeat($.import_header),
      repeat($._top_level_object)
    ),

    shebang_line: $ => token(seq(
      '#!',
      /[^\r\n]*/,
      token(repeat1(NEWLINE)),
    )),

    file_annotation: $ => seq(
      '@',
      'file',
      newlines(),
      ':',
      newlines(),
      choice(
        seq('[', repeat1($.unescaped_annotation), ']'),
        $.unescaped_annotation,
      ),
      newlines(),
    ),

    // In the official grammar, this can match the empty string. Needs
    // to be called as `optional($.package_header)`
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
      $.object_declaration,
      $.function_declaration,
      $.property_declaration,
      $.type_alias,
    ),

    function_declaration: $ => seq(
      optional($.modifiers),
      'fun',
      optional(seq(newlines(), $.type_parameters)),
      optional(seq(
        newlines(),
        $.receiver_type,
        newlines(),
        '.',
      )),
      newlines(),
      $.simple_identifier,
      newlines(),
      $.function_value_parameters,
      optional(seq(
        newlines(),
        ':',
        newlines(),
        $.type,
      )),
      optional(seq(newlines(), $.type_constraints)),
      optional(seq(newlines(), $.function_body)),
    ),

    function_body: $ => choice(
      $.block,
      seq(
        '=',
        newlines(),
        $.expression,
      )
    ),

    function_value_parameters: $ => seq(
      '(',
      newlines(),
      optional(seq(
        $.function_value_parameter,
        repeat(seq(
          newlines(),
          ',',
          newlines(),
          $.function_value_parameter,
        )),
        optional(seq(newlines(), ',')),
      )),
      newlines(),
      ')'
    ),

    function_value_parameter: $ => seq(
      optional($.parameter_modifiers),
      $.parameter,
      optional(seq(
        newlines(),
        '=',
        newlines(),
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

    // In the source grammar, `class_declaration` combines enum and
    // non-enum classes, but this leads to tree-sitter conflicts.
    // Therefore, we separate them here.

    class_declaration: $ => choice(
      $._enum_class_declaration,
      $._non_enum_class_declaration,
    ),

    _enum_class_declaration: $ => prec.left(seq(
      optional($.modifiers),
      'enum',
      'class',
      newlines(),
      $.simple_identifier,
      optional(seq(newlines(), $.primary_constructor)),
      optional(seq(
        newlines(),
        ':',
        $.delegation_specifiers,
      )),
      optional(seq(
        newlines(),
        $.enum_class_body,
      )),
    )),

    _non_enum_class_declaration: $ => prec.left(seq(
      optional($.modifiers),
      choice(
        'class',
        seq(
          optional(seq('fun', newlines())),
          'interface',
        ),
      ),
      newlines(),
      $.simple_identifier,
      optional(seq(newlines(), $.type_parameters)),
      optional(seq(newlines(), $.primary_constructor)),
      optional(seq(
        newlines(),
        ':',
        $.delegation_specifiers,
      )),
      optional(seq(newlines(), $.type_constraints)),
      optional(seq(
        newlines(),
        $.class_body,
      )),
    )),

    primary_constructor: $ => seq(
      optional(seq(
        optional($.modifiers),
        'constructor',
        newlines(),
      )),
      $.class_parameters,
    ),

    class_parameters: $ => seq(
      '(',
      newlines(),
      optional(seq(
        $.class_parameter,
        repeat(seq(
          newlines(),
          ',',
          newlines(),
          $.class_parameter,
          optional(seq(
            newlines(),
            ',',
          )),
        )),
      )),
      newlines(),
      ')',
    ),

    class_parameter: $ => prec.left(seq(
      optional($.modifiers),
      optional(choice('val', 'var')),
      newlines(),
      $.simple_identifier,
      ':',
      newlines(),
      $.type,
      optional(seq(
        newlines(),
        '=',
        newlines(),
        $.expression,
      )),
    )),

    block: $ => seq(
      '{',
      newlines(),
      optional($.statements),
      newlines(),
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

    object_declaration: $ => prec.left(1, seq(
      optional($.modifiers),
      'object',
      newlines(),
      $.simple_identifier,
      optional(seq(
        newlines(),
        ':',
        newlines(),
        $.delegation_specifiers,
      )),
      optional(seq(newlines(), $.class_body)),
    )),

    property_declaration: $ => prec.left(seq(
      optional($.modifiers),
      choice('val', 'var'),
      optional(seq(newlines(), $.type_parameters)),
      optional(seq(
        newlines(),
        $.receiver_type,
        newlines(),
        '.',
      )),
      choice(
        seq(newlines(), $.multi_variable_declaration),
        $.variable_declaration,
      ),
      optional(seq(newlines(), $.type_constraints)),
      optional(seq(
        newlines(),
        choice(
          seq('=', newlines(), $.expression),
          $.property_delegate,
        ),
      )),
      optional(seq(newlines(), ';')),
      newlines(),
      choice(
        seq(optional($.getter), optional(seq(newlines(), optional($._semi), $.setter))),
        seq(optional($.setter), optional(seq(newlines(), optional($._semi), $.getter))),
      ),
    )),

    multi_variable_declaration: $ => seq(
      '(',
      newlines(),
      $.variable_declaration,
      repeat(seq(
        newlines(),
        ',',
        newlines(),
        $.variable_declaration,
      )),
      optional(seq(newlines(), ',')),
      newlines(),
      ')',
    ),

    variable_declaration: $ => prec.left(3, seq(
      repeat($.annotation),
      newlines(),
      $.simple_identifier,
      optional(seq(
        newlines(),
        ':',
        newlines(),
        $.type,
      )),
    )),

    property_delegate: $ => seq(
      'by',
      newlines(),
      $.expression,
    ),

    getter: $ => prec.left(seq(
      optional($.modifiers),
      'get',
      optional(seq(
        newlines(),
        '(',
        newlines(),
        ')',
        optional(seq(
          newlines(),
          ':',
          newlines(),
          $.type,
        )),
        newlines(),
        $.function_body,
      )),
    )),

    setter: $ => prec.left(seq(
      optional($.modifiers),
      'set',
      optional(seq(
        newlines(),
        '(',
        newlines(),
        $.function_value_parameter_with_optional_type,
        optional(seq(newlines(), ',')),
        newlines(),
        ')',
        optional(seq(
          newlines(),
          ':',
          newlines(),
          $.type,
        )),
        newlines(),
        $.function_body,
      )),
    )),

    function_value_parameter_with_optional_type: $ => prec.left(seq(
      optional($.parameter_modifiers),
      $.parameter_with_optional_type,
      optional(seq(
        newlines(),
        '=',
        newlines(),
        $.expression,
      )),
    )),

    delegation_specifiers: $ => seq(
      $.annotated_delegation_specifier,
      repeat(seq(
        newlines(),
        ',',
        newlines(),
        $.annotated_delegation_specifier,
      )),
    ),

    annotated_delegation_specifier: $ => seq(
      repeat($.annotation),
      newlines(),
      $.delegation_specifier,
    ),

    delegation_specifier: $ => choice(
      $.constructor_invocation,
      $.explicit_delegation,
      $.user_type,
      $.function_type,
      seq(
        'suspend',
        newlines(),
        $.function_type,
      ),
    ),

    constructor_invocation: $ => seq(
      $.user_type,
      newlines(),
      $.value_arguments,
    ),

    explicit_delegation: $ => seq(
      choice($.user_type, $.function_type),
      newlines(),
      'by',
      newlines(),
      $.expression,
    ),

    type_constraints: $ => seq(
      'where',
      newlines(),
      $.type_constraint,
      repeat(seq(
        newlines(),
        ',',
        newlines(),
        $.type_constraint,
      )),
    ),

    type_constraint: $ => seq(
      repeat($.annotation),
      $.simple_identifier,
      newlines(),
      ':',
      newlines(),
      $.type,
    ),

    class_body: $ => seq(
      '{',
      newlines(),
      repeat(seq(
        $.class_member_declaration,
        optional($._semis),
      )),
      newlines(),
      '}'
    ),

    enum_class_body: $ => seq(
      '{',
      newlines(),
      optional($.enum_entries),
      optional(seq(
        newlines(),
        ';',
        newlines(),
        repeat(seq(
          $.class_member_declaration,
          optional($._semis),
        )),
      )),
      newlines(),
      '}'
    ),

    enum_entries: $ => prec.left(seq(
      $.enum_entry,
      repeat(seq(
        newlines(),
        ',',
        newlines(),
        $.enum_entry,
        optional(','),
      )),
    )),

    enum_entry: $ => prec.left(seq(
      optional(seq($.modifiers, newlines())),
      $.simple_identifier,
      optional(seq(
        newlines(),
        $.value_arguments,
      )),
      optional(seq(
        newlines(),
        $.class_body,
      )),
    )),

    value_arguments: $ => seq(
      '(',
      newlines(),
      optional(seq(
        $.value_argument,
        repeat(seq(
          newlines(),
          ',',
          newlines(),
          $.value_argument,
        )),
        optional(seq(
          newlines(),
          ',',
        )),
        newlines(),
      )),
      ')',
    ),

    value_argument: $ => seq(
      optional($.annotation),
      newlines(),
      optional(seq(
        $.simple_identifier,
        newlines(),
        '=',
        newlines(),
      )),
      optional('*'),
      newlines(),
      $.expression,
    ),

    // TODO The rest
    class_member_declaration: $ => choice(
      $._declaration,
    ),

    type_alias: $ => prec.left(seq(
      optional($.modifiers),
      'typealias',
      newlines(),
      $.simple_identifier,
      optional(seq(newlines(), $.type_parameters)),
      newlines(),
      '=',
      newlines(),
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
      newlines(),
    ),

    // modifier:
    // (classModifier | memberModifier | visibilityModifier | functionModifier | propertyModifier | inheritanceModifier | parameterModifier | platformModifier) {NL}

    class_modifier: $ => choice(
      'sealed',
      'annotation',
      'data',
      'inner',
      'value',
    ),

    annotation: $ => prec.left(seq(
      choice($.single_annotation, $.multi_annotation),
      newlines(),
    )),

    single_annotation: $ => seq(
      choice(
        seq($.annotation_use_site_target, newlines()),
        '@',
      ),
      $.unescaped_annotation,
    ),

    multi_annotation: $ => seq(
      choice(
        seq($.annotation_use_site_target, newlines()),
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
      newlines(),
      ':',
    ),

    type_parameters: $ => seq(
      '<',
      newlines(),
      $.type_parameter,
      repeat(seq(
        newlines(),
        ',',
        newlines(),
        $.type_parameter,
      )),
      optional(seq(
        newlines(),
        ',',
      )),
      newlines(),
      '>',
    ),

    type_parameter: $ => prec.left(seq(
      repeat($.type_parameter_modifier),
      newlines(),
      $.simple_identifier,
      optional(seq(
        newlines(),
        ':',
        newlines(),
        $.type,
      )),
    )),

    type_parameter_modifier: $ => prec.left(choice(
      seq('reified', newlines()),
      seq($.variance_modifier, newlines()),
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
      seq('suspend', newlines()),
    ),

    function_type: $ => prec.left(5, seq(
      optional(seq(
        $.receiver_type,
        newlines(),
        '.',
        newlines(),
      )),
      $.function_type_parameters,
      newlines(),
      '->',
      newlines(),
      $.type,
    )),

    function_type_parameters: $ => seq(
      '(',
      newlines(),
      optional(choice($.parameter, $.type)),
      repeat(seq(
        newlines(),
        ',',
        newlines(),
        choice($.parameter, $.type),
      )),
      optional(seq(
        newlines(),
        ',',
      )),
      newlines(),
      ')',
    ),

    parenthesized_type: $ => prec.left(4, seq(
      '(',
      newlines(),
      $.type,
      newlines(),
      ')'
    )),

    nullable_type: $ => prec.left(3, seq(
      choice($.type_reference, $.parenthesized_type),
      newlines(),
      repeat(QUEST),
    )),

    type_reference: $ => prec.left(2, choice(
      $.user_type,
      'dynamic',
    )),

    definitely_non_nullable_type: $ => prec(1, seq(
      repeat($.type_modifier),
      choice($.user_type, $.parenthesized_type),
      newlines(),
      '&',
      newlines(),
      repeat($.type_modifier),
      choice($.user_type, $.parenthesized_type),
    )),

    receiver_type: $ => prec.left(seq(
      repeat($.type_modifier),
      choice(
        $.parenthesized_type,
        $.nullable_type,
        $.type_reference,
      ),
    )),

    user_type: $ => prec.left(seq(
      $.simple_user_type,
      repeat(seq(
        newlines(),
        '.',
        newlines(),
        $.simple_user_type,
      )),
    )),

    simple_user_type: $ => prec.left(seq(
      $.simple_identifier,
      optional(seq(
        newlines(),
        $.type_arguments,
      )),
    )),

    type_arguments: $ => seq(
      '<',
      newlines(),
      $.type_projection,
      repeat(seq(
        newlines(),
        ',',
        newlines(),
        $.type_projection,
      )),
      optional(seq(
        newlines(),
        ',',
      )),
      newlines(),
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
      seq($.variance_modifier, newlines()),
      $.annotation,
    ),

    parameter: $ => seq(
      $.simple_identifier,
      newlines(),
      ':',
      newlines(),
      $.type,
    ),

    parameter_with_optional_type: $ => seq(
      $.simple_identifier,
      newlines(),
      optional(seq(
        ':',
        newlines(),
        $.type,
      )),
    ),

    identifier: $ => prec.left(1, seq(
      $.simple_identifier,
      repeat(seq(
        newlines(),
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
      newlines(),
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

function newlines() {
  return token(repeat(NEWLINE));
}
