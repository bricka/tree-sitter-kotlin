#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 476
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_shebang_line = 2,
  anon_sym_package = 3,
  anon_sym_import = 4,
  aux_sym_import_header_token1 = 5,
  anon_sym_as = 6,
  anon_sym_typealias = 7,
  anon_sym_EQ = 8,
  anon_sym_enum = 9,
  anon_sym_sealed = 10,
  anon_sym_annotation = 11,
  anon_sym_data = 12,
  anon_sym_inner = 13,
  anon_sym_value = 14,
  anon_sym_AT = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_field = 18,
  anon_sym_property = 19,
  anon_sym_get = 20,
  anon_sym_set = 21,
  anon_sym_receiver = 22,
  anon_sym_param = 23,
  anon_sym_setparam = 24,
  anon_sym_delegate = 25,
  anon_sym_COLON = 26,
  anon_sym_LT = 27,
  anon_sym_COMMA = 28,
  anon_sym_GT = 29,
  anon_sym_reified = 30,
  anon_sym_in = 31,
  anon_sym_out = 32,
  anon_sym_suspend = 33,
  anon_sym_DOT = 34,
  anon_sym_DASH_GT = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_QMARK = 38,
  anon_sym_dynamic = 39,
  anon_sym_AMP = 40,
  anon_sym_STAR = 41,
  sym__non_backtick_identifier = 42,
  sym__backtick_identifier = 43,
  anon_sym_SEMI = 44,
  sym_kotlin_file = 45,
  sym_package_header = 46,
  sym_import_header = 47,
  sym_import_alias = 48,
  sym__top_level_object = 49,
  sym__declaration = 50,
  sym_type_alias = 51,
  sym_modifiers = 52,
  sym_modifier = 53,
  sym_class_modifier = 54,
  sym_annotation = 55,
  sym_single_annotation = 56,
  sym_multi_annotation = 57,
  sym_unescaped_annotation = 58,
  sym_annotation_use_site_target = 59,
  sym_type_parameters = 60,
  sym_type_parameter = 61,
  sym_type_parameter_modifier = 62,
  sym_variance_modifier = 63,
  sym_type = 64,
  sym_type_modifier = 65,
  sym_function_type = 66,
  sym_function_type_parameters = 67,
  sym_parenthesized_type = 68,
  sym_nullable_type = 69,
  sym_type_reference = 70,
  sym_definitely_non_nullable_type = 71,
  sym_receiver_type = 72,
  sym_user_type = 73,
  sym_simple_user_type = 74,
  sym_type_arguments = 75,
  sym_type_projection = 76,
  sym_parameter = 77,
  sym_identifier = 78,
  sym_simple_identifier = 79,
  sym__semi = 80,
  sym__semis = 81,
  aux_sym_kotlin_file_repeat1 = 82,
  aux_sym_kotlin_file_repeat2 = 83,
  aux_sym_kotlin_file_repeat3 = 84,
  aux_sym_modifiers_repeat1 = 85,
  aux_sym_multi_annotation_repeat1 = 86,
  aux_sym_type_parameters_repeat1 = 87,
  aux_sym_type_parameter_repeat1 = 88,
  aux_sym_type_repeat1 = 89,
  aux_sym_function_type_parameters_repeat1 = 90,
  aux_sym_nullable_type_repeat1 = 91,
  aux_sym_user_type_repeat1 = 92,
  aux_sym_type_arguments_repeat1 = 93,
  aux_sym_identifier_repeat1 = 94,
  aux_sym__semis_repeat1 = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_shebang_line] = "shebang_line",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [aux_sym_import_header_token1] = "import_header_token1",
  [anon_sym_as] = "as",
  [anon_sym_typealias] = "typealias",
  [anon_sym_EQ] = "=",
  [anon_sym_enum] = "enum",
  [anon_sym_sealed] = "sealed",
  [anon_sym_annotation] = "annotation",
  [anon_sym_data] = "data",
  [anon_sym_inner] = "inner",
  [anon_sym_value] = "value",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_field] = "field",
  [anon_sym_property] = "property",
  [anon_sym_get] = "get",
  [anon_sym_set] = "set",
  [anon_sym_receiver] = "receiver",
  [anon_sym_param] = "param",
  [anon_sym_setparam] = "setparam",
  [anon_sym_delegate] = "delegate",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_reified] = "reified",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_suspend] = "suspend",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_QMARK] = "\?",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR] = "*",
  [sym__non_backtick_identifier] = "_non_backtick_identifier",
  [sym__backtick_identifier] = "_backtick_identifier",
  [anon_sym_SEMI] = ";",
  [sym_kotlin_file] = "kotlin_file",
  [sym_package_header] = "package_header",
  [sym_import_header] = "import_header",
  [sym_import_alias] = "import_alias",
  [sym__top_level_object] = "_top_level_object",
  [sym__declaration] = "_declaration",
  [sym_type_alias] = "type_alias",
  [sym_modifiers] = "modifiers",
  [sym_modifier] = "modifier",
  [sym_class_modifier] = "class_modifier",
  [sym_annotation] = "annotation",
  [sym_single_annotation] = "single_annotation",
  [sym_multi_annotation] = "multi_annotation",
  [sym_unescaped_annotation] = "unescaped_annotation",
  [sym_annotation_use_site_target] = "annotation_use_site_target",
  [sym_type_parameters] = "type_parameters",
  [sym_type_parameter] = "type_parameter",
  [sym_type_parameter_modifier] = "type_parameter_modifier",
  [sym_variance_modifier] = "variance_modifier",
  [sym_type] = "type",
  [sym_type_modifier] = "type_modifier",
  [sym_function_type] = "function_type",
  [sym_function_type_parameters] = "function_type_parameters",
  [sym_parenthesized_type] = "parenthesized_type",
  [sym_nullable_type] = "nullable_type",
  [sym_type_reference] = "type_reference",
  [sym_definitely_non_nullable_type] = "definitely_non_nullable_type",
  [sym_receiver_type] = "receiver_type",
  [sym_user_type] = "user_type",
  [sym_simple_user_type] = "simple_user_type",
  [sym_type_arguments] = "type_arguments",
  [sym_type_projection] = "type_projection",
  [sym_parameter] = "parameter",
  [sym_identifier] = "identifier",
  [sym_simple_identifier] = "simple_identifier",
  [sym__semi] = "_semi",
  [sym__semis] = "_semis",
  [aux_sym_kotlin_file_repeat1] = "kotlin_file_repeat1",
  [aux_sym_kotlin_file_repeat2] = "kotlin_file_repeat2",
  [aux_sym_kotlin_file_repeat3] = "kotlin_file_repeat3",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_multi_annotation_repeat1] = "multi_annotation_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_type_parameter_repeat1] = "type_parameter_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_function_type_parameters_repeat1] = "function_type_parameters_repeat1",
  [aux_sym_nullable_type_repeat1] = "nullable_type_repeat1",
  [aux_sym_user_type_repeat1] = "user_type_repeat1",
  [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym__semis_repeat1] = "_semis_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_shebang_line] = sym_shebang_line,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_import_header_token1] = aux_sym_import_header_token1,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_typealias] = anon_sym_typealias,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_sealed] = anon_sym_sealed,
  [anon_sym_annotation] = anon_sym_annotation,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_inner] = anon_sym_inner,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_receiver] = anon_sym_receiver,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_setparam] = anon_sym_setparam,
  [anon_sym_delegate] = anon_sym_delegate,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_reified] = anon_sym_reified,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_suspend] = anon_sym_suspend,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym__non_backtick_identifier] = sym__non_backtick_identifier,
  [sym__backtick_identifier] = sym__backtick_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_kotlin_file] = sym_kotlin_file,
  [sym_package_header] = sym_package_header,
  [sym_import_header] = sym_import_header,
  [sym_import_alias] = sym_import_alias,
  [sym__top_level_object] = sym__top_level_object,
  [sym__declaration] = sym__declaration,
  [sym_type_alias] = sym_type_alias,
  [sym_modifiers] = sym_modifiers,
  [sym_modifier] = sym_modifier,
  [sym_class_modifier] = sym_class_modifier,
  [sym_annotation] = sym_annotation,
  [sym_single_annotation] = sym_single_annotation,
  [sym_multi_annotation] = sym_multi_annotation,
  [sym_unescaped_annotation] = sym_unescaped_annotation,
  [sym_annotation_use_site_target] = sym_annotation_use_site_target,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_parameter] = sym_type_parameter,
  [sym_type_parameter_modifier] = sym_type_parameter_modifier,
  [sym_variance_modifier] = sym_variance_modifier,
  [sym_type] = sym_type,
  [sym_type_modifier] = sym_type_modifier,
  [sym_function_type] = sym_function_type,
  [sym_function_type_parameters] = sym_function_type_parameters,
  [sym_parenthesized_type] = sym_parenthesized_type,
  [sym_nullable_type] = sym_nullable_type,
  [sym_type_reference] = sym_type_reference,
  [sym_definitely_non_nullable_type] = sym_definitely_non_nullable_type,
  [sym_receiver_type] = sym_receiver_type,
  [sym_user_type] = sym_user_type,
  [sym_simple_user_type] = sym_simple_user_type,
  [sym_type_arguments] = sym_type_arguments,
  [sym_type_projection] = sym_type_projection,
  [sym_parameter] = sym_parameter,
  [sym_identifier] = sym_identifier,
  [sym_simple_identifier] = sym_simple_identifier,
  [sym__semi] = sym__semi,
  [sym__semis] = sym__semis,
  [aux_sym_kotlin_file_repeat1] = aux_sym_kotlin_file_repeat1,
  [aux_sym_kotlin_file_repeat2] = aux_sym_kotlin_file_repeat2,
  [aux_sym_kotlin_file_repeat3] = aux_sym_kotlin_file_repeat3,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_multi_annotation_repeat1] = aux_sym_multi_annotation_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_type_parameter_repeat1] = aux_sym_type_parameter_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_function_type_parameters_repeat1] = aux_sym_function_type_parameters_repeat1,
  [aux_sym_nullable_type_repeat1] = aux_sym_nullable_type_repeat1,
  [aux_sym_user_type_repeat1] = aux_sym_user_type_repeat1,
  [aux_sym_type_arguments_repeat1] = aux_sym_type_arguments_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym__semis_repeat1] = aux_sym__semis_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_shebang_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_header_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typealias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_annotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_receiver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_suspend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym__non_backtick_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__backtick_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_kotlin_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_header] = {
    .visible = true,
    .named = true,
  },
  [sym_import_header] = {
    .visible = true,
    .named = true,
  },
  [sym_import_alias] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_object] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_type_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_class_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_single_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_use_site_target] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variance_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_type] = {
    .visible = true,
    .named = true,
  },
  [sym_nullable_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_definitely_non_nullable_type] = {
    .visible = true,
    .named = true,
  },
  [sym_receiver_type] = {
    .visible = true,
    .named = true,
  },
  [sym_user_type] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_user_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_projection] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__semi] = {
    .visible = false,
    .named = true,
  },
  [sym__semis] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_kotlin_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_kotlin_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_kotlin_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nullable_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__semis_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 10,
  [17] = 17,
  [18] = 18,
  [19] = 14,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 15,
  [24] = 17,
  [25] = 25,
  [26] = 25,
  [27] = 17,
  [28] = 25,
  [29] = 20,
  [30] = 15,
  [31] = 18,
  [32] = 9,
  [33] = 10,
  [34] = 34,
  [35] = 20,
  [36] = 36,
  [37] = 34,
  [38] = 12,
  [39] = 21,
  [40] = 36,
  [41] = 14,
  [42] = 18,
  [43] = 36,
  [44] = 34,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 49,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 63,
  [69] = 69,
  [70] = 49,
  [71] = 63,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 130,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 172,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 149,
  [181] = 181,
  [182] = 182,
  [183] = 149,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 131,
  [192] = 156,
  [193] = 193,
  [194] = 194,
  [195] = 165,
  [196] = 196,
  [197] = 197,
  [198] = 140,
  [199] = 199,
  [200] = 200,
  [201] = 165,
  [202] = 202,
  [203] = 203,
  [204] = 149,
  [205] = 156,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 149,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 214,
  [225] = 225,
  [226] = 213,
  [227] = 227,
  [228] = 130,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 160,
  [237] = 131,
  [238] = 238,
  [239] = 239,
  [240] = 167,
  [241] = 241,
  [242] = 242,
  [243] = 164,
  [244] = 206,
  [245] = 245,
  [246] = 157,
  [247] = 245,
  [248] = 248,
  [249] = 238,
  [250] = 250,
  [251] = 251,
  [252] = 200,
  [253] = 253,
  [254] = 254,
  [255] = 162,
  [256] = 163,
  [257] = 170,
  [258] = 166,
  [259] = 168,
  [260] = 158,
  [261] = 159,
  [262] = 262,
  [263] = 262,
  [264] = 264,
  [265] = 165,
  [266] = 231,
  [267] = 264,
  [268] = 225,
  [269] = 140,
  [270] = 219,
  [271] = 271,
  [272] = 156,
  [273] = 230,
  [274] = 274,
  [275] = 275,
  [276] = 211,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 130,
  [282] = 279,
  [283] = 283,
  [284] = 278,
  [285] = 285,
  [286] = 277,
  [287] = 278,
  [288] = 285,
  [289] = 279,
  [290] = 277,
  [291] = 285,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 294,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 301,
  [313] = 313,
  [314] = 306,
  [315] = 307,
  [316] = 316,
  [317] = 307,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 306,
  [327] = 327,
  [328] = 294,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 160,
  [336] = 159,
  [337] = 337,
  [338] = 158,
  [339] = 339,
  [340] = 168,
  [341] = 166,
  [342] = 170,
  [343] = 343,
  [344] = 163,
  [345] = 162,
  [346] = 157,
  [347] = 347,
  [348] = 348,
  [349] = 167,
  [350] = 301,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 164,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 364,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 371,
  [373] = 364,
  [374] = 374,
  [375] = 375,
  [376] = 365,
  [377] = 377,
  [378] = 369,
  [379] = 365,
  [380] = 371,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 369,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 393,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 393,
  [450] = 450,
  [451] = 211,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
};

