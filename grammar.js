// Using an adapted version of https://kotlinlang.org/spec/syntax-and-grammar.html

const LETTER = /[\p{Lu}\p{Ll}\p{Lt}\p{Lm}\p{Lo}]/;
const UNICODE_DIGIT = /\p{Nd}/;
const NEWLINE = '\n';

module.exports = grammar({
  name: "kotlin",

  rules: {
    kotlin_file: $ => seq(
      optional($.shebang_line),
      repeat(NEWLINE),
      optional($.package_header),
      repeat($.import_header),
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
  }
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