static inline bool sym__non_backtick_identifier_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'e'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'b' && c <= 'c')))
                : (c <= 'r' || (c < 170
                  ? (c >= 't' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_3(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'j'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'h')))
                : (c <= 'n' || (c < 's'
                  ? (c >= 'p' && c <= 'q')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_4(int32_t c) {
  return (c < 6528
    ? (c < 2969
      ? (c < 2160
        ? (c < 1162
          ? (c < 710
            ? (c < 't'
              ? (c < 'e'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'c')))
                : (c <= 'e' || (c < 'q'
                  ? (c >= 'h' && c <= 'o')
                  : c <= 'q')))
              : (c <= 'z' || (c < 192
                ? (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))))
            : (c <= 721 || (c < 895
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : c <= 893)))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)))))))
          : (c <= 1327 || (c < 1808
            ? (c < 1646
              ? (c < 1488
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : c <= 1610)))
              : (c <= 1647 || (c < 1774
                ? (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2048
              ? (c < 1994
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)))
              : (c <= 2069 || (c < 2088
                ? (c < 2084
                  ? c == 2074
                  : c <= 2084)
                : (c <= 2088 || (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)))))))))
        : (c <= 2183 || (c < 2649
          ? (c < 2493
            ? (c < 2417
              ? (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))
              : (c <= 2432 || (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : c <= 2489)))))
            : (c <= 2493 || (c < 2575
              ? (c < 2544
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2565
                  ? c == 2556
                  : c <= 2570)))
              : (c <= 2576 || (c < 2610
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))))))
          : (c <= 2652 || (c < 2831
            ? (c < 2738
              ? (c < 2703
                ? (c < 2674
                  ? c == 2654
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))
              : (c <= 2739 || (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2821
                  ? c == 2809
                  : c <= 2828)))))
            : (c <= 2832 || (c < 2911
              ? (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))
              : (c <= 2913 || (c < 2949
                ? (c < 2947
                  ? c == 2929
                  : c <= 2947)
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)))))))))))
      : (c <= 2970 || (c < 3976
        ? (c < 3389
          ? (c < 3168
            ? (c < 3077
              ? (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))
              : (c <= 3084 || (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3165)))))
            : (c <= 3169 || (c < 3261
              ? (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))
              : (c <= 3261 || (c < 3332
                ? (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)))))))
          : (c <= 3389 || (c < 3716
            ? (c < 3507
              ? (c < 3450
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3634
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3804
                  ? c == 3782
                  : c <= 3807)
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4824
          ? (c < 4348
            ? (c < 4206
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : c <= 4198)))
              : (c <= 4208 || (c < 4295
                ? (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4752
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)))
              : (c <= 4784 || (c < 4800
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5905 || (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : c <= 5969)))))
            : (c <= 5996 || (c < 6279
              ? (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6276)))
              : (c <= 6312 || (c < 6400
                ? (c < 6320
                  ? c == 6314
                  : c <= 6389)
                : (c <= 6430 || (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)))))))))))))
    : (c <= 6571 || (c < 43250
      ? (c < 8526
        ? (c < 8029
          ? (c < 7312
            ? (c < 7043
              ? (c < 6823
                ? (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : c <= 6988)))
              : (c <= 7072 || (c < 7245
                ? (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7296
                  ? (c >= 7258 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7680
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : c <= 7615)))
              : (c <= 7957 || (c < 8016
                ? (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8027
                  ? c == 8025
                  : c <= 8027)))))))
          : (c <= 8029 || (c < 8336
            ? (c < 8144
              ? (c < 8126
                ? (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))
                : (c <= 8126 || (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : c <= 8140)))
              : (c <= 8147 || (c < 8182
                ? (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8319
                  ? c == 8305
                  : c <= 8319)))))
            : (c <= 8348 || (c < 8486
              ? (c < 8469
                ? (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : c <= 8484)))
              : (c <= 8486 || (c < 8495
                ? (c < 8490
                  ? c == 8488
                  : c <= 8493)
                : (c <= 8505 || (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)))))))))
        : (c <= 8526 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42656
            ? (c < 40959
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65313
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_5(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2384
        ? (c < 1488
          ? (c < 880
            ? (c < 192
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1984
            ? (c < 1765
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2790
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3904
        ? (c < 3412
          ? (c < 3214
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3183 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3302
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3713
            ? (c < 3517
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3439 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3634
                ? (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3673)))))
            : (c <= 3714 || (c < 3773
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? c == 3840
                  : c <= 3881)))))))))
        : (c <= 3911 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_6(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'o' || (c < 170
                  ? (c >= 'q' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_7(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'q' || (c < 170
                  ? (c >= 's' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_8(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'b' || (c < 170
                  ? (c >= 'd' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_9(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'c' || (c < 170
                  ? (c >= 'e' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_10(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'd' || (c < 170
                  ? (c >= 'f' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_11(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'e' || (c < 170
                  ? (c >= 'g' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_12(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'f' || (c < 170
                  ? (c >= 'h' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_13(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'h' || (c < 170
                  ? (c >= 'j' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_14(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'k' || (c < 170
                  ? (c >= 'm' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_15(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'l' || (c < 170
                  ? (c >= 'n' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_16(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'm' || (c < 170
                  ? (c >= 'o' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_17(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'n' || (c < 170
                  ? (c >= 'p' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_18(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'q' || (c < 170
                  ? (c >= 's' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_19(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'r' || (c < 170
                  ? (c >= 't' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_20(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 's' || (c < 170
                  ? (c >= 'u' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_21(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 't' || (c < 170
                  ? (c >= 'v' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_22(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'u' || (c < 170
                  ? (c >= 'w' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_23(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'x' || (c < 170
                  ? c == 'z'
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__non_backtick_identifier_character_set_24(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2384
        ? (c < 1488
          ? (c < 880
            ? (c < 192
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1984
            ? (c < 1765
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2790
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3904
        ? (c < 3412
          ? (c < 3214
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3183 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3302
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3713
            ? (c < 3517
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3439 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3634
                ? (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3673)))))
            : (c <= 3714 || (c < 3773
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? c == 3840
                  : c <= 3881)))))))))
        : (c <= 3911 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(114);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '&') ADVANCE(169);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(165);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '?') ADVANCE(166);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == ']') ADVANCE(132);
      if (lookahead == '`') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '&') ADVANCE(169);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(165);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '?') ADVANCE(166);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == ']') ADVANCE(132);
      if (sym__non_backtick_identifier_character_set_1(lookahead)) ADVANCE(237);
      if (lookahead == '`') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(165);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '>') ADVANCE(152);
      if (sym__non_backtick_identifier_character_set_2(lookahead)) ADVANCE(237);
      if (lookahead == '`') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(230);
      if (lookahead == 's') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '@') ADVANCE(130);
      if (sym__non_backtick_identifier_character_set_3(lookahead)) ADVANCE(237);
      if (lookahead == '`') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(184);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(1);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(164);
      if (sym__non_backtick_identifier_character_set_2(lookahead)) ADVANCE(237);
      if (lookahead == '`') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(230);
      if (lookahead == 's') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 8:
      if (lookahead == '[') ADVANCE(131);
      if (sym__non_backtick_identifier_character_set_4(lookahead)) ADVANCE(237);
      if (lookahead == '`') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'g') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 's') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(132);
      if (sym__non_backtick_identifier_character_set_1(lookahead)) ADVANCE(237);
      if (lookahead == '`') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 62:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 109:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(10);
      END_STATE();
    case 112:
      if (eof) ADVANCE(114);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '&') ADVANCE(169);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(165);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '?') ADVANCE(166);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(112)
      END_STATE();
    case 113:
      if (eof) ADVANCE(114);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(113)
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_shebang_line);
      if (lookahead == '\n') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_import_header_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_typealias);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_inner);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_field);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_property);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_get);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_set);
      if (sym__non_backtick_identifier_character_set_6(lookahead)) ADVANCE(237);
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_receiver);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_receiver);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_param);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_setparam);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_setparam);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_delegate);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_reified);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_reified);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_out);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_suspend);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_suspend);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(119);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_dynamic);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_7(lookahead)) ADVANCE(237);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_8(lookahead)) ADVANCE(237);
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_8(lookahead)) ADVANCE(237);
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_9(lookahead)) ADVANCE(237);
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_9(lookahead)) ADVANCE(237);
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_9(lookahead)) ADVANCE(237);
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_10(lookahead)) ADVANCE(237);
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_11(lookahead)) ADVANCE(237);
      if (lookahead == 'f') ADVANCE(196);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_12(lookahead)) ADVANCE(237);
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_13(lookahead)) ADVANCE(237);
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_13(lookahead)) ADVANCE(237);
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_13(lookahead)) ADVANCE(237);
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_13(lookahead)) ADVANCE(237);
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_13(lookahead)) ADVANCE(237);
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_13(lookahead)) ADVANCE(237);
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_14(lookahead)) ADVANCE(237);
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_14(lookahead)) ADVANCE(237);
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_15(lookahead)) ADVANCE(237);
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_15(lookahead)) ADVANCE(237);
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_15(lookahead)) ADVANCE(237);
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_16(lookahead)) ADVANCE(237);
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_16(lookahead)) ADVANCE(237);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_16(lookahead)) ADVANCE(237);
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_16(lookahead)) ADVANCE(237);
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_16(lookahead)) ADVANCE(237);
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_16(lookahead)) ADVANCE(237);
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_17(lookahead)) ADVANCE(237);
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_17(lookahead)) ADVANCE(237);
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_17(lookahead)) ADVANCE(237);
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_6(lookahead)) ADVANCE(237);
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_6(lookahead)) ADVANCE(237);
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_18(lookahead)) ADVANCE(237);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_18(lookahead)) ADVANCE(237);
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_18(lookahead)) ADVANCE(237);
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_18(lookahead)) ADVANCE(237);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_19(lookahead)) ADVANCE(237);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_20(lookahead)) ADVANCE(237);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_20(lookahead)) ADVANCE(237);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_20(lookahead)) ADVANCE(237);
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_20(lookahead)) ADVANCE(237);
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_20(lookahead)) ADVANCE(237);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_20(lookahead)) ADVANCE(237);
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_20(lookahead)) ADVANCE(237);
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_21(lookahead)) ADVANCE(237);
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_21(lookahead)) ADVANCE(237);
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_22(lookahead)) ADVANCE(237);
      if (lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_23(lookahead)) ADVANCE(237);
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_23(lookahead)) ADVANCE(237);
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_24(lookahead)) ADVANCE(237);
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_24(lookahead)) ADVANCE(237);
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_24(lookahead)) ADVANCE(237);
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_24(lookahead)) ADVANCE(237);
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_24(lookahead)) ADVANCE(237);
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_24(lookahead)) ADVANCE(237);
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__non_backtick_identifier);
      if (sym__non_backtick_identifier_character_set_5(lookahead)) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__backtick_identifier);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 112},
  [2] = {.lex_state = 112},
  [3] = {.lex_state = 112},
  [4] = {.lex_state = 112},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 113},
  [46] = {.lex_state = 113},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 113},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 113},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 113},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 113},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 113},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 113},
  [125] = {.lex_state = 113},
  [126] = {.lex_state = 113},
  [127] = {.lex_state = 113},
  [128] = {.lex_state = 113},
  [129] = {.lex_state = 113},
  [130] = {.lex_state = 112},
  [131] = {.lex_state = 112},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 112},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 112},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 112},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 112},
  [156] = {.lex_state = 112},
  [157] = {.lex_state = 112},
  [158] = {.lex_state = 112},
  [159] = {.lex_state = 112},
  [160] = {.lex_state = 112},
  [161] = {.lex_state = 112},
  [162] = {.lex_state = 112},
  [163] = {.lex_state = 112},
  [164] = {.lex_state = 112},
  [165] = {.lex_state = 112},
  [166] = {.lex_state = 112},
  [167] = {.lex_state = 112},
  [168] = {.lex_state = 112},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 112},
  [171] = {.lex_state = 112},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 112},
  [174] = {.lex_state = 113},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 113},
  [177] = {.lex_state = 113},
  [178] = {.lex_state = 112},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 112},
  [181] = {.lex_state = 112},
  [182] = {.lex_state = 112},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 112},
  [185] = {.lex_state = 112},
  [186] = {.lex_state = 112},
  [187] = {.lex_state = 112},
  [188] = {.lex_state = 112},
  [189] = {.lex_state = 112},
  [190] = {.lex_state = 113},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 112},
  [193] = {.lex_state = 112},
  [194] = {.lex_state = 113},
  [195] = {.lex_state = 112},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 113},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 112},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 112},
  [203] = {.lex_state = 112},
  [204] = {.lex_state = 112},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 112},
  [207] = {.lex_state = 112},
  [208] = {.lex_state = 112},
  [209] = {.lex_state = 112},
  [210] = {.lex_state = 113},
  [211] = {.lex_state = 112},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 112},
  [216] = {.lex_state = 112},
  [217] = {.lex_state = 112},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 112},
  [220] = {.lex_state = 112},
  [221] = {.lex_state = 112},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 112},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 112},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 112},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 112},
  [230] = {.lex_state = 112},
  [231] = {.lex_state = 112},
  [232] = {.lex_state = 113},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 9},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 112},
  [251] = {.lex_state = 112},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 112},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 112},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 112},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 112},
  [293] = {.lex_state = 112},
  [294] = {.lex_state = 112},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 112},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 112},
  [300] = {.lex_state = 112},
  [301] = {.lex_state = 112},
  [302] = {.lex_state = 112},
  [303] = {.lex_state = 112},
  [304] = {.lex_state = 112},
  [305] = {.lex_state = 112},
  [306] = {.lex_state = 112},
  [307] = {.lex_state = 112},
  [308] = {.lex_state = 2},
  [309] = {.lex_state = 112},
  [310] = {.lex_state = 112},
  [311] = {.lex_state = 112},
  [312] = {.lex_state = 112},
  [313] = {.lex_state = 112},
  [314] = {.lex_state = 112},
  [315] = {.lex_state = 112},
  [316] = {.lex_state = 112},
  [317] = {.lex_state = 112},
  [318] = {.lex_state = 112},
  [319] = {.lex_state = 112},
  [320] = {.lex_state = 112},
  [321] = {.lex_state = 112},
  [322] = {.lex_state = 112},
  [323] = {.lex_state = 112},
  [324] = {.lex_state = 112},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 112},
  [327] = {.lex_state = 112},
  [328] = {.lex_state = 112},
  [329] = {.lex_state = 112},
  [330] = {.lex_state = 112},
  [331] = {.lex_state = 112},
  [332] = {.lex_state = 112},
  [333] = {.lex_state = 112},
  [334] = {.lex_state = 112},
  [335] = {.lex_state = 2},
  [336] = {.lex_state = 2},
  [337] = {.lex_state = 112},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 112},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 2},
  [343] = {.lex_state = 112},
  [344] = {.lex_state = 2},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 112},
  [348] = {.lex_state = 112},
  [349] = {.lex_state = 2},
  [350] = {.lex_state = 112},
  [351] = {.lex_state = 112},
  [352] = {.lex_state = 112},
  [353] = {.lex_state = 112},
  [354] = {.lex_state = 2},
  [355] = {.lex_state = 112},
  [356] = {.lex_state = 112},
  [357] = {.lex_state = 112},
  [358] = {.lex_state = 112},
  [359] = {.lex_state = 112},
  [360] = {.lex_state = 112},
  [361] = {.lex_state = 112},
  [362] = {.lex_state = 9},
  [363] = {.lex_state = 112},
  [364] = {.lex_state = 112},
  [365] = {.lex_state = 112},
  [366] = {.lex_state = 112},
  [367] = {.lex_state = 2},
  [368] = {.lex_state = 112},
  [369] = {.lex_state = 112},
  [370] = {.lex_state = 112},
  [371] = {.lex_state = 112},
  [372] = {.lex_state = 112},
  [373] = {.lex_state = 112},
  [374] = {.lex_state = 112},
  [375] = {.lex_state = 112},
  [376] = {.lex_state = 112},
  [377] = {.lex_state = 2},
  [378] = {.lex_state = 112},
  [379] = {.lex_state = 112},
  [380] = {.lex_state = 112},
  [381] = {.lex_state = 9},
  [382] = {.lex_state = 112},
  [383] = {.lex_state = 112},
  [384] = {.lex_state = 112},
  [385] = {.lex_state = 112},
  [386] = {.lex_state = 112},
  [387] = {.lex_state = 112},
  [388] = {.lex_state = 112},
  [389] = {.lex_state = 112},
  [390] = {.lex_state = 112},
  [391] = {.lex_state = 112},
  [392] = {.lex_state = 112},
  [393] = {.lex_state = 112},
  [394] = {.lex_state = 112},
  [395] = {.lex_state = 112},
  [396] = {.lex_state = 112},
  [397] = {.lex_state = 112},
  [398] = {.lex_state = 112},
  [399] = {.lex_state = 112},
  [400] = {.lex_state = 112},
  [401] = {.lex_state = 112},
  [402] = {.lex_state = 112},
  [403] = {.lex_state = 112},
  [404] = {.lex_state = 112},
  [405] = {.lex_state = 112},
  [406] = {.lex_state = 112},
  [407] = {.lex_state = 112},
  [408] = {.lex_state = 112},
  [409] = {.lex_state = 112},
  [410] = {.lex_state = 112},
  [411] = {.lex_state = 112},
  [412] = {.lex_state = 112},
  [413] = {.lex_state = 112},
  [414] = {.lex_state = 9},
  [415] = {.lex_state = 112},
  [416] = {.lex_state = 112},
  [417] = {.lex_state = 112},
  [418] = {.lex_state = 112},
  [419] = {.lex_state = 112},
  [420] = {.lex_state = 112},
  [421] = {.lex_state = 112},
  [422] = {.lex_state = 112},
  [423] = {.lex_state = 112},
  [424] = {.lex_state = 9},
  [425] = {.lex_state = 112},
  [426] = {.lex_state = 112},
  [427] = {.lex_state = 112},
  [428] = {.lex_state = 112},
  [429] = {.lex_state = 112},
  [430] = {.lex_state = 112},
  [431] = {.lex_state = 112},
  [432] = {.lex_state = 112},
  [433] = {.lex_state = 112},
  [434] = {.lex_state = 112},
  [435] = {.lex_state = 112},
  [436] = {.lex_state = 112},
  [437] = {.lex_state = 112},
  [438] = {.lex_state = 112},
  [439] = {.lex_state = 112},
  [440] = {.lex_state = 112},
  [441] = {.lex_state = 112},
  [442] = {.lex_state = 112},
  [443] = {.lex_state = 112},
  [444] = {.lex_state = 9},
  [445] = {.lex_state = 112},
  [446] = {.lex_state = 112},
  [447] = {.lex_state = 112},
  [448] = {.lex_state = 112},
  [449] = {.lex_state = 112},
  [450] = {.lex_state = 112},
  [451] = {.lex_state = 9},
  [452] = {.lex_state = 112},
  [453] = {.lex_state = 112},
  [454] = {.lex_state = 112},
  [455] = {.lex_state = 112},
  [456] = {.lex_state = 112},
  [457] = {.lex_state = 112},
  [458] = {.lex_state = 112},
  [459] = {.lex_state = 112},
  [460] = {.lex_state = 112},
  [461] = {.lex_state = 112},
  [462] = {.lex_state = 112},
  [463] = {.lex_state = 112},
  [464] = {.lex_state = 112},
  [465] = {.lex_state = 112},
  [466] = {.lex_state = 112},
  [467] = {.lex_state = 112},
  [468] = {.lex_state = 112},
  [469] = {.lex_state = 112},
  [470] = {.lex_state = 112},
  [471] = {.lex_state = 112},
  [472] = {.lex_state = 112},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang_line] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [aux_sym_import_header_token1] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_typealias] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_sealed] = ACTIONS(1),
    [anon_sym_annotation] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_receiver] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_setparam] = ACTIONS(1),
    [anon_sym_delegate] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_reified] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_suspend] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym__backtick_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_kotlin_file] = STATE(473),
    [sym_package_header] = STATE(72),
    [sym_import_header] = STATE(46),
    [sym__top_level_object] = STATE(129),
    [sym__declaration] = STATE(402),
    [sym_type_alias] = STATE(402),
    [sym_modifiers] = STATE(474),
    [sym_modifier] = STATE(177),
    [sym_class_modifier] = STATE(202),
    [sym_annotation] = STATE(475),
    [sym_single_annotation] = STATE(206),
    [sym_multi_annotation] = STATE(206),
    [sym_annotation_use_site_target] = STATE(224),
    [aux_sym_kotlin_file_repeat1] = STATE(2),
    [aux_sym_kotlin_file_repeat2] = STATE(46),
    [aux_sym_kotlin_file_repeat3] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_shebang_line] = ACTIONS(7),
    [anon_sym_package] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_typealias] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_sealed] = ACTIONS(15),
    [anon_sym_annotation] = ACTIONS(15),
    [anon_sym_data] = ACTIONS(15),
    [anon_sym_inner] = ACTIONS(15),
    [anon_sym_value] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(9), 1,
      anon_sym_package,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_typealias,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym_package_header,
    STATE(177), 1,
      sym_modifier,
    STATE(180), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(62), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    STATE(125), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(15), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [64] = 18,
    ACTIONS(9), 1,
      anon_sym_package,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_typealias,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(45), 1,
      sym_package_header,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(62), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    STATE(125), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(15), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [128] = 18,
    ACTIONS(9), 1,
      anon_sym_package,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_typealias,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_package_header,
    STATE(177), 1,
      sym_modifier,
    STATE(180), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(64), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    STATE(128), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(15), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [192] = 22,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(196), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(331), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(333), 1,
      sym_type,
    STATE(343), 1,
      sym_parameter,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [262] = 22,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(318), 1,
      sym_type,
    STATE(319), 1,
      sym_parameter,
    STATE(348), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [332] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(348), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(319), 2,
      sym_type,
      sym_parameter,
  [400] = 21,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(196), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(331), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(343), 2,
      sym_type,
      sym_parameter,
  [468] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      anon_sym_GT,
    ACTIONS(55), 1,
      anon_sym_STAR,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [535] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(409), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [602] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [669] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      anon_sym_GT,
    STATE(35), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(430), 1,
      sym_type,
    STATE(431), 1,
      sym_type_projection,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [736] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      anon_sym_GT,
    STATE(20), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(430), 1,
      sym_type,
    STATE(431), 1,
      sym_type_projection,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [803] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(71), 1,
      anon_sym_GT,
    STATE(11), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(430), 1,
      sym_type,
    STATE(431), 1,
      sym_type_projection,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [870] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_GT,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(34), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [937] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(409), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1004] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_GT,
    ACTIONS(77), 1,
      anon_sym_LF,
    STATE(43), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(430), 1,
      sym_type,
    STATE(431), 1,
      sym_type_projection,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1071] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(409), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1138] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_GT,
    STATE(9), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(430), 1,
      sym_type,
    STATE(431), 1,
      sym_type_projection,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1205] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1272] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_GT,
    ACTIONS(85), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1339] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(89), 1,
      anon_sym_GT,
    STATE(31), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1406] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(53), 1,
      anon_sym_GT,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_LF,
    STATE(37), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1473] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(53), 1,
      anon_sym_GT,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(430), 1,
      sym_type,
    STATE(431), 1,
      sym_type_projection,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1540] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_GT,
    ACTIONS(95), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1607] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      anon_sym_GT,
    STATE(33), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1674] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      anon_sym_GT,
    STATE(36), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(430), 1,
      sym_type,
    STATE(431), 1,
      sym_type_projection,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1741] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(107), 1,
      anon_sym_GT,
    STATE(16), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1808] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1875] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym_GT,
    ACTIONS(109), 1,
      anon_sym_LF,
    STATE(44), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [1942] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(409), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2009] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(103), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2076] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(409), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2143] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(409), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2210] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2277] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2344] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(89), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(409), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2411] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(89), 1,
      anon_sym_GT,
    ACTIONS(113), 1,
      anon_sym_LF,
    STATE(29), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(430), 1,
      sym_type,
    STATE(431), 1,
      sym_type_projection,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2478] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(115), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2545] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(89), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2612] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      anon_sym_GT,
    STATE(32), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(430), 1,
      sym_type,
    STATE(431), 1,
      sym_type_projection,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2679] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(409), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2746] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2813] = 21,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(409), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [2880] = 14,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_import,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(64), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    STATE(128), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [2932] = 14,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_import,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(125), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(190), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [2984] = 20,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [3048] = 14,
    ACTIONS(121), 1,
      anon_sym_import,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(77), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    STATE(127), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [3100] = 20,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(328), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [3164] = 20,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(131), 1,
      anon_sym_LF,
    STATE(47), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(430), 1,
      sym_type,
    STATE(431), 1,
      sym_type_projection,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [3228] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(133), 1,
      anon_sym_LF,
    STATE(54), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(401), 2,
      sym_type,
      sym_parameter,
  [3290] = 20,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(305), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [3354] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(401), 2,
      sym_type,
      sym_parameter,
  [3416] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(392), 2,
      sym_type,
      sym_parameter,
  [3478] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      anon_sym_LF,
    STATE(59), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(401), 2,
      sym_type,
      sym_parameter,
  [3540] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(66), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(397), 2,
      sym_type,
      sym_parameter,
  [3602] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(400), 2,
      sym_type,
      sym_parameter,
  [3664] = 20,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(409), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [3728] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(392), 2,
      sym_type,
      sym_parameter,
  [3790] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      anon_sym_LF,
    STATE(76), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(392), 2,
      sym_type,
      sym_parameter,
  [3852] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 1,
      anon_sym_LF,
    STATE(75), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(401), 2,
      sym_type,
      sym_parameter,
  [3914] = 14,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_import,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(128), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(190), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [3966] = 20,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(52), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(307), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [4030] = 14,
    ACTIONS(121), 1,
      anon_sym_import,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(127), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(190), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [4082] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(392), 2,
      sym_type,
      sym_parameter,
  [4144] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(421), 2,
      sym_type,
      sym_parameter,
  [4206] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(392), 2,
      sym_type,
      sym_parameter,
  [4268] = 20,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_LF,
    STATE(49), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(315), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [4332] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(400), 2,
      sym_type,
      sym_parameter,
  [4394] = 20,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_STAR,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(294), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [4458] = 20,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(70), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(317), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [4522] = 14,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_import,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(62), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    STATE(125), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [4574] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(392), 2,
      sym_type,
      sym_parameter,
  [4636] = 20,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      anon_sym_LF,
    STATE(58), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(426), 1,
      sym_type_projection,
    STATE(430), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [4700] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(392), 2,
      sym_type,
      sym_parameter,
  [4762] = 19,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(400), 2,
      sym_type,
      sym_parameter,
  [4824] = 14,
    ACTIONS(121), 1,
      anon_sym_import,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(126), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(190), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [4876] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(169), 1,
      anon_sym_LF,
    STATE(80), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(392), 2,
      sym_type,
      sym_parameter,
  [4935] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(171), 1,
      anon_sym_LF,
    STATE(81), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(401), 2,
      sym_type,
      sym_parameter,
  [4994] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(400), 2,
      sym_type,
      sym_parameter,
  [5053] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(209), 1,
      sym_simple_identifier,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
    STATE(392), 2,
      sym_type,
      sym_parameter,
  [5112] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(173), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(456), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5170] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(175), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(390), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5228] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(177), 1,
      anon_sym_LF,
    STATE(118), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(434), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5286] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(179), 1,
      anon_sym_LF,
    STATE(113), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(428), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5344] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(443), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5402] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(420), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5460] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(428), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5518] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(356), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5576] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(181), 1,
      anon_sym_LF,
    STATE(86), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(404), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5634] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(183), 1,
      anon_sym_LF,
    STATE(96), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(329), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5692] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(329), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5750] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(185), 1,
      anon_sym_LF,
    STATE(107), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(395), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5808] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(187), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(299), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5866] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(189), 1,
      anon_sym_LF,
    STATE(110), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(339), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5924] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(299), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [5982] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(339), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6040] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(191), 1,
      anon_sym_LF,
    STATE(105), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(455), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6098] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(432), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6156] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(455), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6214] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(193), 1,
      anon_sym_LF,
    STATE(114), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(459), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6272] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(360), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6330] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(459), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6388] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(195), 1,
      anon_sym_LF,
    STATE(88), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(445), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6446] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(466), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6504] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(197), 1,
      anon_sym_LF,
    STATE(108), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(423), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6562] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(423), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6620] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(398), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6678] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(199), 1,
      anon_sym_LF,
    STATE(116), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(420), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6736] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(357), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6794] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(454), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6852] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(201), 1,
      anon_sym_LF,
    STATE(123), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(466), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6910] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(390), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [6968] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(468), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [7026] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(203), 1,
      anon_sym_LF,
    STATE(100), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(454), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [7084] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(417), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [7142] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(92), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(352), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [7200] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(425), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [7258] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(207), 1,
      anon_sym_LF,
    STATE(89), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(360), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [7316] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(209), 1,
      anon_sym_LF,
    STATE(103), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(462), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [7374] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(102), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(357), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [7432] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(213), 1,
      anon_sym_LF,
    STATE(99), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(425), 1,
      sym_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [7490] = 18,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(207), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(221), 1,
      sym_type_reference,
    STATE(280), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(462), 1,
      sym_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(145), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(309), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [7548] = 12,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      anon_sym_typealias,
    ACTIONS(223), 1,
      anon_sym_AT,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(124), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(220), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [7593] = 12,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(124), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [7638] = 12,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(124), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [7683] = 12,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(124), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [7728] = 12,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(124), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [7773] = 12,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_typealias,
    ACTIONS(127), 1,
      anon_sym_AT,
    STATE(177), 1,
      sym_modifier,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(474), 1,
      sym_modifiers,
    STATE(475), 1,
      sym_annotation,
    STATE(124), 2,
      sym__top_level_object,
      aux_sym_kotlin_file_repeat3,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(402), 2,
      sym__declaration,
      sym_type_alias,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [7818] = 2,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(230), 18,
      anon_sym_typealias,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [7842] = 5,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(236), 1,
      anon_sym_LT,
    STATE(164), 1,
      sym_type_arguments,
    STATE(371), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(234), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [7872] = 14,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(242), 1,
      anon_sym_GT,
    ACTIONS(244), 1,
      anon_sym_reified,
    STATE(134), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(311), 1,
      sym_simple_identifier,
    STATE(422), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [7919] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(250), 1,
      anon_sym_GT,
    STATE(199), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(323), 1,
      sym_simple_identifier,
    STATE(422), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [7966] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_GT,
    STATE(199), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(323), 1,
      sym_simple_identifier,
    STATE(442), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8013] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(254), 1,
      anon_sym_GT,
    STATE(199), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(323), 1,
      sym_simple_identifier,
    STATE(442), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8060] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(254), 1,
      anon_sym_GT,
    STATE(199), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(323), 1,
      sym_simple_identifier,
    STATE(422), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8107] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_LF,
    STATE(138), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(311), 1,
      sym_simple_identifier,
    STATE(447), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8154] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(242), 1,
      anon_sym_GT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(199), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(323), 1,
      sym_simple_identifier,
    STATE(422), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8201] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(258), 1,
      anon_sym_LF,
    STATE(143), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(311), 1,
      sym_simple_identifier,
    STATE(422), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8248] = 5,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_user_type_repeat1,
    STATE(449), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(263), 14,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [8277] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(268), 1,
      anon_sym_LF,
    STATE(136), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(311), 1,
      sym_simple_identifier,
    STATE(447), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8324] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(270), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(311), 1,
      sym_simple_identifier,
    STATE(422), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8371] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(242), 1,
      anon_sym_GT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(199), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(323), 1,
      sym_simple_identifier,
    STATE(442), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8418] = 14,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      anon_sym_GT,
    STATE(133), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(311), 1,
      sym_simple_identifier,
    STATE(447), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8465] = 16,
    ACTIONS(29), 1,
      anon_sym_annotation,
    ACTIONS(33), 1,
      anon_sym_suspend,
    ACTIONS(39), 1,
      anon_sym_dynamic,
    ACTIONS(41), 1,
      sym__non_backtick_identifier,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      sym__backtick_identifier,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(195), 1,
      sym_simple_user_type,
    STATE(203), 1,
      sym_parenthesized_type,
    STATE(220), 1,
      sym_user_type,
    STATE(227), 1,
      sym_type_reference,
    STATE(292), 1,
      sym_nullable_type,
    STATE(440), 1,
      sym_receiver_type,
    STATE(441), 1,
      sym_function_type_parameters,
    STATE(235), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
    STATE(320), 2,
      sym_function_type,
      sym_definitely_non_nullable_type,
  [8516] = 13,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(199), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(322), 1,
      sym_type_parameter,
    STATE(323), 1,
      sym_simple_identifier,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8560] = 13,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(199), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(323), 1,
      sym_simple_identifier,
    STATE(422), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8604] = 13,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(280), 1,
      anon_sym_LF,
    STATE(147), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(311), 1,
      sym_simple_identifier,
    STATE(447), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8648] = 3,
    ACTIONS(282), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(285), 15,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
      anon_sym_SEMI,
  [8672] = 6,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 1,
      anon_sym_LF,
    ACTIONS(294), 1,
      anon_sym_DOT,
    STATE(150), 1,
      aux_sym_identifier_repeat1,
    STATE(415), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(292), 12,
      anon_sym_import,
      aux_sym_import_header_token1,
      anon_sym_as,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_SEMI,
  [8702] = 13,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(297), 1,
      anon_sym_LF,
    STATE(153), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(311), 1,
      sym_simple_identifier,
    STATE(422), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8746] = 5,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym_identifier_repeat1,
    STATE(415), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(301), 12,
      anon_sym_import,
      aux_sym_import_header_token1,
      anon_sym_as,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_SEMI,
  [8774] = 13,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(199), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(323), 1,
      sym_simple_identifier,
    STATE(442), 1,
      sym_type_parameter,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8818] = 13,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(305), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(310), 1,
      sym_type_parameter,
    STATE(311), 1,
      sym_simple_identifier,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(169), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [8862] = 5,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(150), 1,
      aux_sym_identifier_repeat1,
    STATE(415), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(309), 12,
      anon_sym_import,
      aux_sym_import_header_token1,
      anon_sym_as,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_SEMI,
  [8890] = 5,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(315), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_user_type_repeat1,
    STATE(449), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(313), 12,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [8917] = 2,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(319), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [8938] = 2,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(323), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [8959] = 2,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [8980] = 2,
    ACTIONS(329), 1,
      anon_sym_LF,
    ACTIONS(331), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [9001] = 8,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(339), 1,
      aux_sym_import_header_token1,
    ACTIONS(341), 1,
      anon_sym_as,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    STATE(182), 1,
      sym_import_alias,
    STATE(210), 1,
      sym__semi,
    ACTIONS(337), 9,
      anon_sym_import,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9034] = 2,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [9055] = 2,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(351), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [9076] = 2,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(355), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [9097] = 5,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(357), 1,
      anon_sym_LF,
    STATE(156), 1,
      aux_sym_user_type_repeat1,
    STATE(449), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(359), 12,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9124] = 2,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [9145] = 2,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(263), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [9166] = 2,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(369), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [9187] = 12,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_reified,
    ACTIONS(371), 1,
      anon_sym_LF,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    STATE(324), 1,
      sym_simple_identifier,
    STATE(325), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(246), 2,
      anon_sym_in,
      anon_sym_out,
    STATE(179), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [9228] = 2,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 15,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [9249] = 2,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(230), 13,
      anon_sym_import,
      aux_sym_import_header_token1,
      anon_sym_as,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9269] = 8,
    ACTIONS(41), 1,
      sym__non_backtick_identifier,
    ACTIONS(278), 1,
      sym__backtick_identifier,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(165), 1,
      sym_simple_user_type,
    STATE(211), 1,
      sym_user_type,
    STATE(225), 1,
      sym_unescaped_annotation,
    ACTIONS(379), 8,
      anon_sym_field,
      anon_sym_property,
      anon_sym_get,
      anon_sym_set,
      anon_sym_receiver,
      anon_sym_param,
      anon_sym_setparam,
      anon_sym_delegate,
  [9301] = 2,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(383), 13,
      anon_sym_import,
      aux_sym_import_header_token1,
      anon_sym_as,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9321] = 7,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(385), 1,
      anon_sym_typealias,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(176), 3,
      sym_modifier,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [9351] = 8,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym__non_backtick_identifier,
    ACTIONS(391), 1,
      sym__backtick_identifier,
    STATE(191), 1,
      sym_simple_identifier,
    STATE(201), 1,
      sym_simple_user_type,
    STATE(268), 1,
      sym_unescaped_annotation,
    STATE(276), 1,
      sym_user_type,
    ACTIONS(379), 8,
      anon_sym_field,
      anon_sym_property,
      anon_sym_get,
      anon_sym_set,
      anon_sym_receiver,
      anon_sym_param,
      anon_sym_setparam,
      anon_sym_delegate,
  [9383] = 7,
    ACTIONS(393), 1,
      anon_sym_typealias,
    ACTIONS(398), 1,
      anon_sym_AT,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(176), 3,
      sym_modifier,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(395), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [9413] = 7,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(401), 1,
      anon_sym_typealias,
    STATE(202), 1,
      sym_class_modifier,
    STATE(224), 1,
      sym_annotation_use_site_target,
    STATE(206), 2,
      sym_single_annotation,
      sym_multi_annotation,
    STATE(174), 3,
      sym_modifier,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(125), 6,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
  [9443] = 2,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(292), 13,
      anon_sym_import,
      aux_sym_import_header_token1,
      anon_sym_as,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9463] = 10,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      anon_sym_AT,
    ACTIONS(408), 1,
      anon_sym_reified,
    STATE(214), 1,
      sym_annotation_use_site_target,
    STATE(241), 1,
      sym_variance_modifier,
    STATE(275), 1,
      sym_annotation,
    ACTIONS(411), 2,
      anon_sym_in,
      anon_sym_out,
    ACTIONS(414), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(179), 2,
      sym_type_parameter_modifier,
      aux_sym_type_parameter_repeat1,
    STATE(244), 2,
      sym_single_annotation,
      sym_multi_annotation,
  [9498] = 4,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 1,
      anon_sym_LF,
    STATE(180), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(285), 10,
      anon_sym_package,
      anon_sym_import,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9520] = 5,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    STATE(197), 1,
      sym__semi,
    ACTIONS(423), 9,
      anon_sym_import,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9544] = 5,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    STATE(194), 1,
      sym__semi,
    ACTIONS(427), 9,
      anon_sym_import,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9568] = 3,
    ACTIONS(429), 1,
      anon_sym_LF,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(285), 10,
      anon_sym_annotation,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_suspend,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_dynamic,
      anon_sym_STAR,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [9587] = 5,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
    ACTIONS(434), 1,
      anon_sym_LF,
    ACTIONS(438), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      aux_sym__semis_repeat1,
    ACTIONS(436), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9610] = 4,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(442), 9,
      anon_sym_import,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9631] = 5,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(451), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      aux_sym__semis_repeat1,
    ACTIONS(449), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9654] = 2,
    ACTIONS(454), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(456), 10,
      anon_sym_import,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
      anon_sym_SEMI,
  [9671] = 5,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 1,
      anon_sym_LF,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    STATE(184), 1,
      aux_sym__semis_repeat1,
    ACTIONS(462), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9694] = 4,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
    ACTIONS(468), 1,
      anon_sym_LF,
    STATE(185), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(470), 9,
      anon_sym_import,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9715] = 3,
    ACTIONS(474), 1,
      anon_sym_import,
    STATE(190), 2,
      sym_import_header,
      aux_sym_kotlin_file_repeat2,
    ACTIONS(472), 9,
      ts_builtin_sym_end,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9734] = 5,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(477), 1,
      anon_sym_LT,
    STATE(243), 1,
      sym_type_arguments,
    STATE(372), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(234), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [9756] = 4,
    ACTIONS(311), 1,
      anon_sym_LF,
    STATE(140), 1,
      aux_sym_user_type_repeat1,
    STATE(449), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(313), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [9775] = 3,
    ACTIONS(479), 1,
      anon_sym_LF,
    STATE(204), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(481), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9792] = 1,
    ACTIONS(483), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9805] = 4,
    ACTIONS(357), 1,
      anon_sym_LF,
    STATE(192), 1,
      aux_sym_user_type_repeat1,
    STATE(449), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(359), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [9824] = 5,
    ACTIONS(429), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(285), 6,
      anon_sym_annotation,
      anon_sym_suspend,
      anon_sym_LPAREN,
      anon_sym_dynamic,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [9845] = 1,
    ACTIONS(491), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9858] = 5,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(496), 1,
      anon_sym_DOT,
    STATE(198), 1,
      aux_sym_user_type_repeat1,
    STATE(393), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(263), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [9879] = 5,
    ACTIONS(499), 1,
      anon_sym_LF,
    STATE(218), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(324), 1,
      sym_simple_identifier,
    ACTIONS(502), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    ACTIONS(285), 5,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
  [9900] = 3,
    ACTIONS(479), 1,
      anon_sym_LF,
    STATE(204), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(505), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9917] = 5,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      anon_sym_DOT,
    STATE(205), 1,
      aux_sym_user_type_repeat1,
    STATE(393), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(359), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [9938] = 3,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(193), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(511), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9955] = 6,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(517), 1,
      anon_sym_QMARK,
    ACTIONS(519), 1,
      anon_sym_AMP,
    STATE(208), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(254), 1,
      aux_sym_nullable_type_repeat1,
    ACTIONS(515), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [9978] = 3,
    ACTIONS(521), 1,
      anon_sym_LF,
    STATE(204), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(285), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [9995] = 5,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      anon_sym_DOT,
    STATE(198), 1,
      aux_sym_user_type_repeat1,
    STATE(393), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(313), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10016] = 3,
    ACTIONS(524), 1,
      anon_sym_LF,
    STATE(200), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(526), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [10033] = 6,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(517), 1,
      anon_sym_QMARK,
    ACTIONS(519), 1,
      anon_sym_AMP,
    STATE(208), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(254), 1,
      aux_sym_nullable_type_repeat1,
    ACTIONS(515), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10056] = 6,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(532), 1,
      anon_sym_QMARK,
    ACTIONS(534), 1,
      anon_sym_AMP,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(250), 1,
      aux_sym_nullable_type_repeat1,
    ACTIONS(530), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10079] = 6,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(536), 1,
      anon_sym_COLON,
    STATE(164), 1,
      sym_type_arguments,
    STATE(332), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(234), 5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
  [10102] = 1,
    ACTIONS(425), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [10115] = 2,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(540), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [10129] = 7,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(165), 1,
      sym_simple_user_type,
    STATE(222), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(353), 2,
      sym_parenthesized_type,
      sym_user_type,
  [10153] = 8,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(548), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(191), 1,
      sym_simple_identifier,
    STATE(201), 1,
      sym_simple_user_type,
    STATE(273), 1,
      sym_unescaped_annotation,
    STATE(276), 1,
      sym_user_type,
    ACTIONS(389), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10179] = 8,
    ACTIONS(550), 1,
      anon_sym_LF,
    ACTIONS(552), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_simple_identifier,
    STATE(201), 1,
      sym_simple_user_type,
    STATE(213), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(268), 1,
      sym_unescaped_annotation,
    STATE(276), 1,
      sym_user_type,
    ACTIONS(389), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10205] = 2,
    ACTIONS(554), 1,
      anon_sym_LF,
    ACTIONS(556), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [10219] = 5,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(532), 1,
      anon_sym_QMARK,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(250), 1,
      aux_sym_nullable_type_repeat1,
    ACTIONS(530), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10239] = 3,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(562), 1,
      anon_sym_DASH_GT,
    ACTIONS(560), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [10255] = 3,
    ACTIONS(499), 1,
      anon_sym_LF,
    STATE(218), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(285), 7,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10271] = 2,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [10285] = 4,
    ACTIONS(519), 1,
      anon_sym_AMP,
    ACTIONS(568), 1,
      anon_sym_LF,
    STATE(416), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(570), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_SEMI,
  [10303] = 5,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(517), 1,
      anon_sym_QMARK,
    STATE(216), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(254), 1,
      aux_sym_nullable_type_repeat1,
    ACTIONS(515), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10323] = 7,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(165), 1,
      sym_simple_user_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(327), 2,
      sym_parenthesized_type,
      sym_user_type,
  [10347] = 3,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(576), 1,
      anon_sym_DASH_GT,
    ACTIONS(574), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [10363] = 8,
    ACTIONS(578), 1,
      anon_sym_LF,
    ACTIONS(580), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(165), 1,
      sym_simple_user_type,
    STATE(211), 1,
      sym_user_type,
    STATE(225), 1,
      sym_unescaped_annotation,
    STATE(226), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10389] = 2,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [10403] = 8,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(165), 1,
      sym_simple_user_type,
    STATE(211), 1,
      sym_user_type,
    STATE(230), 1,
      sym_unescaped_annotation,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10429] = 5,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(517), 1,
      anon_sym_QMARK,
    STATE(216), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(254), 1,
      aux_sym_nullable_type_repeat1,
    ACTIONS(515), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10449] = 2,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(230), 8,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10463] = 3,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(592), 1,
      anon_sym_DASH_GT,
    ACTIONS(590), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_SEMI,
  [10479] = 2,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(596), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [10493] = 2,
    ACTIONS(598), 1,
      anon_sym_LF,
    ACTIONS(600), 8,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [10507] = 1,
    ACTIONS(602), 9,
      ts_builtin_sym_end,
      anon_sym_typealias,
      anon_sym_enum,
      anon_sym_sealed,
      anon_sym_annotation,
      anon_sym_data,
      anon_sym_inner,
      anon_sym_value,
      anon_sym_AT,
  [10519] = 7,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(165), 1,
      sym_simple_user_type,
    STATE(234), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(327), 2,
      sym_parenthesized_type,
      sym_user_type,
  [10543] = 7,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(165), 1,
      sym_simple_user_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(303), 2,
      sym_parenthesized_type,
      sym_user_type,
  [10567] = 5,
    ACTIONS(606), 1,
      anon_sym_annotation,
    ACTIONS(609), 1,
      anon_sym_suspend,
    ACTIONS(612), 2,
      anon_sym_LPAREN,
      sym__backtick_identifier,
    ACTIONS(614), 2,
      anon_sym_dynamic,
      sym__non_backtick_identifier,
    STATE(235), 2,
      sym_type_modifier,
      aux_sym_type_repeat1,
  [10586] = 2,
    ACTIONS(329), 1,
      anon_sym_LF,
    ACTIONS(331), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10599] = 5,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(616), 1,
      anon_sym_LT,
    STATE(354), 1,
      sym_type_arguments,
    STATE(380), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(234), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10618] = 6,
    ACTIONS(618), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(265), 1,
      sym_simple_user_type,
    STATE(451), 1,
      sym_user_type,
    ACTIONS(620), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(242), 2,
      sym_unescaped_annotation,
      aux_sym_multi_annotation_repeat1,
  [10639] = 3,
    ACTIONS(622), 1,
      anon_sym_LF,
    STATE(248), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(624), 6,
      anon_sym_annotation,
      anon_sym_suspend,
      anon_sym_LPAREN,
      anon_sym_dynamic,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10654] = 2,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(263), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10667] = 3,
    ACTIONS(626), 1,
      anon_sym_LF,
    STATE(253), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(628), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10682] = 6,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(265), 1,
      sym_simple_user_type,
    STATE(451), 1,
      sym_user_type,
    ACTIONS(632), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(242), 2,
      sym_unescaped_annotation,
      aux_sym_multi_annotation_repeat1,
  [10703] = 2,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(355), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10716] = 3,
    ACTIONS(635), 1,
      anon_sym_LF,
    STATE(252), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(526), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10731] = 6,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(265), 1,
      sym_simple_user_type,
    STATE(451), 1,
      sym_user_type,
    ACTIONS(620), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(242), 2,
      sym_unescaped_annotation,
      aux_sym_multi_annotation_repeat1,
  [10752] = 2,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(319), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10765] = 6,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(265), 1,
      sym_simple_user_type,
    STATE(451), 1,
      sym_user_type,
    ACTIONS(620), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(242), 2,
      sym_unescaped_annotation,
      aux_sym_multi_annotation_repeat1,
  [10786] = 3,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(183), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(641), 6,
      anon_sym_annotation,
      anon_sym_suspend,
      anon_sym_LPAREN,
      anon_sym_dynamic,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10801] = 6,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(265), 1,
      sym_simple_user_type,
    STATE(451), 1,
      sym_user_type,
    ACTIONS(620), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(242), 2,
      sym_unescaped_annotation,
      aux_sym_multi_annotation_repeat1,
  [10822] = 4,
    ACTIONS(645), 1,
      anon_sym_LF,
    ACTIONS(649), 1,
      anon_sym_QMARK,
    STATE(251), 1,
      aux_sym_nullable_type_repeat1,
    ACTIONS(647), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10839] = 4,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(655), 1,
      anon_sym_QMARK,
    STATE(251), 1,
      aux_sym_nullable_type_repeat1,
    ACTIONS(653), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10856] = 3,
    ACTIONS(658), 1,
      anon_sym_LF,
    STATE(218), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(505), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10871] = 3,
    ACTIONS(660), 1,
      anon_sym_LF,
    STATE(218), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(662), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10886] = 4,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(649), 1,
      anon_sym_QMARK,
    STATE(251), 1,
      aux_sym_nullable_type_repeat1,
    ACTIONS(530), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [10903] = 2,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10916] = 2,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(351), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10929] = 2,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10942] = 2,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10955] = 2,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(369), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10968] = 2,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(323), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10981] = 2,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 7,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [10994] = 5,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(265), 1,
      sym_simple_user_type,
    STATE(451), 1,
      sym_user_type,
    ACTIONS(620), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(245), 2,
      sym_unescaped_annotation,
      aux_sym_multi_annotation_repeat1,
  [11012] = 5,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(265), 1,
      sym_simple_user_type,
    STATE(451), 1,
      sym_user_type,
    ACTIONS(620), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(247), 2,
      sym_unescaped_annotation,
      aux_sym_multi_annotation_repeat1,
  [11030] = 5,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(265), 1,
      sym_simple_user_type,
    STATE(451), 1,
      sym_user_type,
    ACTIONS(620), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(249), 2,
      sym_unescaped_annotation,
      aux_sym_multi_annotation_repeat1,
  [11048] = 5,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      anon_sym_DOT,
    STATE(272), 1,
      aux_sym_user_type_repeat1,
    STATE(403), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(359), 3,
      anon_sym_RBRACK,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11066] = 2,
    ACTIONS(598), 1,
      anon_sym_LF,
    ACTIONS(600), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11078] = 5,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(265), 1,
      sym_simple_user_type,
    STATE(451), 1,
      sym_user_type,
    ACTIONS(620), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
    STATE(238), 2,
      sym_unescaped_annotation,
      aux_sym_multi_annotation_repeat1,
  [11096] = 2,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11108] = 5,
    ACTIONS(668), 1,
      anon_sym_LF,
    ACTIONS(671), 1,
      anon_sym_DOT,
    STATE(269), 1,
      aux_sym_user_type_repeat1,
    STATE(403), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(263), 3,
      anon_sym_RBRACK,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11126] = 2,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11138] = 2,
    ACTIONS(568), 1,
      anon_sym_LF,
    ACTIONS(570), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_SEMI,
  [11150] = 5,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      anon_sym_DOT,
    STATE(269), 1,
      aux_sym_user_type_repeat1,
    STATE(403), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(313), 3,
      anon_sym_RBRACK,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11168] = 2,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(596), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11180] = 2,
    ACTIONS(674), 1,
      anon_sym_LF,
    ACTIONS(676), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11192] = 2,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(628), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11204] = 2,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(540), 6,
      anon_sym_AT,
      anon_sym_reified,
      anon_sym_in,
      anon_sym_out,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11216] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(162), 1,
      sym_simple_user_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11233] = 5,
    ACTIONS(678), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(162), 1,
      sym_simple_user_type,
    STATE(282), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11250] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(342), 1,
      sym_simple_user_type,
    ACTIONS(680), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11267] = 3,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(686), 1,
      anon_sym_DOT,
    ACTIONS(684), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11280] = 2,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(230), 5,
      anon_sym_RBRACK,
      anon_sym_LT,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11291] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(170), 1,
      sym_simple_user_type,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11308] = 2,
    ACTIONS(688), 2,
      anon_sym_LPAREN,
      sym__backtick_identifier,
    ACTIONS(624), 4,
      anon_sym_annotation,
      anon_sym_suspend,
      anon_sym_dynamic,
      sym__non_backtick_identifier,
  [11319] = 5,
    ACTIONS(690), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(279), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(345), 1,
      sym_simple_user_type,
    ACTIONS(680), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11336] = 5,
    ACTIONS(692), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_simple_identifier,
    STATE(240), 1,
      sym_simple_user_type,
    STATE(286), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(389), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11353] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(191), 1,
      sym_simple_identifier,
    STATE(255), 1,
      sym_simple_user_type,
    ACTIONS(389), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11370] = 5,
    ACTIONS(694), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_simple_identifier,
    STATE(255), 1,
      sym_simple_user_type,
    STATE(289), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(389), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11387] = 5,
    ACTIONS(696), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_simple_identifier,
    STATE(167), 1,
      sym_simple_user_type,
    STATE(277), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11404] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(191), 1,
      sym_simple_identifier,
    STATE(257), 1,
      sym_simple_user_type,
    ACTIONS(389), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11421] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(345), 1,
      sym_simple_user_type,
    ACTIONS(680), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11438] = 5,
    ACTIONS(698), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym_simple_identifier,
    STATE(290), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(349), 1,
      sym_simple_user_type,
    ACTIONS(680), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11455] = 3,
    ACTIONS(686), 1,
      anon_sym_DOT,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(702), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11468] = 2,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11478] = 5,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_type_arguments_repeat1,
    STATE(376), 1,
      aux_sym_kotlin_file_repeat1,
  [11494] = 4,
    ACTIONS(708), 1,
      anon_sym_LF,
    STATE(296), 1,
      sym_simple_identifier,
    STATE(297), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11508] = 5,
    ACTIONS(710), 1,
      anon_sym_LF,
    ACTIONS(712), 1,
      anon_sym_EQ,
    ACTIONS(714), 1,
      anon_sym_LT,
    STATE(302), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(427), 1,
      sym_type_parameters,
  [11524] = 4,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(304), 1,
      sym_simple_identifier,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11538] = 4,
    ACTIONS(716), 1,
      anon_sym_LF,
    STATE(304), 1,
      sym_simple_identifier,
    STATE(308), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11552] = 2,
    ACTIONS(718), 1,
      anon_sym_LF,
    ACTIONS(720), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11562] = 2,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(590), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11572] = 5,
    ACTIONS(53), 1,
      anon_sym_GT,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_type_arguments_repeat1,
    STATE(364), 1,
      aux_sym_kotlin_file_repeat1,
  [11588] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(714), 1,
      anon_sym_LT,
    ACTIONS(726), 1,
      anon_sym_EQ,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(435), 1,
      sym_type_parameters,
  [11604] = 2,
    ACTIONS(728), 1,
      anon_sym_LF,
    ACTIONS(730), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11614] = 5,
    ACTIONS(714), 1,
      anon_sym_LT,
    ACTIONS(726), 1,
      anon_sym_EQ,
    ACTIONS(732), 1,
      anon_sym_LF,
    STATE(313), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(435), 1,
      sym_type_parameters,
  [11630] = 5,
    ACTIONS(83), 1,
      anon_sym_GT,
    ACTIONS(734), 1,
      anon_sym_LF,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_type_arguments_repeat1,
    STATE(365), 1,
      aux_sym_kotlin_file_repeat1,
  [11646] = 5,
    ACTIONS(83), 1,
      anon_sym_GT,
    ACTIONS(734), 1,
      anon_sym_LF,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_type_arguments_repeat1,
    STATE(365), 1,
      aux_sym_kotlin_file_repeat1,
  [11662] = 5,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    ACTIONS(742), 1,
      anon_sym_GT,
    STATE(306), 1,
      aux_sym_type_arguments_repeat1,
    STATE(369), 1,
      aux_sym_kotlin_file_repeat1,
  [11678] = 4,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(316), 1,
      sym_simple_identifier,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11692] = 2,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11702] = 5,
    ACTIONS(744), 1,
      anon_sym_LF,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_GT,
    STATE(321), 1,
      aux_sym_type_parameters_repeat1,
    STATE(388), 1,
      aux_sym_kotlin_file_repeat1,
  [11718] = 4,
    ACTIONS(750), 1,
      anon_sym_LF,
    ACTIONS(752), 1,
      anon_sym_COLON,
    STATE(411), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(754), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11732] = 5,
    ACTIONS(59), 1,
      anon_sym_GT,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_type_arguments_repeat1,
    STATE(373), 1,
      aux_sym_kotlin_file_repeat1,
  [11748] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(714), 1,
      anon_sym_LT,
    ACTIONS(760), 1,
      anon_sym_EQ,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(406), 1,
      sym_type_parameters,
  [11764] = 5,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_type_arguments_repeat1,
    STATE(376), 1,
      aux_sym_kotlin_file_repeat1,
  [11780] = 5,
    ACTIONS(762), 1,
      anon_sym_LF,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_GT,
    STATE(326), 1,
      aux_sym_type_arguments_repeat1,
    STATE(384), 1,
      aux_sym_kotlin_file_repeat1,
  [11796] = 5,
    ACTIONS(714), 1,
      anon_sym_LT,
    ACTIONS(760), 1,
      anon_sym_EQ,
    ACTIONS(768), 1,
      anon_sym_LF,
    STATE(330), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(406), 1,
      sym_type_parameters,
  [11812] = 5,
    ACTIONS(770), 1,
      anon_sym_LF,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_GT,
    STATE(314), 1,
      aux_sym_type_arguments_repeat1,
    STATE(378), 1,
      aux_sym_kotlin_file_repeat1,
  [11828] = 5,
    ACTIONS(776), 1,
      anon_sym_LF,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(361), 1,
      aux_sym_kotlin_file_repeat1,
  [11844] = 5,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_LF,
    STATE(331), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(386), 1,
      aux_sym_kotlin_file_repeat1,
  [11860] = 2,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(702), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11870] = 5,
    ACTIONS(274), 1,
      anon_sym_GT,
    ACTIONS(784), 1,
      anon_sym_LF,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_type_parameters_repeat1,
    STATE(370), 1,
      aux_sym_kotlin_file_repeat1,
  [11886] = 5,
    ACTIONS(274), 1,
      anon_sym_GT,
    ACTIONS(784), 1,
      anon_sym_LF,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_type_parameters_repeat1,
    STATE(370), 1,
      aux_sym_kotlin_file_repeat1,
  [11902] = 4,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(791), 1,
      anon_sym_COLON,
    STATE(419), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11916] = 4,
    ACTIONS(796), 1,
      anon_sym_LF,
    ACTIONS(798), 1,
      anon_sym_COLON,
    STATE(437), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(800), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11930] = 4,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(358), 1,
      sym_simple_identifier,
    ACTIONS(41), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [11944] = 5,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(802), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_type_arguments_repeat1,
    STATE(379), 1,
      aux_sym_kotlin_file_repeat1,
  [11960] = 2,
    ACTIONS(806), 1,
      anon_sym_LF,
    ACTIONS(808), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11970] = 5,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(802), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_type_arguments_repeat1,
    STATE(379), 1,
      aux_sym_kotlin_file_repeat1,
  [11986] = 2,
    ACTIONS(810), 1,
      anon_sym_LF,
    ACTIONS(812), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [11996] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(714), 1,
      anon_sym_LT,
    ACTIONS(814), 1,
      anon_sym_EQ,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(412), 1,
      sym_type_parameters,
  [12012] = 5,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(816), 1,
      anon_sym_LF,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(387), 1,
      aux_sym_kotlin_file_repeat1,
  [12028] = 5,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(820), 1,
      anon_sym_COLON,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(157), 1,
      sym_type_arguments,
  [12044] = 5,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_LF,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    STATE(334), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(383), 1,
      aux_sym_kotlin_file_repeat1,
  [12060] = 5,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(826), 1,
      anon_sym_LF,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(363), 1,
      aux_sym_kotlin_file_repeat1,
  [12076] = 2,
    ACTIONS(329), 1,
      anon_sym_LF,
    ACTIONS(331), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12086] = 2,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12096] = 2,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(560), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12106] = 2,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(323), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12116] = 2,
    ACTIONS(830), 1,
      anon_sym_LF,
    ACTIONS(832), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12126] = 2,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(369), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12136] = 2,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12146] = 2,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12156] = 5,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(816), 1,
      anon_sym_LF,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(387), 1,
      aux_sym_kotlin_file_repeat1,
  [12172] = 2,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(351), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12182] = 2,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12192] = 2,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(319), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12202] = 5,
    ACTIONS(834), 1,
      anon_sym_LF,
    ACTIONS(837), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(399), 1,
      aux_sym_kotlin_file_repeat1,
  [12218] = 5,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_LF,
    STATE(347), 1,
      aux_sym_function_type_parameters_repeat1,
    STATE(386), 1,
      aux_sym_kotlin_file_repeat1,
  [12234] = 2,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(263), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12244] = 5,
    ACTIONS(103), 1,
      anon_sym_GT,
    ACTIONS(842), 1,
      anon_sym_LF,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_type_arguments_repeat1,
    STATE(368), 1,
      aux_sym_kotlin_file_repeat1,
  [12260] = 5,
    ACTIONS(846), 1,
      anon_sym_LF,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_GT,
    STATE(351), 1,
      aux_sym_type_arguments_repeat1,
    STATE(413), 1,
      aux_sym_kotlin_file_repeat1,
  [12276] = 2,
    ACTIONS(854), 1,
      anon_sym_LF,
    ACTIONS(856), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12286] = 2,
    ACTIONS(858), 1,
      anon_sym_LF,
    ACTIONS(860), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12296] = 2,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(355), 4,
      anon_sym_RBRACK,
      anon_sym_DOT,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12306] = 5,
    ACTIONS(862), 1,
      anon_sym_LF,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_GT,
    STATE(355), 1,
      aux_sym_type_parameters_repeat1,
    STATE(429), 1,
      aux_sym_kotlin_file_repeat1,
  [12322] = 2,
    ACTIONS(870), 1,
      anon_sym_LF,
    ACTIONS(872), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12332] = 2,
    ACTIONS(874), 1,
      anon_sym_LF,
    ACTIONS(876), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12342] = 4,
    ACTIONS(878), 1,
      anon_sym_LF,
    ACTIONS(880), 1,
      anon_sym_COLON,
    STATE(391), 1,
      aux_sym_kotlin_file_repeat1,
    ACTIONS(882), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12356] = 5,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(884), 1,
      anon_sym_LF,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_type_parameters_repeat1,
    STATE(366), 1,
      aux_sym_kotlin_file_repeat1,
  [12372] = 2,
    ACTIONS(888), 1,
      anon_sym_LF,
    ACTIONS(890), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [12382] = 4,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12395] = 3,
    STATE(152), 1,
      sym_simple_identifier,
    STATE(161), 1,
      sym_identifier,
    ACTIONS(894), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12406] = 4,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12419] = 4,
    ACTIONS(89), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12432] = 4,
    ACTIONS(53), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12445] = 4,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12458] = 2,
    ACTIONS(904), 1,
      anon_sym_LF,
    ACTIONS(906), 3,
      anon_sym_LBRACK,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12467] = 4,
    ACTIONS(63), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12480] = 4,
    ACTIONS(83), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(910), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12493] = 4,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12506] = 4,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(157), 1,
      sym_type_arguments,
  [12519] = 4,
    ACTIONS(477), 1,
      anon_sym_LT,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(246), 1,
      sym_type_arguments,
  [12532] = 4,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12545] = 4,
    ACTIONS(916), 1,
      anon_sym_LF,
    ACTIONS(918), 1,
      anon_sym_LPAREN,
    STATE(385), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(408), 1,
      sym_function_type_parameters,
  [12558] = 4,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(918), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(408), 1,
      sym_function_type_parameters,
  [12571] = 4,
    ACTIONS(59), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12584] = 2,
    ACTIONS(922), 1,
      anon_sym_LF,
    ACTIONS(924), 3,
      anon_sym_LBRACK,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12593] = 4,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12606] = 4,
    ACTIONS(103), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12619] = 4,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(616), 1,
      anon_sym_LT,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(346), 1,
      sym_type_arguments,
  [12632] = 3,
    STATE(152), 1,
      sym_simple_identifier,
    STATE(181), 1,
      sym_identifier,
    ACTIONS(894), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12643] = 4,
    ACTIONS(918), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      anon_sym_LF,
    STATE(375), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(439), 1,
      sym_function_type_parameters,
  [12656] = 4,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12669] = 4,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12682] = 4,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(918), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
    STATE(448), 1,
      sym_function_type_parameters,
  [12695] = 4,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12708] = 4,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12721] = 4,
    ACTIONS(274), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12734] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(940), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12744] = 2,
    ACTIONS(942), 1,
      anon_sym_LF,
    ACTIONS(944), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12752] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(946), 1,
      anon_sym_COLON,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12762] = 2,
    ACTIONS(948), 1,
      anon_sym_LF,
    ACTIONS(950), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12770] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(952), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12780] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(954), 1,
      anon_sym_DASH_GT,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12790] = 2,
    ACTIONS(956), 1,
      anon_sym_LF,
    ACTIONS(958), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12798] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12808] = 2,
    ACTIONS(962), 1,
      anon_sym_LF,
    ACTIONS(965), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12816] = 2,
    ACTIONS(968), 1,
      anon_sym_LF,
    ACTIONS(970), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12824] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12834] = 2,
    ACTIONS(974), 1,
      anon_sym_LF,
    ACTIONS(976), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12842] = 2,
    ACTIONS(978), 1,
      anon_sym_LF,
    ACTIONS(840), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12850] = 3,
    ACTIONS(980), 1,
      anon_sym_LF,
    ACTIONS(982), 1,
      anon_sym_SEMI,
    STATE(232), 1,
      sym__semis,
  [12860] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(984), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12870] = 3,
    ACTIONS(986), 1,
      anon_sym_LF,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_kotlin_file_repeat1,
  [12880] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(990), 1,
      anon_sym_DASH_GT,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12890] = 3,
    ACTIONS(814), 1,
      anon_sym_EQ,
    ACTIONS(992), 1,
      anon_sym_LF,
    STATE(446), 1,
      aux_sym_kotlin_file_repeat1,
  [12900] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(814), 1,
      anon_sym_EQ,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12910] = 3,
    ACTIONS(990), 1,
      anon_sym_DASH_GT,
    ACTIONS(994), 1,
      anon_sym_LF,
    STATE(452), 1,
      aux_sym_kotlin_file_repeat1,
  [12920] = 2,
    ACTIONS(996), 1,
      anon_sym_LF,
    ACTIONS(998), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [12928] = 3,
    ACTIONS(1000), 1,
      anon_sym_LF,
    ACTIONS(1002), 1,
      anon_sym_COLON,
    STATE(450), 1,
      aux_sym_kotlin_file_repeat1,
  [12938] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(798), 1,
      anon_sym_COLON,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12948] = 3,
    ACTIONS(1004), 1,
      anon_sym_LF,
    ACTIONS(1006), 1,
      anon_sym_EQ,
    STATE(438), 1,
      aux_sym_kotlin_file_repeat1,
  [12958] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12968] = 2,
    STATE(178), 1,
      sym_simple_identifier,
    ACTIONS(894), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [12976] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1010), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12986] = 3,
    ACTIONS(534), 1,
      anon_sym_AMP,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [12996] = 2,
    ACTIONS(1012), 1,
      anon_sym_LF,
    ACTIONS(1014), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13004] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1016), 1,
      anon_sym_DASH_GT,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13014] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1018), 1,
      anon_sym_COLON,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13024] = 2,
    ACTIONS(1020), 1,
      anon_sym_LF,
    ACTIONS(1022), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13032] = 2,
    ACTIONS(1024), 1,
      anon_sym_LF,
    ACTIONS(1027), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13040] = 2,
    ACTIONS(1030), 1,
      anon_sym_LF,
    ACTIONS(1032), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13048] = 2,
    ACTIONS(1034), 1,
      anon_sym_LF,
    ACTIONS(1036), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13056] = 2,
    STATE(187), 1,
      sym_simple_identifier,
    ACTIONS(894), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [13064] = 2,
    ACTIONS(1038), 1,
      anon_sym_LF,
    ACTIONS(1041), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13072] = 2,
    ACTIONS(1044), 1,
      anon_sym_LF,
    ACTIONS(1046), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13080] = 3,
    ACTIONS(726), 1,
      anon_sym_EQ,
    ACTIONS(1048), 1,
      anon_sym_LF,
    STATE(436), 1,
      aux_sym_kotlin_file_repeat1,
  [13090] = 2,
    ACTIONS(1050), 1,
      anon_sym_LF,
    ACTIONS(1052), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13098] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1054), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13108] = 2,
    ACTIONS(1056), 1,
      anon_sym_LF,
    ACTIONS(1058), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13116] = 2,
    ACTIONS(1060), 1,
      anon_sym_LF,
    ACTIONS(852), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13124] = 2,
    ACTIONS(1062), 1,
      anon_sym_LF,
    ACTIONS(1065), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13132] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13142] = 2,
    ACTIONS(1070), 1,
      anon_sym_LF,
    ACTIONS(1073), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13150] = 3,
    ACTIONS(760), 1,
      anon_sym_EQ,
    ACTIONS(1076), 1,
      anon_sym_LF,
    STATE(407), 1,
      aux_sym_kotlin_file_repeat1,
  [13160] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(760), 1,
      anon_sym_EQ,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13170] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(880), 1,
      anon_sym_COLON,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13180] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1078), 1,
      anon_sym_EQ,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13190] = 3,
    ACTIONS(1080), 1,
      anon_sym_LF,
    ACTIONS(1082), 1,
      anon_sym_DASH_GT,
    STATE(405), 1,
      aux_sym_kotlin_file_repeat1,
  [13200] = 3,
    ACTIONS(1084), 1,
      anon_sym_LF,
    ACTIONS(1086), 1,
      anon_sym_DOT,
    STATE(389), 1,
      aux_sym_kotlin_file_repeat1,
  [13210] = 3,
    ACTIONS(1088), 1,
      anon_sym_LF,
    ACTIONS(1090), 1,
      anon_sym_DASH_GT,
    STATE(418), 1,
      aux_sym_kotlin_file_repeat1,
  [13220] = 2,
    ACTIONS(1092), 1,
      anon_sym_LF,
    ACTIONS(1094), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13228] = 3,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(1096), 1,
      anon_sym_LF,
    STATE(396), 1,
      aux_sym_kotlin_file_repeat1,
  [13238] = 2,
    STATE(173), 1,
      sym_simple_identifier,
    ACTIONS(894), 2,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [13246] = 2,
    ACTIONS(878), 1,
      anon_sym_LF,
    ACTIONS(882), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13254] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1006), 1,
      anon_sym_EQ,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13264] = 2,
    ACTIONS(1098), 1,
      anon_sym_LF,
    ACTIONS(868), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [13272] = 3,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1102), 1,
      anon_sym_DASH_GT,
    STATE(394), 1,
      aux_sym_kotlin_file_repeat1,
  [13282] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1104), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13292] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1106), 1,
      anon_sym_COLON,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13302] = 1,
    ACTIONS(538), 3,
      anon_sym_RBRACK,
      sym__non_backtick_identifier,
      sym__backtick_identifier,
  [13308] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(1102), 1,
      anon_sym_DASH_GT,
    STATE(149), 1,
      aux_sym_kotlin_file_repeat1,
  [13318] = 2,
    ACTIONS(1108), 1,
      anon_sym_LF,
    ACTIONS(1110), 1,
      anon_sym_EQ,
  [13325] = 2,
    ACTIONS(1112), 1,
      anon_sym_LF,
    ACTIONS(1114), 1,
      anon_sym_SEMI,
  [13332] = 2,
    ACTIONS(1116), 1,
      anon_sym_LF,
    ACTIONS(1118), 1,
      anon_sym_SEMI,
  [13339] = 2,
    ACTIONS(1120), 1,
      anon_sym_LF,
    ACTIONS(1122), 1,
      anon_sym_SEMI,
  [13346] = 2,
    ACTIONS(576), 1,
      anon_sym_DASH_GT,
    ACTIONS(1124), 1,
      anon_sym_LF,
  [13353] = 2,
    ACTIONS(1126), 1,
      anon_sym_LF,
    ACTIONS(1128), 1,
      anon_sym_DASH_GT,
  [13360] = 2,
    ACTIONS(1130), 1,
      anon_sym_LF,
    ACTIONS(1132), 1,
      anon_sym_SEMI,
  [13367] = 2,
    ACTIONS(1134), 1,
      anon_sym_LF,
    ACTIONS(1136), 1,
      anon_sym_EQ,
  [13374] = 2,
    ACTIONS(1138), 1,
      anon_sym_LF,
    ACTIONS(1140), 1,
      anon_sym_EQ,
  [13381] = 2,
    ACTIONS(1142), 1,
      anon_sym_LF,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
  [13388] = 2,
    ACTIONS(1146), 1,
      anon_sym_LF,
    ACTIONS(1148), 1,
      anon_sym_EQ,
  [13395] = 2,
    ACTIONS(1150), 1,
      anon_sym_LF,
    ACTIONS(1152), 1,
      anon_sym_EQ,
  [13402] = 2,
    ACTIONS(1154), 1,
      anon_sym_LF,
    ACTIONS(1156), 1,
      anon_sym_DASH_GT,
  [13409] = 2,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1160), 1,
      anon_sym_SEMI,
  [13416] = 2,
    ACTIONS(1162), 1,
      anon_sym_LF,
    ACTIONS(1164), 1,
      anon_sym_DASH_GT,
  [13423] = 2,
    ACTIONS(1166), 1,
      anon_sym_LF,
    ACTIONS(1168), 1,
      anon_sym_SEMI,
  [13430] = 2,
    ACTIONS(1170), 1,
      anon_sym_LF,
    ACTIONS(1172), 1,
      anon_sym_DASH_GT,
  [13437] = 2,
    ACTIONS(562), 1,
      anon_sym_DASH_GT,
    ACTIONS(1174), 1,
      anon_sym_LF,
  [13444] = 2,
    ACTIONS(592), 1,
      anon_sym_DASH_GT,
    ACTIONS(1176), 1,
      anon_sym_LF,
  [13451] = 2,
    ACTIONS(1178), 1,
      anon_sym_LF,
    ACTIONS(1180), 1,
      anon_sym_EQ,
  [13458] = 1,
    ACTIONS(1182), 1,
      ts_builtin_sym_end,
  [13462] = 1,
    ACTIONS(1184), 1,
      anon_sym_typealias,
  [13466] = 1,
    ACTIONS(401), 1,
      anon_sym_typealias,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 262,
  [SMALL_STATE(7)] = 332,
  [SMALL_STATE(8)] = 400,
  [SMALL_STATE(9)] = 468,
  [SMALL_STATE(10)] = 535,
  [SMALL_STATE(11)] = 602,
  [SMALL_STATE(12)] = 669,
  [SMALL_STATE(13)] = 736,
  [SMALL_STATE(14)] = 803,
  [SMALL_STATE(15)] = 870,
  [SMALL_STATE(16)] = 937,
  [SMALL_STATE(17)] = 1004,
  [SMALL_STATE(18)] = 1071,
  [SMALL_STATE(19)] = 1138,
  [SMALL_STATE(20)] = 1205,
  [SMALL_STATE(21)] = 1272,
  [SMALL_STATE(22)] = 1339,
  [SMALL_STATE(23)] = 1406,
  [SMALL_STATE(24)] = 1473,
  [SMALL_STATE(25)] = 1540,
  [SMALL_STATE(26)] = 1607,
  [SMALL_STATE(27)] = 1674,
  [SMALL_STATE(28)] = 1741,
  [SMALL_STATE(29)] = 1808,
  [SMALL_STATE(30)] = 1875,
  [SMALL_STATE(31)] = 1942,
  [SMALL_STATE(32)] = 2009,
  [SMALL_STATE(33)] = 2076,
  [SMALL_STATE(34)] = 2143,
  [SMALL_STATE(35)] = 2210,
  [SMALL_STATE(36)] = 2277,
  [SMALL_STATE(37)] = 2344,
  [SMALL_STATE(38)] = 2411,
  [SMALL_STATE(39)] = 2478,
  [SMALL_STATE(40)] = 2545,
  [SMALL_STATE(41)] = 2612,
  [SMALL_STATE(42)] = 2679,
  [SMALL_STATE(43)] = 2746,
  [SMALL_STATE(44)] = 2813,
  [SMALL_STATE(45)] = 2880,
  [SMALL_STATE(46)] = 2932,
  [SMALL_STATE(47)] = 2984,
  [SMALL_STATE(48)] = 3048,
  [SMALL_STATE(49)] = 3100,
  [SMALL_STATE(50)] = 3164,
  [SMALL_STATE(51)] = 3228,
  [SMALL_STATE(52)] = 3290,
  [SMALL_STATE(53)] = 3354,
  [SMALL_STATE(54)] = 3416,
  [SMALL_STATE(55)] = 3478,
  [SMALL_STATE(56)] = 3540,
  [SMALL_STATE(57)] = 3602,
  [SMALL_STATE(58)] = 3664,
  [SMALL_STATE(59)] = 3728,
  [SMALL_STATE(60)] = 3790,
  [SMALL_STATE(61)] = 3852,
  [SMALL_STATE(62)] = 3914,
  [SMALL_STATE(63)] = 3966,
  [SMALL_STATE(64)] = 4030,
  [SMALL_STATE(65)] = 4082,
  [SMALL_STATE(66)] = 4144,
  [SMALL_STATE(67)] = 4206,
  [SMALL_STATE(68)] = 4268,
  [SMALL_STATE(69)] = 4332,
  [SMALL_STATE(70)] = 4394,
  [SMALL_STATE(71)] = 4458,
  [SMALL_STATE(72)] = 4522,
  [SMALL_STATE(73)] = 4574,
  [SMALL_STATE(74)] = 4636,
  [SMALL_STATE(75)] = 4700,
  [SMALL_STATE(76)] = 4762,
  [SMALL_STATE(77)] = 4824,
  [SMALL_STATE(78)] = 4876,
  [SMALL_STATE(79)] = 4935,
  [SMALL_STATE(80)] = 4994,
  [SMALL_STATE(81)] = 5053,
  [SMALL_STATE(82)] = 5112,
  [SMALL_STATE(83)] = 5170,
  [SMALL_STATE(84)] = 5228,
  [SMALL_STATE(85)] = 5286,
  [SMALL_STATE(86)] = 5344,
  [SMALL_STATE(87)] = 5402,
  [SMALL_STATE(88)] = 5460,
  [SMALL_STATE(89)] = 5518,
  [SMALL_STATE(90)] = 5576,
  [SMALL_STATE(91)] = 5634,
  [SMALL_STATE(92)] = 5692,
  [SMALL_STATE(93)] = 5750,
  [SMALL_STATE(94)] = 5808,
  [SMALL_STATE(95)] = 5866,
  [SMALL_STATE(96)] = 5924,
  [SMALL_STATE(97)] = 5982,
  [SMALL_STATE(98)] = 6040,
  [SMALL_STATE(99)] = 6098,
  [SMALL_STATE(100)] = 6156,
  [SMALL_STATE(101)] = 6214,
  [SMALL_STATE(102)] = 6272,
  [SMALL_STATE(103)] = 6330,
  [SMALL_STATE(104)] = 6388,
  [SMALL_STATE(105)] = 6446,
  [SMALL_STATE(106)] = 6504,
  [SMALL_STATE(107)] = 6562,
  [SMALL_STATE(108)] = 6620,
  [SMALL_STATE(109)] = 6678,
  [SMALL_STATE(110)] = 6736,
  [SMALL_STATE(111)] = 6794,
  [SMALL_STATE(112)] = 6852,
  [SMALL_STATE(113)] = 6910,
  [SMALL_STATE(114)] = 6968,
  [SMALL_STATE(115)] = 7026,
  [SMALL_STATE(116)] = 7084,
  [SMALL_STATE(117)] = 7142,
  [SMALL_STATE(118)] = 7200,
  [SMALL_STATE(119)] = 7258,
  [SMALL_STATE(120)] = 7316,
  [SMALL_STATE(121)] = 7374,
  [SMALL_STATE(122)] = 7432,
  [SMALL_STATE(123)] = 7490,
  [SMALL_STATE(124)] = 7548,
  [SMALL_STATE(125)] = 7593,
  [SMALL_STATE(126)] = 7638,
  [SMALL_STATE(127)] = 7683,
  [SMALL_STATE(128)] = 7728,
  [SMALL_STATE(129)] = 7773,
  [SMALL_STATE(130)] = 7818,
  [SMALL_STATE(131)] = 7842,
  [SMALL_STATE(132)] = 7872,
  [SMALL_STATE(133)] = 7919,
  [SMALL_STATE(134)] = 7966,
  [SMALL_STATE(135)] = 8013,
  [SMALL_STATE(136)] = 8060,
  [SMALL_STATE(137)] = 8107,
  [SMALL_STATE(138)] = 8154,
  [SMALL_STATE(139)] = 8201,
  [SMALL_STATE(140)] = 8248,
  [SMALL_STATE(141)] = 8277,
  [SMALL_STATE(142)] = 8324,
  [SMALL_STATE(143)] = 8371,
  [SMALL_STATE(144)] = 8418,
  [SMALL_STATE(145)] = 8465,
  [SMALL_STATE(146)] = 8516,
  [SMALL_STATE(147)] = 8560,
  [SMALL_STATE(148)] = 8604,
  [SMALL_STATE(149)] = 8648,
  [SMALL_STATE(150)] = 8672,
  [SMALL_STATE(151)] = 8702,
  [SMALL_STATE(152)] = 8746,
  [SMALL_STATE(153)] = 8774,
  [SMALL_STATE(154)] = 8818,
  [SMALL_STATE(155)] = 8862,
  [SMALL_STATE(156)] = 8890,
  [SMALL_STATE(157)] = 8917,
  [SMALL_STATE(158)] = 8938,
  [SMALL_STATE(159)] = 8959,
  [SMALL_STATE(160)] = 8980,
  [SMALL_STATE(161)] = 9001,
  [SMALL_STATE(162)] = 9034,
  [SMALL_STATE(163)] = 9055,
  [SMALL_STATE(164)] = 9076,
  [SMALL_STATE(165)] = 9097,
  [SMALL_STATE(166)] = 9124,
  [SMALL_STATE(167)] = 9145,
  [SMALL_STATE(168)] = 9166,
  [SMALL_STATE(169)] = 9187,
  [SMALL_STATE(170)] = 9228,
  [SMALL_STATE(171)] = 9249,
  [SMALL_STATE(172)] = 9269,
  [SMALL_STATE(173)] = 9301,
  [SMALL_STATE(174)] = 9321,
  [SMALL_STATE(175)] = 9351,
  [SMALL_STATE(176)] = 9383,
  [SMALL_STATE(177)] = 9413,
  [SMALL_STATE(178)] = 9443,
  [SMALL_STATE(179)] = 9463,
  [SMALL_STATE(180)] = 9498,
  [SMALL_STATE(181)] = 9520,
  [SMALL_STATE(182)] = 9544,
  [SMALL_STATE(183)] = 9568,
  [SMALL_STATE(184)] = 9587,
  [SMALL_STATE(185)] = 9610,
  [SMALL_STATE(186)] = 9631,
  [SMALL_STATE(187)] = 9654,
  [SMALL_STATE(188)] = 9671,
  [SMALL_STATE(189)] = 9694,
  [SMALL_STATE(190)] = 9715,
  [SMALL_STATE(191)] = 9734,
  [SMALL_STATE(192)] = 9756,
  [SMALL_STATE(193)] = 9775,
  [SMALL_STATE(194)] = 9792,
  [SMALL_STATE(195)] = 9805,
  [SMALL_STATE(196)] = 9824,
  [SMALL_STATE(197)] = 9845,
  [SMALL_STATE(198)] = 9858,
  [SMALL_STATE(199)] = 9879,
  [SMALL_STATE(200)] = 9900,
  [SMALL_STATE(201)] = 9917,
  [SMALL_STATE(202)] = 9938,
  [SMALL_STATE(203)] = 9955,
  [SMALL_STATE(204)] = 9978,
  [SMALL_STATE(205)] = 9995,
  [SMALL_STATE(206)] = 10016,
  [SMALL_STATE(207)] = 10033,
  [SMALL_STATE(208)] = 10056,
  [SMALL_STATE(209)] = 10079,
  [SMALL_STATE(210)] = 10102,
  [SMALL_STATE(211)] = 10115,
  [SMALL_STATE(212)] = 10129,
  [SMALL_STATE(213)] = 10153,
  [SMALL_STATE(214)] = 10179,
  [SMALL_STATE(215)] = 10205,
  [SMALL_STATE(216)] = 10219,
  [SMALL_STATE(217)] = 10239,
  [SMALL_STATE(218)] = 10255,
  [SMALL_STATE(219)] = 10271,
  [SMALL_STATE(220)] = 10285,
  [SMALL_STATE(221)] = 10303,
  [SMALL_STATE(222)] = 10323,
  [SMALL_STATE(223)] = 10347,
  [SMALL_STATE(224)] = 10363,
  [SMALL_STATE(225)] = 10389,
  [SMALL_STATE(226)] = 10403,
  [SMALL_STATE(227)] = 10429,
  [SMALL_STATE(228)] = 10449,
  [SMALL_STATE(229)] = 10463,
  [SMALL_STATE(230)] = 10479,
  [SMALL_STATE(231)] = 10493,
  [SMALL_STATE(232)] = 10507,
  [SMALL_STATE(233)] = 10519,
  [SMALL_STATE(234)] = 10543,
  [SMALL_STATE(235)] = 10567,
  [SMALL_STATE(236)] = 10586,
  [SMALL_STATE(237)] = 10599,
  [SMALL_STATE(238)] = 10618,
  [SMALL_STATE(239)] = 10639,
  [SMALL_STATE(240)] = 10654,
  [SMALL_STATE(241)] = 10667,
  [SMALL_STATE(242)] = 10682,
  [SMALL_STATE(243)] = 10703,
  [SMALL_STATE(244)] = 10716,
  [SMALL_STATE(245)] = 10731,
  [SMALL_STATE(246)] = 10752,
  [SMALL_STATE(247)] = 10765,
  [SMALL_STATE(248)] = 10786,
  [SMALL_STATE(249)] = 10801,
  [SMALL_STATE(250)] = 10822,
  [SMALL_STATE(251)] = 10839,
  [SMALL_STATE(252)] = 10856,
  [SMALL_STATE(253)] = 10871,
  [SMALL_STATE(254)] = 10886,
  [SMALL_STATE(255)] = 10903,
  [SMALL_STATE(256)] = 10916,
  [SMALL_STATE(257)] = 10929,
  [SMALL_STATE(258)] = 10942,
  [SMALL_STATE(259)] = 10955,
  [SMALL_STATE(260)] = 10968,
  [SMALL_STATE(261)] = 10981,
  [SMALL_STATE(262)] = 10994,
  [SMALL_STATE(263)] = 11012,
  [SMALL_STATE(264)] = 11030,
  [SMALL_STATE(265)] = 11048,
  [SMALL_STATE(266)] = 11066,
  [SMALL_STATE(267)] = 11078,
  [SMALL_STATE(268)] = 11096,
  [SMALL_STATE(269)] = 11108,
  [SMALL_STATE(270)] = 11126,
  [SMALL_STATE(271)] = 11138,
  [SMALL_STATE(272)] = 11150,
  [SMALL_STATE(273)] = 11168,
  [SMALL_STATE(274)] = 11180,
  [SMALL_STATE(275)] = 11192,
  [SMALL_STATE(276)] = 11204,
  [SMALL_STATE(277)] = 11216,
  [SMALL_STATE(278)] = 11233,
  [SMALL_STATE(279)] = 11250,
  [SMALL_STATE(280)] = 11267,
  [SMALL_STATE(281)] = 11280,
  [SMALL_STATE(282)] = 11291,
  [SMALL_STATE(283)] = 11308,
  [SMALL_STATE(284)] = 11319,
  [SMALL_STATE(285)] = 11336,
  [SMALL_STATE(286)] = 11353,
  [SMALL_STATE(287)] = 11370,
  [SMALL_STATE(288)] = 11387,
  [SMALL_STATE(289)] = 11404,
  [SMALL_STATE(290)] = 11421,
  [SMALL_STATE(291)] = 11438,
  [SMALL_STATE(292)] = 11455,
  [SMALL_STATE(293)] = 11468,
  [SMALL_STATE(294)] = 11478,
  [SMALL_STATE(295)] = 11494,
  [SMALL_STATE(296)] = 11508,
  [SMALL_STATE(297)] = 11524,
  [SMALL_STATE(298)] = 11538,
  [SMALL_STATE(299)] = 11552,
  [SMALL_STATE(300)] = 11562,
  [SMALL_STATE(301)] = 11572,
  [SMALL_STATE(302)] = 11588,
  [SMALL_STATE(303)] = 11604,
  [SMALL_STATE(304)] = 11614,
  [SMALL_STATE(305)] = 11630,
  [SMALL_STATE(306)] = 11646,
  [SMALL_STATE(307)] = 11662,
  [SMALL_STATE(308)] = 11678,
  [SMALL_STATE(309)] = 11692,
  [SMALL_STATE(310)] = 11702,
  [SMALL_STATE(311)] = 11718,
  [SMALL_STATE(312)] = 11732,
  [SMALL_STATE(313)] = 11748,
  [SMALL_STATE(314)] = 11764,
  [SMALL_STATE(315)] = 11780,
  [SMALL_STATE(316)] = 11796,
  [SMALL_STATE(317)] = 11812,
  [SMALL_STATE(318)] = 11828,
  [SMALL_STATE(319)] = 11844,
  [SMALL_STATE(320)] = 11860,
  [SMALL_STATE(321)] = 11870,
  [SMALL_STATE(322)] = 11886,
  [SMALL_STATE(323)] = 11902,
  [SMALL_STATE(324)] = 11916,
  [SMALL_STATE(325)] = 11930,
  [SMALL_STATE(326)] = 11944,
  [SMALL_STATE(327)] = 11960,
  [SMALL_STATE(328)] = 11970,
  [SMALL_STATE(329)] = 11986,
  [SMALL_STATE(330)] = 11996,
  [SMALL_STATE(331)] = 12012,
  [SMALL_STATE(332)] = 12028,
  [SMALL_STATE(333)] = 12044,
  [SMALL_STATE(334)] = 12060,
  [SMALL_STATE(335)] = 12076,
  [SMALL_STATE(336)] = 12086,
  [SMALL_STATE(337)] = 12096,
  [SMALL_STATE(338)] = 12106,
  [SMALL_STATE(339)] = 12116,
  [SMALL_STATE(340)] = 12126,
  [SMALL_STATE(341)] = 12136,
  [SMALL_STATE(342)] = 12146,
  [SMALL_STATE(343)] = 12156,
  [SMALL_STATE(344)] = 12172,
  [SMALL_STATE(345)] = 12182,
  [SMALL_STATE(346)] = 12192,
  [SMALL_STATE(347)] = 12202,
  [SMALL_STATE(348)] = 12218,
  [SMALL_STATE(349)] = 12234,
  [SMALL_STATE(350)] = 12244,
  [SMALL_STATE(351)] = 12260,
  [SMALL_STATE(352)] = 12276,
  [SMALL_STATE(353)] = 12286,
  [SMALL_STATE(354)] = 12296,
  [SMALL_STATE(355)] = 12306,
  [SMALL_STATE(356)] = 12322,
  [SMALL_STATE(357)] = 12332,
  [SMALL_STATE(358)] = 12342,
  [SMALL_STATE(359)] = 12356,
  [SMALL_STATE(360)] = 12372,
  [SMALL_STATE(361)] = 12382,
  [SMALL_STATE(362)] = 12395,
  [SMALL_STATE(363)] = 12406,
  [SMALL_STATE(364)] = 12419,
  [SMALL_STATE(365)] = 12432,
  [SMALL_STATE(366)] = 12445,
  [SMALL_STATE(367)] = 12458,
  [SMALL_STATE(368)] = 12467,
  [SMALL_STATE(369)] = 12480,
  [SMALL_STATE(370)] = 12493,
  [SMALL_STATE(371)] = 12506,
  [SMALL_STATE(372)] = 12519,
  [SMALL_STATE(373)] = 12532,
  [SMALL_STATE(374)] = 12545,
  [SMALL_STATE(375)] = 12558,
  [SMALL_STATE(376)] = 12571,
  [SMALL_STATE(377)] = 12584,
  [SMALL_STATE(378)] = 12593,
  [SMALL_STATE(379)] = 12606,
  [SMALL_STATE(380)] = 12619,
  [SMALL_STATE(381)] = 12632,
  [SMALL_STATE(382)] = 12643,
  [SMALL_STATE(383)] = 12656,
  [SMALL_STATE(384)] = 12669,
  [SMALL_STATE(385)] = 12682,
  [SMALL_STATE(386)] = 12695,
  [SMALL_STATE(387)] = 12708,
  [SMALL_STATE(388)] = 12721,
  [SMALL_STATE(389)] = 12734,
  [SMALL_STATE(390)] = 12744,
  [SMALL_STATE(391)] = 12752,
  [SMALL_STATE(392)] = 12762,
  [SMALL_STATE(393)] = 12770,
  [SMALL_STATE(394)] = 12780,
  [SMALL_STATE(395)] = 12790,
  [SMALL_STATE(396)] = 12798,
  [SMALL_STATE(397)] = 12808,
  [SMALL_STATE(398)] = 12816,
  [SMALL_STATE(399)] = 12824,
  [SMALL_STATE(400)] = 12834,
  [SMALL_STATE(401)] = 12842,
  [SMALL_STATE(402)] = 12850,
  [SMALL_STATE(403)] = 12860,
  [SMALL_STATE(404)] = 12870,
  [SMALL_STATE(405)] = 12880,
  [SMALL_STATE(406)] = 12890,
  [SMALL_STATE(407)] = 12900,
  [SMALL_STATE(408)] = 12910,
  [SMALL_STATE(409)] = 12920,
  [SMALL_STATE(410)] = 12928,
  [SMALL_STATE(411)] = 12938,
  [SMALL_STATE(412)] = 12948,
  [SMALL_STATE(413)] = 12958,
  [SMALL_STATE(414)] = 12968,
  [SMALL_STATE(415)] = 12976,
  [SMALL_STATE(416)] = 12986,
  [SMALL_STATE(417)] = 12996,
  [SMALL_STATE(418)] = 13004,
  [SMALL_STATE(419)] = 13014,
  [SMALL_STATE(420)] = 13024,
  [SMALL_STATE(421)] = 13032,
  [SMALL_STATE(422)] = 13040,
  [SMALL_STATE(423)] = 13048,
  [SMALL_STATE(424)] = 13056,
  [SMALL_STATE(425)] = 13064,
  [SMALL_STATE(426)] = 13072,
  [SMALL_STATE(427)] = 13080,
  [SMALL_STATE(428)] = 13090,
  [SMALL_STATE(429)] = 13098,
  [SMALL_STATE(430)] = 13108,
  [SMALL_STATE(431)] = 13116,
  [SMALL_STATE(432)] = 13124,
  [SMALL_STATE(433)] = 13132,
  [SMALL_STATE(434)] = 13142,
  [SMALL_STATE(435)] = 13150,
  [SMALL_STATE(436)] = 13160,
  [SMALL_STATE(437)] = 13170,
  [SMALL_STATE(438)] = 13180,
  [SMALL_STATE(439)] = 13190,
  [SMALL_STATE(440)] = 13200,
  [SMALL_STATE(441)] = 13210,
  [SMALL_STATE(442)] = 13220,
  [SMALL_STATE(443)] = 13228,
  [SMALL_STATE(444)] = 13238,
  [SMALL_STATE(445)] = 13246,
  [SMALL_STATE(446)] = 13254,
  [SMALL_STATE(447)] = 13264,
  [SMALL_STATE(448)] = 13272,
  [SMALL_STATE(449)] = 13282,
  [SMALL_STATE(450)] = 13292,
  [SMALL_STATE(451)] = 13302,
  [SMALL_STATE(452)] = 13308,
  [SMALL_STATE(453)] = 13318,
  [SMALL_STATE(454)] = 13325,
  [SMALL_STATE(455)] = 13332,
  [SMALL_STATE(456)] = 13339,
  [SMALL_STATE(457)] = 13346,
  [SMALL_STATE(458)] = 13353,
  [SMALL_STATE(459)] = 13360,
  [SMALL_STATE(460)] = 13367,
  [SMALL_STATE(461)] = 13374,
  [SMALL_STATE(462)] = 13381,
  [SMALL_STATE(463)] = 13388,
  [SMALL_STATE(464)] = 13395,
  [SMALL_STATE(465)] = 13402,
  [SMALL_STATE(466)] = 13409,
  [SMALL_STATE(467)] = 13416,
  [SMALL_STATE(468)] = 13423,
  [SMALL_STATE(469)] = 13430,
  [SMALL_STATE(470)] = 13437,
  [SMALL_STATE(471)] = 13444,
  [SMALL_STATE(472)] = 13451,
  [SMALL_STATE(473)] = 13458,
  [SMALL_STATE(474)] = 13462,
  [SMALL_STATE(475)] = 13466,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kotlin_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kotlin_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kotlin_file, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kotlin_file, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kotlin_file, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat3, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat3, 2), SHIFT_REPEAT(295),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat3, 2), SHIFT_REPEAT(215),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat3, 2), SHIFT_REPEAT(172),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kotlin_file, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_identifier, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_identifier, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_user_type, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_user_type, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_type_repeat1, 2), SHIFT_REPEAT(449),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_type_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_type_repeat1, 2), SHIFT_REPEAT(288),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat1, 2), SHIFT_REPEAT(149),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_kotlin_file_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(415),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(414),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_user_type, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_user_type, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 6),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 6),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 7),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 7),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 8),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 8),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_header, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_header, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_type_repeat1, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_type_repeat1, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_user_type, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_user_type, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_type_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_type_repeat1, 4),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_type_repeat1, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(215),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(172),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameter_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_parameter_repeat1, 2), SHIFT_REPEAT(175),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_parameter_repeat1, 2), SHIFT_REPEAT(241),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_parameter_repeat1, 2), SHIFT_REPEAT(274),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_parameter_repeat1, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat1, 2), SHIFT_REPEAT(180),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_header, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_header, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_header, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_header, 3),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat1, 2), SHIFT_REPEAT(183),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__semis, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__semis, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__semi, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__semi, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__semis_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__semis_repeat1, 2), SHIFT_REPEAT(186),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__semis_repeat1, 2),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__semis_repeat1, 2), SHIFT_REPEAT(186),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_alias, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_alias, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__semis, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__semis, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__semi, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__semi, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat2, 2),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat2, 2), SHIFT_REPEAT(362),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_header, 4),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_kotlin_file_repeat1, 2), SHIFT(60),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_kotlin_file_repeat1, 2), SHIFT(470),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_header, 3),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_type_repeat1, 2), SHIFT_REPEAT(393),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_type_repeat1, 2), SHIFT_REPEAT(285),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat1, 2), SHIFT_REPEAT(218),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_kotlin_file_repeat1, 2), SHIFT(130),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nullable_type, 1),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nullable_type, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kotlin_file_repeat1, 2), SHIFT_REPEAT(204),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nullable_type, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nullable_type, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_annotation, 1),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_annotation, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_modifier, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_modifier, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 4),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 4),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_parameters, 4),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_annotation, 4),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_annotation, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_reference, 1),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_reference, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 5),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 5),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_parameters, 5),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_annotation, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_annotation, 2),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_parameters, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_annotation, 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_annotation, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_annotation, 5),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_annotation, 5),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_object, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(283),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(239),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter_modifier, 1),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameter_modifier, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_annotation_repeat1, 2),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_annotation_repeat1, 2), SHIFT_REPEAT(281),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_modifier, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nullable_type, 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nullable_type, 3),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nullable_type_repeat1, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nullable_type_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nullable_type_repeat1, 2), SHIFT_REPEAT(251),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter_modifier, 2),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameter_modifier, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_type_repeat1, 2), SHIFT_REPEAT(403),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_type_repeat1, 2), SHIFT_REPEAT(291),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variance_modifier, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variance_modifier, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_type, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_modifier, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definitely_non_nullable_type, 5),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitely_non_nullable_type, 5),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameter, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_parameter, 1), REDUCE(sym_type_parameter, 2),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [793] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_parameter, 1), REDUCE(sym_type_parameter, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameter, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definitely_non_nullable_type, 4),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitely_non_nullable_type, 4),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_parameters_repeat1, 2), SHIFT_REPEAT(399),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_type_parameters_repeat1, 2), SHIFT_REPEAT(79),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_type_parameters_repeat1, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(413),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(50),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definitely_non_nullable_type, 3),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitely_non_nullable_type, 3),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(429),
  [865] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(148),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 9),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 9),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 3),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameter, 3),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 8),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 8),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_use_site_target, 3),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_use_site_target, 3),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_use_site_target, 4),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_use_site_target, 4),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 5),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameter, 5),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_parameters_repeat1, 3),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_type_parameters_repeat1, 3),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [962] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_parameters_repeat1, 2), REDUCE(aux_sym_function_type_parameters_repeat1, 3),
  [965] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_type_parameters_repeat1, 2), REDUCE(aux_sym_function_type_parameters_repeat1, 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 5),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_parameters_repeat1, 4),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_type_parameters_repeat1, 4),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_parameters_repeat1, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 4),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_arguments_repeat1, 4),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 7),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameter, 7),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 6),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameter, 6),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_parameters_repeat1, 3), REDUCE(aux_sym_function_type_parameters_repeat1, 4),
  [1027] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_type_parameters_repeat1, 3), REDUCE(aux_sym_function_type_parameters_repeat1, 4),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 3),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_parameters_repeat1, 3),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_parameter, 4), REDUCE(sym_type_parameter, 5),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_parameter, 4), REDUCE(sym_type_parameter, 5),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 3),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_arguments_repeat1, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 4),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameter, 4),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_projection, 1),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_projection, 1),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_parameter, 5), REDUCE(sym_type_parameter, 6),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_parameter, 5), REDUCE(sym_type_parameter, 6),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_parameter, 3), REDUCE(sym_type_parameter, 4),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_parameter, 3), REDUCE(sym_type_parameter, 4),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 4),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_parameters_repeat1, 4),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 8),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 8),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 5),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias, 5),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 6),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias, 6),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 4),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias, 4),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_parameters, 5),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_parameters, 7),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_parameters, 7),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 9),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias, 9),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 8),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias, 8),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 6),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 6),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_parameters, 2),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_parameters, 2),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 7),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias, 7),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_parameters, 8),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_parameters, 8),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias, 10),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias, 10),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_parameters, 6),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_parameters, 6),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_parameters, 4),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_parameters, 3),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 7),
  [1180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 7),
  [1182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_kotlin() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
