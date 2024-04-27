#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 424
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 1
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 31
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 40

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_version = 2,
  anon_sym_POUNDinclude = 3,
  anon_sym_class = 4,
  anon_sym_COLON = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_const = 8,
  anon_sym_EQ = 9,
  anon_sym_SEMI = 10,
  anon_sym_LPAREN = 11,
  anon_sym_out = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  anon_sym_Default = 15,
  anon_sym_default = 16,
  anon_sym_DEFAULT = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_States = 20,
  anon_sym_states = 21,
  anon_sym_STATES = 22,
  aux_sym_states_declaration_token1 = 23,
  anon_sym_int = 24,
  anon_sym_float = 25,
  anon_sym_double = 26,
  anon_sym_string = 27,
  anon_sym_bool = 28,
  anon_sym_void = 29,
  anon_sym_return = 30,
  anon_sym_let = 31,
  anon_sym_if = 32,
  anon_sym_else = 33,
  anon_sym_for = 34,
  anon_sym_foreach = 35,
  anon_sym_DOT = 36,
  anon_sym_PLUS_EQ = 37,
  anon_sym_DASH_EQ = 38,
  anon_sym_STAR_EQ = 39,
  anon_sym_SLASH_EQ = 40,
  anon_sym_PIPE_EQ = 41,
  anon_sym_STAR = 42,
  anon_sym_SLASH = 43,
  anon_sym_PERCENT = 44,
  anon_sym_PIPE = 45,
  anon_sym_AMP = 46,
  anon_sym_LT_LT = 47,
  anon_sym_GT_GT = 48,
  anon_sym_LT = 49,
  anon_sym_GT = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_GT_EQ = 52,
  anon_sym_EQ_EQ = 53,
  anon_sym_BANG_EQ = 54,
  anon_sym_AMP_AMP = 55,
  anon_sym_PIPE_PIPE = 56,
  anon_sym_PLUS_PLUS = 57,
  anon_sym_DASH_DASH = 58,
  anon_sym_BANG = 59,
  anon_sym_QMARK = 60,
  anon_sym_DOT_DOT = 61,
  anon_sym_LBRACK = 62,
  anon_sym_RBRACK = 63,
  aux_sym_frame_sprite_token1 = 64,
  aux_sym_frame_sprite_token2 = 65,
  aux_sym_frame_sprite_token3 = 66,
  aux_sym__frame_keyword_token1 = 67,
  anon_sym_Offset = 68,
  anon_sym_offset = 69,
  anon_sym_OFFSET = 70,
  anon_sym_Light = 71,
  anon_sym_light = 72,
  anon_sym_LIGHT = 73,
  anon_sym_clearscope = 74,
  anon_sym_virtualscope = 75,
  anon_sym_play = 76,
  anon_sym_ui = 77,
  anon_sym_action = 78,
  anon_sym_abstract = 79,
  anon_sym_virtual = 80,
  anon_sym_override = 81,
  anon_sym_static = 82,
  anon_sym_transient = 83,
  anon_sym_extend = 84,
  anon_sym_private = 85,
  anon_sym_protected = 86,
  sym_comment = 87,
  anon_sym_DQUOTE = 88,
  sym__interpreted_string_literal_content = 89,
  sym_number_literal = 90,
  anon_sym_true = 91,
  anon_sym_false = 92,
  anon_sym_True = 93,
  anon_sym_False = 94,
  sym_source_file = 95,
  sym__definition = 96,
  sym_version_definition = 97,
  sym_include_definition = 98,
  sym_class_definition = 99,
  sym_const_definition = 100,
  sym__declaration = 101,
  sym_method_declaration = 102,
  sym_parameter_list = 103,
  sym_variable_declaration = 104,
  sym_default_declaration = 105,
  sym_default_declaration_flag = 106,
  sym_default_declaration_value = 107,
  sym_states_declaration = 108,
  sym_block = 109,
  sym__type = 110,
  sym_predefined_type = 111,
  sym__class_name = 112,
  sym__statement = 113,
  sym_return_statement = 114,
  sym_declaration_statement = 115,
  sym_if_statement = 116,
  sym_for_statement = 117,
  sym_foreach_statement = 118,
  sym_generic_statement = 119,
  sym__expression = 120,
  sym__nonleft_expression = 121,
  sym__left_expression = 122,
  sym_member_access_expression = 123,
  sym_assignment_expression = 124,
  sym_binary_expression = 125,
  sym_postfix_unary_expression = 126,
  sym_prefix_unary_expression = 127,
  sym_parenthesized_expression = 128,
  sym_vector_expression = 129,
  sym_function_expression = 130,
  sym_ternary_expression = 131,
  sym_string_concat_expression = 132,
  sym_subscript_expression = 133,
  sym__states_statement = 134,
  sym_frame_statement = 135,
  sym_frame_sprite = 136,
  sym__frame_keyword = 137,
  sym_control_statement = 138,
  sym_scope = 139,
  sym_modifier = 140,
  sym_access_level = 141,
  sym__literal = 142,
  sym_string_literal = 143,
  sym_boolean_literal = 144,
  aux_sym_source_file_repeat1 = 145,
  aux_sym_class_definition_repeat1 = 146,
  aux_sym_class_definition_repeat2 = 147,
  aux_sym_method_declaration_repeat1 = 148,
  aux_sym_parameter_list_repeat1 = 149,
  aux_sym_default_declaration_repeat1 = 150,
  aux_sym_states_declaration_repeat1 = 151,
  aux_sym_states_declaration_repeat2 = 152,
  aux_sym_block_repeat1 = 153,
  aux_sym_function_expression_repeat1 = 154,
  aux_sym_frame_statement_repeat1 = 155,
  aux_sym_string_literal_repeat1 = 156,
  alias_sym_class_name = 157,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_version] = "version",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_class] = "class",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_out] = "out",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_Default] = "Default",
  [anon_sym_default] = "default",
  [anon_sym_DEFAULT] = "DEFAULT",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_States] = "States",
  [anon_sym_states] = "states",
  [anon_sym_STATES] = "STATES",
  [aux_sym_states_declaration_token1] = "label_identifier",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_string] = "string",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [anon_sym_return] = "return",
  [anon_sym_let] = "let",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_foreach] = "foreach",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_frame_sprite_token1] = "frame_sprite_token1",
  [aux_sym_frame_sprite_token2] = "frame_sprite_token2",
  [aux_sym_frame_sprite_token3] = "frame_sprite_token3",
  [aux_sym__frame_keyword_token1] = "generic_keyword",
  [anon_sym_Offset] = "offset_keyword",
  [anon_sym_offset] = "offset_keyword",
  [anon_sym_OFFSET] = "offset_keyword",
  [anon_sym_Light] = "light_keyword",
  [anon_sym_light] = "light_keyword",
  [anon_sym_LIGHT] = "light_keyword",
  [anon_sym_clearscope] = "clearscope",
  [anon_sym_virtualscope] = "virtualscope",
  [anon_sym_play] = "play",
  [anon_sym_ui] = "ui",
  [anon_sym_action] = "action",
  [anon_sym_abstract] = "abstract",
  [anon_sym_virtual] = "virtual",
  [anon_sym_override] = "override",
  [anon_sym_static] = "static",
  [anon_sym_transient] = "transient",
  [anon_sym_extend] = "extend",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [sym__interpreted_string_literal_content] = "_interpreted_string_literal_content",
  [sym_number_literal] = "number_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_version_definition] = "version_definition",
  [sym_include_definition] = "include_definition",
  [sym_class_definition] = "class_definition",
  [sym_const_definition] = "const_definition",
  [sym__declaration] = "_declaration",
  [sym_method_declaration] = "method_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_variable_declaration] = "variable_declaration",
  [sym_default_declaration] = "default_declaration",
  [sym_default_declaration_flag] = "default_declaration_flag",
  [sym_default_declaration_value] = "default_declaration_value",
  [sym_states_declaration] = "states_declaration",
  [sym_block] = "block",
  [sym__type] = "_type",
  [sym_predefined_type] = "predefined_type",
  [sym__class_name] = "_class_name",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_declaration_statement] = "declaration_statement",
  [sym_if_statement] = "if_statement",
  [sym_for_statement] = "for_statement",
  [sym_foreach_statement] = "foreach_statement",
  [sym_generic_statement] = "generic_statement",
  [sym__expression] = "_expression",
  [sym__nonleft_expression] = "_nonleft_expression",
  [sym__left_expression] = "_left_expression",
  [sym_member_access_expression] = "member_access_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_postfix_unary_expression] = "postfix_unary_expression",
  [sym_prefix_unary_expression] = "prefix_unary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_vector_expression] = "vector_expression",
  [sym_function_expression] = "function_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_string_concat_expression] = "string_concat_expression",
  [sym_subscript_expression] = "subscript_expression",
  [sym__states_statement] = "_states_statement",
  [sym_frame_statement] = "frame_statement",
  [sym_frame_sprite] = "frame_sprite",
  [sym__frame_keyword] = "_frame_keyword",
  [sym_control_statement] = "control_statement",
  [sym_scope] = "scope",
  [sym_modifier] = "modifier",
  [sym_access_level] = "access_level",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_class_definition_repeat2] = "class_definition_repeat2",
  [aux_sym_method_declaration_repeat1] = "method_declaration_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_default_declaration_repeat1] = "default_declaration_repeat1",
  [aux_sym_states_declaration_repeat1] = "states_declaration_repeat1",
  [aux_sym_states_declaration_repeat2] = "states_declaration_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_function_expression_repeat1] = "function_expression_repeat1",
  [aux_sym_frame_statement_repeat1] = "frame_statement_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [alias_sym_class_name] = "class_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_Default] = anon_sym_Default,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_DEFAULT] = anon_sym_DEFAULT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_States] = anon_sym_States,
  [anon_sym_states] = anon_sym_states,
  [anon_sym_STATES] = anon_sym_STATES,
  [aux_sym_states_declaration_token1] = aux_sym_states_declaration_token1,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_frame_sprite_token1] = aux_sym_frame_sprite_token1,
  [aux_sym_frame_sprite_token2] = aux_sym_frame_sprite_token2,
  [aux_sym_frame_sprite_token3] = aux_sym_frame_sprite_token3,
  [aux_sym__frame_keyword_token1] = aux_sym__frame_keyword_token1,
  [anon_sym_Offset] = anon_sym_Offset,
  [anon_sym_offset] = anon_sym_Offset,
  [anon_sym_OFFSET] = anon_sym_Offset,
  [anon_sym_Light] = anon_sym_Light,
  [anon_sym_light] = anon_sym_Light,
  [anon_sym_LIGHT] = anon_sym_Light,
  [anon_sym_clearscope] = anon_sym_clearscope,
  [anon_sym_virtualscope] = anon_sym_virtualscope,
  [anon_sym_play] = anon_sym_play,
  [anon_sym_ui] = anon_sym_ui,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_transient] = anon_sym_transient,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__interpreted_string_literal_content] = sym__interpreted_string_literal_content,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_version_definition] = sym_version_definition,
  [sym_include_definition] = sym_include_definition,
  [sym_class_definition] = sym_class_definition,
  [sym_const_definition] = sym_const_definition,
  [sym__declaration] = sym__declaration,
  [sym_method_declaration] = sym_method_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_default_declaration] = sym_default_declaration,
  [sym_default_declaration_flag] = sym_default_declaration_flag,
  [sym_default_declaration_value] = sym_default_declaration_value,
  [sym_states_declaration] = sym_states_declaration,
  [sym_block] = sym_block,
  [sym__type] = sym__type,
  [sym_predefined_type] = sym_predefined_type,
  [sym__class_name] = sym__class_name,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_declaration_statement] = sym_declaration_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_foreach_statement] = sym_foreach_statement,
  [sym_generic_statement] = sym_generic_statement,
  [sym__expression] = sym__expression,
  [sym__nonleft_expression] = sym__nonleft_expression,
  [sym__left_expression] = sym__left_expression,
  [sym_member_access_expression] = sym_member_access_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_postfix_unary_expression] = sym_postfix_unary_expression,
  [sym_prefix_unary_expression] = sym_prefix_unary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_vector_expression] = sym_vector_expression,
  [sym_function_expression] = sym_function_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_string_concat_expression] = sym_string_concat_expression,
  [sym_subscript_expression] = sym_subscript_expression,
  [sym__states_statement] = sym__states_statement,
  [sym_frame_statement] = sym_frame_statement,
  [sym_frame_sprite] = sym_frame_sprite,
  [sym__frame_keyword] = sym__frame_keyword,
  [sym_control_statement] = sym_control_statement,
  [sym_scope] = sym_scope,
  [sym_modifier] = sym_modifier,
  [sym_access_level] = sym_access_level,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_class_definition_repeat2] = aux_sym_class_definition_repeat2,
  [aux_sym_method_declaration_repeat1] = aux_sym_method_declaration_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_default_declaration_repeat1] = aux_sym_default_declaration_repeat1,
  [aux_sym_states_declaration_repeat1] = aux_sym_states_declaration_repeat1,
  [aux_sym_states_declaration_repeat2] = aux_sym_states_declaration_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_function_expression_repeat1] = aux_sym_function_expression_repeat1,
  [aux_sym_frame_statement_repeat1] = aux_sym_frame_statement_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFAULT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_States] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_states] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STATES] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_states_declaration_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [aux_sym_frame_sprite_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_frame_sprite_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_frame_sprite_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__frame_keyword_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Offset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_offset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_OFFSET] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Light] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_light] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LIGHT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_clearscope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtualscope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_play] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ui] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__interpreted_string_literal_content] = {
    .visible = false,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_version_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_include_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_const_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_default_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_default_declaration_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_default_declaration_value] = {
    .visible = true,
    .named = true,
  },
  [sym_states_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_predefined_type] = {
    .visible = true,
    .named = true,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__nonleft_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__left_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_member_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_postfix_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_vector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_concat_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__states_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_frame_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_frame_sprite] = {
    .visible = true,
    .named = true,
  },
  [sym__frame_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym_control_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_access_level] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_default_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_states_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_states_declaration_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_frame_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_action = 1,
  field_alternative = 2,
  field_arguments = 3,
  field_array = 4,
  field_body = 5,
  field_condition = 6,
  field_consequence = 7,
  field_default_value = 8,
  field_duration = 9,
  field_function = 10,
  field_index = 11,
  field_inherit = 12,
  field_initializer = 13,
  field_keyword = 14,
  field_label = 15,
  field_left = 16,
  field_light = 17,
  field_member = 18,
  field_name = 19,
  field_operator = 20,
  field_parameter = 21,
  field_path = 22,
  field_right = 23,
  field_sprite = 24,
  field_type = 25,
  field_update = 26,
  field_value = 27,
  field_version = 28,
  field_x = 29,
  field_y = 30,
  field_z = 31,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_array] = "array",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_default_value] = "default_value",
  [field_duration] = "duration",
  [field_function] = "function",
  [field_index] = "index",
  [field_inherit] = "inherit",
  [field_initializer] = "initializer",
  [field_keyword] = "keyword",
  [field_label] = "label",
  [field_left] = "left",
  [field_light] = "light",
  [field_member] = "member",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameter] = "parameter",
  [field_path] = "path",
  [field_right] = "right",
  [field_sprite] = "sprite",
  [field_type] = "type",
  [field_update] = "update",
  [field_value] = "value",
  [field_version] = "version",
  [field_x] = "x",
  [field_y] = "y",
  [field_z] = "z",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 3},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 3},
  [16] = {.index = 24, .length = 1},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 4},
  [19] = {.index = 31, .length = 6},
  [20] = {.index = 37, .length = 2},
  [21] = {.index = 39, .length = 2},
  [22] = {.index = 41, .length = 3},
  [23] = {.index = 44, .length = 3},
  [24] = {.index = 47, .length = 2},
  [25] = {.index = 49, .length = 3},
  [26] = {.index = 52, .length = 3},
  [27] = {.index = 55, .length = 7},
  [28] = {.index = 62, .length = 6},
  [29] = {.index = 68, .length = 4},
  [30] = {.index = 72, .length = 2},
  [31] = {.index = 74, .length = 1},
  [32] = {.index = 75, .length = 4},
  [33] = {.index = 79, .length = 3},
  [34] = {.index = 82, .length = 1},
  [35] = {.index = 83, .length = 4},
  [36] = {.index = 87, .length = 2},
  [37] = {.index = 89, .length = 3},
  [38] = {.index = 92, .length = 3},
  [39] = {.index = 95, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 1},
  [1] =
    {field_path, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 1},
    {field_value, 3},
  [5] =
    {field_name, 2},
  [6] =
    {field_inherit, 2},
    {field_inherit, 3},
    {field_name, 1},
  [9] =
    {field_label, 0},
  [10] =
    {field_name, 1},
    {field_type, 0},
  [12] =
    {field_label, 2, .inherited = true},
  [13] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [15] =
    {field_name, 2},
    {field_type, 1},
  [17] =
    {field_inherit, 3},
    {field_inherit, 4},
    {field_name, 2},
  [20] =
    {field_function, 0},
  [21] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [24] =
    {field_member, 2},
  [25] =
    {field_left, 0},
    {field_right, 2},
  [27] =
    {field_default_value, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_parameter, 1},
    {field_type, 1, .inherited = true},
  [31] =
    {field_default_value, 0, .inherited = true},
    {field_default_value, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [37] =
    {field_arguments, 2},
    {field_function, 0},
  [39] =
    {field_array, 0},
    {field_index, 2},
  [41] =
    {field_action, 2},
    {field_duration, 1},
    {field_sprite, 0},
  [44] =
    {field_light, 0, .inherited = true},
    {field_x, 0, .inherited = true},
    {field_y, 0, .inherited = true},
  [47] =
    {field_x, 1},
    {field_y, 3},
  [49] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_function, 0},
  [52] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [55] =
    {field_action, 3},
    {field_duration, 1},
    {field_keyword, 2},
    {field_light, 2, .inherited = true},
    {field_sprite, 0},
    {field_x, 2, .inherited = true},
    {field_y, 2, .inherited = true},
  [62] =
    {field_light, 0, .inherited = true},
    {field_light, 1, .inherited = true},
    {field_x, 0, .inherited = true},
    {field_x, 1, .inherited = true},
    {field_y, 0, .inherited = true},
    {field_y, 1, .inherited = true},
  [68] =
    {field_default_value, 2},
    {field_default_value, 3},
    {field_name, 1},
    {field_type, 0},
  [72] =
    {field_body, 2},
    {field_condition, 1},
  [74] =
    {field_type, 0},
  [75] =
    {field_default_value, 3},
    {field_default_value, 4},
    {field_name, 2},
    {field_type, 1},
  [79] =
    {field_x, 1},
    {field_y, 3},
    {field_z, 5},
  [82] =
    {field_light, 2},
  [83] =
    {field_alternative, 3},
    {field_alternative, 4},
    {field_body, 2},
    {field_condition, 1},
  [87] =
    {field_x, 2},
    {field_y, 4},
  [89] =
    {field_body, 6},
    {field_condition, 3},
    {field_initializer, 2},
  [92] =
    {field_body, 6},
    {field_left, 2},
    {field_right, 4},
  [95] =
    {field_body, 7},
    {field_condition, 3},
    {field_initializer, 2},
    {field_update, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_class_name,
  },
  [34] = {
    [1] = anon_sym_Light,
    [2] = anon_sym_Light,
    [3] = anon_sym_Light,
  },
  [36] = {
    [1] = anon_sym_Offset,
    [2] = anon_sym_Offset,
    [3] = anon_sym_Offset,
    [4] = anon_sym_Offset,
    [5] = anon_sym_Offset,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__expression, 3,
    sym__expression,
    anon_sym_Light,
    anon_sym_Offset,
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 20,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 23,
  [31] = 31,
  [32] = 24,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 24,
  [41] = 20,
  [42] = 23,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 25,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 24,
  [53] = 23,
  [54] = 19,
  [55] = 51,
  [56] = 56,
  [57] = 50,
  [58] = 58,
  [59] = 50,
  [60] = 51,
  [61] = 61,
  [62] = 61,
  [63] = 61,
  [64] = 61,
  [65] = 65,
  [66] = 66,
  [67] = 8,
  [68] = 68,
  [69] = 9,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 7,
  [76] = 6,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 5,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 10,
  [89] = 11,
  [90] = 90,
  [91] = 49,
  [92] = 8,
  [93] = 5,
  [94] = 10,
  [95] = 6,
  [96] = 7,
  [97] = 9,
  [98] = 11,
  [99] = 99,
  [100] = 18,
  [101] = 101,
  [102] = 28,
  [103] = 29,
  [104] = 31,
  [105] = 105,
  [106] = 33,
  [107] = 34,
  [108] = 35,
  [109] = 36,
  [110] = 110,
  [111] = 37,
  [112] = 38,
  [113] = 113,
  [114] = 39,
  [115] = 43,
  [116] = 44,
  [117] = 46,
  [118] = 49,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 122,
  [125] = 123,
  [126] = 126,
  [127] = 127,
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 126,
  [132] = 127,
  [133] = 126,
  [134] = 130,
  [135] = 130,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 43,
  [140] = 138,
  [141] = 39,
  [142] = 142,
  [143] = 143,
  [144] = 38,
  [145] = 37,
  [146] = 36,
  [147] = 35,
  [148] = 143,
  [149] = 34,
  [150] = 150,
  [151] = 33,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 153,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 154,
  [166] = 44,
  [167] = 163,
  [168] = 168,
  [169] = 46,
  [170] = 161,
  [171] = 171,
  [172] = 155,
  [173] = 163,
  [174] = 157,
  [175] = 164,
  [176] = 158,
  [177] = 177,
  [178] = 159,
  [179] = 160,
  [180] = 161,
  [181] = 160,
  [182] = 168,
  [183] = 162,
  [184] = 184,
  [185] = 185,
  [186] = 184,
  [187] = 162,
  [188] = 188,
  [189] = 155,
  [190] = 154,
  [191] = 184,
  [192] = 153,
  [193] = 150,
  [194] = 159,
  [195] = 142,
  [196] = 157,
  [197] = 31,
  [198] = 143,
  [199] = 199,
  [200] = 168,
  [201] = 29,
  [202] = 184,
  [203] = 152,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 150,
  [208] = 138,
  [209] = 152,
  [210] = 199,
  [211] = 142,
  [212] = 212,
  [213] = 28,
  [214] = 18,
  [215] = 199,
  [216] = 199,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 219,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 219,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 231,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 233,
  [240] = 240,
  [241] = 232,
  [242] = 242,
  [243] = 231,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 232,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 255,
  [258] = 252,
  [259] = 253,
  [260] = 260,
  [261] = 261,
  [262] = 254,
  [263] = 263,
  [264] = 263,
  [265] = 260,
  [266] = 266,
  [267] = 267,
  [268] = 267,
  [269] = 253,
  [270] = 254,
  [271] = 252,
  [272] = 267,
  [273] = 253,
  [274] = 274,
  [275] = 267,
  [276] = 276,
  [277] = 277,
  [278] = 260,
  [279] = 279,
  [280] = 261,
  [281] = 281,
  [282] = 282,
  [283] = 277,
  [284] = 256,
  [285] = 256,
  [286] = 256,
  [287] = 46,
  [288] = 288,
  [289] = 43,
  [290] = 290,
  [291] = 290,
  [292] = 290,
  [293] = 290,
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
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 233,
  [347] = 58,
  [348] = 238,
  [349] = 56,
  [350] = 249,
  [351] = 242,
  [352] = 235,
  [353] = 240,
  [354] = 237,
  [355] = 233,
  [356] = 244,
  [357] = 246,
  [358] = 245,
  [359] = 248,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 367,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 370,
  [373] = 365,
  [374] = 374,
  [375] = 375,
  [376] = 365,
  [377] = 377,
  [378] = 378,
  [379] = 367,
  [380] = 380,
  [381] = 370,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 382,
  [387] = 382,
  [388] = 382,
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
  [399] = 394,
  [400] = 394,
  [401] = 401,
  [402] = 402,
  [403] = 392,
  [404] = 404,
  [405] = 405,
  [406] = 394,
  [407] = 392,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 391,
  [417] = 390,
  [418] = 418,
  [419] = 392,
  [420] = 391,
  [421] = 390,
  [422] = 391,
  [423] = 390,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
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
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
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
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
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
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5870
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11499
        ? (c < 8118
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8178
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)))
              : (c <= 8180 || (c < 8336
                ? (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8495
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))
              : (c <= 8505 || (c < 8526
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)
                : (c <= 8526 || (c < 11264
                  ? (c >= 8544 && c <= 8584)
                  : c <= 11492)))))))))
        : (c <= 11502 || (c < 12704
          ? (c < 11728
            ? (c < 11648
              ? (c < 11565
                ? (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : c <= 11631)))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))
            : (c <= 11734 || (c < 12353
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66864
          ? (c < 66176
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65856
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65908)))))
            : (c <= 66204 || (c < 66504
              ? (c < 66384
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66736
                ? (c < 66560
                  ? (c >= 66513 && c <= 66517)
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

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6823
    ? (c < 2990
      ? (c < 2384
        ? (c < 1519
          ? (c < 890
            ? (c < 248
              ? (c < 186
                ? (c < 170
                  ? c == '_'
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : c <= 246)))
              : (c <= 705 || (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : c <= 887)))))
            : (c <= 893 || (c < 1015
              ? (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))
              : (c <= 1153 || (c < 1369
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))))))
          : (c <= 1522 || (c < 2036
            ? (c < 1786
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : c <= 1775)))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1994
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2144
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))
              : (c <= 2154 || (c < 2208
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
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
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3205
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6108
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5905 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)))))
            : (c <= 6108 || (c < 6480
              ? (c < 6314
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))
              : (c <= 6509 || (c < 6576
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)
                : (c <= 6601 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : c <= 6740)))))))))))))
    : (c <= 6823 || (c < 43261
      ? (c < 11499
        ? (c < 8118
          ? (c < 7413
            ? (c < 7245
              ? (c < 7086
                ? (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : c <= 7203)))
              : (c <= 7247 || (c < 7357
                ? (c < 7296
                  ? (c >= 7258 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : c <= 7411)))))
            : (c <= 7414 || (c < 8016
              ? (c < 7960
                ? (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : c <= 8013)))
              : (c <= 8023 || (c < 8029
                ? (c < 8027
                  ? c == 8025
                  : c <= 8027)
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8178
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)))
              : (c <= 8180 || (c < 8336
                ? (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8495
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))
              : (c <= 8505 || (c < 8526
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)
                : (c <= 8526 || (c < 11264
                  ? (c >= 8544 && c <= 8584)
                  : c <= 11492)))))))))
        : (c <= 11502 || (c < 12704
          ? (c < 11728
            ? (c < 11648
              ? (c < 11565
                ? (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : c <= 11631)))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))
            : (c <= 11734 || (c < 12353
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66864
          ? (c < 66176
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65856
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65908)))))
            : (c <= 66204 || (c < 66504
              ? (c < 66384
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66736
                ? (c < 66560
                  ? (c >= 66513 && c <= 66517)
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

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6917
    ? (c < 3024
      ? (c < 2392
        ? (c < 1568
          ? (c < 895
            ? (c < 710
              ? (c < 192
                ? (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))
              : (c <= 721 || (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : c <= 893)))))
            : (c <= 895 || (c < 1162
              ? (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)))
              : (c <= 1327 || (c < 1376
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))))))
          : (c <= 1610 || (c < 2042
            ? (c < 1791
              ? (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : c <= 1788)))
              : (c <= 1791 || (c < 1969
                ? (c < 1810
                  ? c == 1808
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))
                : (c <= 1969 || (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)))))
            : (c <= 2042 || (c < 2160
              ? (c < 2088
                ? (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))
                : (c <= 2088 || (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)))
              : (c <= 2183 || (c < 2308
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2565
            ? (c < 2486
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2649
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))
              : (c <= 2652 || (c < 2693
                ? (c < 2674
                  ? c == 2654
                  : c <= 2676)
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2809)))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2949
                ? (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)))
              : (c <= 2970 || (c < 2979
                ? (c < 2974
                  ? c == 2972
                  : c <= 2975)
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3165
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))
              : (c <= 3165 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6176
            ? (c < 5919
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : c <= 5905)))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6264 || (c < 6512
              ? (c < 6320
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))
              : (c <= 6516 || (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))))))))))))
    : (c <= 6963 || (c < 43274
      ? (c < 11506
        ? (c < 8126
          ? (c < 7418
            ? (c < 7258
              ? (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))
              : (c <= 7293 || (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))))
            : (c <= 7418 || (c < 8025
              ? (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))
              : (c <= 8025 || (c < 8031
                ? (c < 8029
                  ? c == 8027
                  : c <= 8029)
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8124)))))))
          : (c <= 8126 || (c < 8469
            ? (c < 8182
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : c <= 8180)))
              : (c <= 8188 || (c < 8450
                ? (c < 8319
                  ? c == 8305
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : c <= 8467)))))
            : (c <= 8469 || (c < 8508
              ? (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))
              : (c <= 8511 || (c < 8544
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)
                : (c <= 8584 || (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : c <= 11502)))))))))
        : (c <= 11507 || (c < 12784
          ? (c < 11736
            ? (c < 11680
              ? (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))
              : (c <= 11686 || (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))))
            : (c <= 11742 || (c < 12445
              ? (c < 12337
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))
                : (c <= 12341 || (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : c <= 12438)))
              : (c <= 12447 || (c < 12549
                ? (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)
                : (c <= 12591 || (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12735)))))))
          : (c <= 12799 || (c < 42891
            ? (c < 42512
              ? (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))
              : (c <= 42527 || (c < 42656
                ? (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42735 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : c <= 42888)))))
            : (c <= 42954 || (c < 43020
              ? (c < 42994
                ? (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43009 || (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)))
              : (c <= 43042 || (c < 43250
                ? (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : c <= 43262)))))))))))
      : (c <= 43301 || (c < 65382
        ? (c < 43824
          ? (c < 43697
            ? (c < 43514
              ? (c < 43471
                ? (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))
                : (c <= 43471 || (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : c <= 43503)))
              : (c <= 43518 || (c < 43616
                ? (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : (c <= 43586 || (c >= 43588 && c <= 43595)))
                : (c <= 43638 || (c < 43646
                  ? c == 43642
                  : c <= 43695)))))
            : (c <= 43697 || (c < 43762
              ? (c < 43714
                ? (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))
                : (c <= 43714 || (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)))
              : (c <= 43764 || (c < 43793
                ? (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)
                : (c <= 43798 || (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : c <= 43822)))))))
          : (c <= 43866 || (c < 64312
            ? (c < 63744
              ? (c < 55203
                ? (c < 43888
                  ? (c >= 43868 && c <= 43881)
                  : (c <= 44002 || c == 44032))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : c <= 55291)))
              : (c <= 64109 || (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64285 || (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : c <= 64310)))))
            : (c <= 64316 || (c < 64914
              ? (c < 64326
                ? (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)))
              : (c <= 64967 || (c < 65142
                ? (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)
                : (c <= 65276 || (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : c <= 65370)))))))))
        : (c <= 65470 || (c < 66928
          ? (c < 66208
            ? (c < 65576
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : c <= 65574)))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66176
                  ? (c >= 65856 && c <= 65908)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66513
              ? (c < 66432
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))
                : (c <= 66461 || (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)))
              : (c <= 66517 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
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

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6108
    ? (c < 2974
      ? (c < 2486
        ? (c < 1479
          ? (c < 902
            ? (c < 710
              ? (c < 186
                ? (c < 173
                  ? c == 170
                  : (c <= 173 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 768
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))))))
            : (c <= 902 || (c < 1329
              ? (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1155
                  ? (c >= 1015 && c <= 1153)
                  : (c <= 1159 || (c >= 1162 && c <= 1327)))))
              : (c <= 1366 || (c < 1471
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1425 && c <= 1469)))
                : (c <= 1471 || (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : c <= 1477)))))))
          : (c <= 1479 || (c < 2045
            ? (c < 1749
              ? (c < 1552
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1536 && c <= 1541)))
                : (c <= 1562 || (c < 1568
                  ? c == 1564
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))))
              : (c <= 1757 || (c < 1807
                ? (c < 1770
                  ? (c >= 1759 && c <= 1768)
                  : (c <= 1788 || c == 1791))
                : (c <= 1866 || (c < 1984
                  ? (c >= 1869 && c <= 1969)
                  : (c <= 2037 || c == 2042))))))
            : (c <= 2045 || (c < 2406
              ? (c < 2160
                ? (c < 2112
                  ? (c >= 2048 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2192
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2193 || (c >= 2200 && c <= 2403)))))
              : (c <= 2415 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2738
          ? (c < 2613
            ? (c < 2556
              ? (c < 2519
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))
                : (c <= 2519 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2545)))))
              : (c <= 2556 || (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))))
            : (c <= 2614 || (c < 2654
              ? (c < 2631
                ? (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))
                : (c <= 2632 || (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2869
            ? (c < 2809
              ? (c < 2763
                ? (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))))
              : (c <= 2815 || (c < 2835
                ? (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2929
              ? (c < 2901
                ? (c < 2887
                  ? (c >= 2876 && c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))
                : (c <= 2903 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2915 || (c >= 2918 && c <= 2927)))))
              : (c <= 2929 || (c < 2962
                ? (c < 2949
                  ? (c >= 2946 && c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 3716
        ? (c < 3285
          ? (c < 3146
            ? (c < 3031
              ? (c < 3006
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3010 || (c < 3018
                  ? (c >= 3014 && c <= 3016)
                  : (c <= 3021 || c == 3024))))
              : (c <= 3031 || (c < 3090
                ? (c < 3072
                  ? (c >= 3046 && c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3132
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3140 || (c >= 3142 && c <= 3144)))))))
            : (c <= 3149 || (c < 3214
              ? (c < 3168
                ? (c < 3160
                  ? (c >= 3157 && c <= 3158)
                  : (c <= 3162 || c == 3165))
                : (c <= 3171 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))))
              : (c <= 3216 || (c < 3260
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3268 || (c < 3274
                  ? (c >= 3270 && c <= 3272)
                  : c <= 3277)))))))
          : (c <= 3286 || (c < 3461
            ? (c < 3398
              ? (c < 3313
                ? (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))
              : (c <= 3400 || (c < 3430
                ? (c < 3412
                  ? (c >= 3402 && c <= 3406)
                  : (c <= 3415 || (c >= 3423 && c <= 3427)))
                : (c <= 3439 || (c < 3457
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3459)))))
            : (c <= 3478 || (c < 3544
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))))
              : (c <= 3551 || (c < 3648
                ? (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3571 || (c >= 3585 && c <= 3642)))
                : (c <= 3662 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))))))
        : (c <= 3716 || (c < 4696
          ? (c < 3902
            ? (c < 3792
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))))
              : (c <= 3801 || (c < 3872
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3864 && c <= 3865)))
                : (c <= 3881 || (c < 3895
                  ? c == 3893
                  : (c <= 3895 || c == 3897))))))
            : (c <= 3911 || (c < 4256
              ? (c < 3993
                ? (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))
                : (c <= 4028 || (c < 4096
                  ? c == 4038
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))))
          : (c <= 4696 || (c < 5024
            ? (c < 4802
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c >= 4957 && c <= 4959)
                  : c <= 5007)))))
            : (c <= 5109 || (c < 5919
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))))
              : (c <= 5940 || (c < 6002
                ? (c < 5984
                  ? (c >= 5952 && c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6003 || (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : c <= 6103)))))))))))))
    : (c <= 6109 || (c < 42891
      ? (c < 8336
        ? (c < 7357
          ? (c < 6752
            ? (c < 6448
              ? (c < 6272
                ? (c < 6155
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6443)))))
              : (c <= 6459 || (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))))))
            : (c <= 6780 || (c < 7019
              ? (c < 6832
                ? (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6845 || (c < 6912
                  ? (c >= 6847 && c <= 6862)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7027 || (c < 7245
                ? (c < 7168
                  ? (c >= 7040 && c <= 7155)
                  : (c <= 7223 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))))
          : (c <= 7359 || (c < 8130
            ? (c < 8025
              ? (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))
              : (c <= 8025 || (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : c <= 8126)))))
            : (c <= 8132 || (c < 8234
              ? (c < 8160
                ? (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8203 && c <= 8207)))))
              : (c <= 8238 || (c < 8294
                ? (c < 8276
                  ? (c >= 8255 && c <= 8256)
                  : (c <= 8276 || (c >= 8288 && c <= 8292)))
                : (c <= 8303 || (c < 8319
                  ? c == 8305
                  : c <= 8319)))))))))
        : (c <= 8348 || (c < 11720
          ? (c < 8526
            ? (c < 8473
              ? (c < 8450
                ? (c < 8417
                  ? (c >= 8400 && c <= 8412)
                  : (c <= 8417 || (c >= 8421 && c <= 8432)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))))
              : (c <= 8477 || (c < 8490
                ? (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))))
            : (c <= 8526 || (c < 11631
              ? (c < 11520
                ? (c < 11264
                  ? (c >= 8544 && c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))))
          : (c <= 11726 || (c < 12593
            ? (c < 12344
              ? (c < 11823
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12335 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12449
                ? (c < 12441
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12442 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))
            : (c <= 12686 || (c < 42240
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42623
                ? (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : (c <= 42607 || (c >= 42612 && c <= 42621)))
                : (c <= 42737 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : c <= 42888)))))))))))
      : (c <= 42954 || (c < 65296
        ? (c < 43868
          ? (c < 43488
            ? (c < 43216
              ? (c < 42994
                ? (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43047 || (c < 43072
                  ? c == 43052
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))))
              : (c <= 43225 || (c < 43312
                ? (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))
                : (c <= 43347 || (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))))))
            : (c <= 43518 || (c < 43762
              ? (c < 43616
                ? (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))
                : (c <= 43638 || (c < 43739
                  ? (c >= 43642 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))))
              : (c <= 43766 || (c < 43808
                ? (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : c <= 43866)))))))
          : (c <= 43881 || (c < 64318
            ? (c < 63744
              ? (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))
              : (c <= 64109 || (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64296 || (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : c <= 64316)))))
            : (c <= 64318 || (c < 65024
              ? (c < 64467
                ? (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))
                : (c <= 64829 || (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))
              : (c <= 65039 || (c < 65136
                ? (c < 65075
                  ? (c >= 65056 && c <= 65071)
                  : (c <= 65076 || (c >= 65101 && c <= 65103)))
                : (c <= 65140 || (c < 65279
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65279)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65664
            ? (c < 65498
              ? (c < 65382
                ? (c < 65343
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65343 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))
              : (c <= 65500 || (c < 65576
                ? (c < 65536
                  ? (c >= 65529 && c <= 65531)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))))))
            : (c <= 65786 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? c == 66272
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67456
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : c <= 67431)))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6103
    ? (c < 2969
      ? (c < 2474
        ? (c < 1473
          ? (c < 890
            ? (c < 216
              ? (c < 173
                ? (c < '_'
                  ? (c >= '0' && c <= '9')
                  : (c <= '_' || c == 170))
                : (c <= 173 || (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 768
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1155
              ? (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))))
              : (c <= 1159 || (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1471
                  ? (c >= 1425 && c <= 1469)
                  : c <= 1471)))))))
          : (c <= 1474 || (c < 1984
            ? (c < 1568
              ? (c < 1519
                ? (c < 1479
                  ? (c >= 1476 && c <= 1477)
                  : (c <= 1479 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1552
                  ? (c >= 1536 && c <= 1541)
                  : (c <= 1562 || c == 1564))))
              : (c <= 1641 || (c < 1770
                ? (c < 1749
                  ? (c >= 1646 && c <= 1747)
                  : (c <= 1757 || (c >= 1759 && c <= 1768)))
                : (c <= 1788 || (c < 1807
                  ? c == 1791
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2037 || (c < 2192
              ? (c < 2112
                ? (c < 2045
                  ? c == 2042
                  : (c <= 2045 || (c >= 2048 && c <= 2093)))
                : (c <= 2139 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2193 || (c < 2437
                ? (c < 2406
                  ? (c >= 2200 && c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))))))))
        : (c <= 2480 || (c < 2707
          ? (c < 2602
            ? (c < 2527
              ? (c < 2503
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || (c >= 2492 && c <= 2500)))
                : (c <= 2504 || (c < 2519
                  ? (c >= 2507 && c <= 2510)
                  : (c <= 2519 || (c >= 2524 && c <= 2525)))))
              : (c <= 2531 || (c < 2561
                ? (c < 2556
                  ? (c >= 2534 && c <= 2545)
                  : (c <= 2556 || c == 2558))
                : (c <= 2563 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))))
            : (c <= 2608 || (c < 2641
              ? (c < 2620
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2620 || (c < 2631
                  ? (c >= 2622 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))))
              : (c <= 2641 || (c < 2689
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2677)))
                : (c <= 2691 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2858
            ? (c < 2784
              ? (c < 2748
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2757 || (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))))
              : (c <= 2787 || (c < 2821
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2911
              ? (c < 2887
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))
                : (c <= 2888 || (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))))
              : (c <= 2915 || (c < 2949
                ? (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2929 || (c >= 2946 && c <= 2947)))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)))))))))))
      : (c <= 2970 || (c < 3713
        ? (c < 3270
          ? (c < 3132
            ? (c < 3018
              ? (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))))
              : (c <= 3021 || (c < 3072
                ? (c < 3031
                  ? c == 3024
                  : (c <= 3031 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))))
            : (c <= 3140 || (c < 3200
              ? (c < 3160
                ? (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))))
              : (c <= 3203 || (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3268)))))))
          : (c <= 3272 || (c < 3457
            ? (c < 3342
              ? (c < 3296
                ? (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))
                : (c <= 3299 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3406)))
                : (c <= 3415 || (c < 3430
                  ? (c >= 3423 && c <= 3427)
                  : (c <= 3439 || (c >= 3450 && c <= 3455)))))))
            : (c <= 3459 || (c < 3542
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3530
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))
              : (c <= 3542 || (c < 3585
                ? (c < 3558
                  ? (c >= 3544 && c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3664
                  ? (c >= 3648 && c <= 3662)
                  : c <= 3673)))))))))
        : (c <= 3714 || (c < 4688
          ? (c < 3897
            ? (c < 3784
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3789 || (c < 3864
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3865 || (c < 3893
                  ? (c >= 3872 && c <= 3881)
                  : (c <= 3893 || c == 3895))))))
            : (c <= 3897 || (c < 4176
              ? (c < 3974
                ? (c < 3913
                  ? (c >= 3902 && c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))
                : (c <= 3991 || (c < 4038
                  ? (c >= 3993 && c <= 4028)
                  : (c <= 4038 || (c >= 4096 && c <= 4169)))))
              : (c <= 4253 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))))
          : (c <= 4694 || (c < 4992
            ? (c < 4800
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4882
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4957
                  ? (c >= 4888 && c <= 4954)
                  : c <= 4959)))))
            : (c <= 5007 || (c < 5888
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5909 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5940)
                  : (c <= 5971 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6016
                  ? (c >= 6002 && c <= 6003)
                  : c <= 6099)))))))))))))
    : (c <= 6103 || (c < 42891
      ? (c < 8336
        ? (c < 7312
          ? (c < 6688
            ? (c < 6432
              ? (c < 6176
                ? (c < 6112
                  ? (c >= 6108 && c <= 6109)
                  : (c <= 6121 || (c >= 6155 && c <= 6169)))
                : (c <= 6264 || (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))))
              : (c <= 6443 || (c < 6528
                ? (c < 6470
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6617 || (c >= 6656 && c <= 6683)))))))
            : (c <= 6750 || (c < 6992
              ? (c < 6823
                ? (c < 6783
                  ? (c >= 6752 && c <= 6780)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6847
                  ? (c >= 6832 && c <= 6845)
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))
              : (c <= 7001 || (c < 7232
                ? (c < 7040
                  ? (c >= 7019 && c <= 7027)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : c <= 7304)))))))
          : (c <= 7354 || (c < 8130
            ? (c < 8016
              ? (c < 7424
                ? (c < 7376
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))))))
            : (c <= 8132 || (c < 8234
              ? (c < 8160
                ? (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8203 && c <= 8207)))))
              : (c <= 8238 || (c < 8294
                ? (c < 8276
                  ? (c >= 8255 && c <= 8256)
                  : (c <= 8276 || (c >= 8288 && c <= 8292)))
                : (c <= 8303 || (c < 8319
                  ? c == 8305
                  : c <= 8319)))))))))
        : (c <= 8348 || (c < 11720
          ? (c < 8526
            ? (c < 8473
              ? (c < 8450
                ? (c < 8417
                  ? (c >= 8400 && c <= 8412)
                  : (c <= 8417 || (c >= 8421 && c <= 8432)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))))
              : (c <= 8477 || (c < 8490
                ? (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))))
            : (c <= 8526 || (c < 11631
              ? (c < 11520
                ? (c < 11264
                  ? (c >= 8544 && c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))))
          : (c <= 11726 || (c < 12593
            ? (c < 12344
              ? (c < 11823
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12335 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12449
                ? (c < 12441
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12442 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))
            : (c <= 12686 || (c < 42240
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42623
                ? (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : (c <= 42607 || (c >= 42612 && c <= 42621)))
                : (c <= 42737 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : c <= 42888)))))))))))
      : (c <= 42954 || (c < 65296
        ? (c < 43868
          ? (c < 43488
            ? (c < 43216
              ? (c < 42994
                ? (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43047 || (c < 43072
                  ? c == 43052
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))))
              : (c <= 43225 || (c < 43312
                ? (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))
                : (c <= 43347 || (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))))))
            : (c <= 43518 || (c < 43762
              ? (c < 43616
                ? (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))
                : (c <= 43638 || (c < 43739
                  ? (c >= 43642 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))))
              : (c <= 43766 || (c < 43808
                ? (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : c <= 43866)))))))
          : (c <= 43881 || (c < 64318
            ? (c < 63744
              ? (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))
              : (c <= 64109 || (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64296 || (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : c <= 64316)))))
            : (c <= 64318 || (c < 65024
              ? (c < 64467
                ? (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))
                : (c <= 64829 || (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))
              : (c <= 65039 || (c < 65136
                ? (c < 65075
                  ? (c >= 65056 && c <= 65071)
                  : (c <= 65076 || (c >= 65101 && c <= 65103)))
                : (c <= 65140 || (c < 65279
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65279)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65664
            ? (c < 65498
              ? (c < 65382
                ? (c < 65343
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65343 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))
              : (c <= 65500 || (c < 65576
                ? (c < 65536
                  ? (c >= 65529 && c <= 65531)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))))))
            : (c <= 65786 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? c == 66272
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67456
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : c <= 67431)))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6016
    ? (c < 2962
      ? (c < 2447
        ? (c < 1425
          ? (c < 768
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 173
                  ? c == 170
                  : (c <= 173 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))))))
            : (c <= 884 || (c < 931
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))
              : (c <= 1013 || (c < 1329
                ? (c < 1155
                  ? (c >= 1015 && c <= 1153)
                  : (c <= 1159 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1469 || (c < 1807
            ? (c < 1552
              ? (c < 1479
                ? (c < 1473
                  ? c == 1471
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1536 && c <= 1541)))))
              : (c <= 1562 || (c < 1749
                ? (c < 1568
                  ? c == 1564
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1757 || (c < 1770
                  ? (c >= 1759 && c <= 1768)
                  : (c <= 1788 || c == 1791))))))
            : (c <= 1866 || (c < 2160
              ? (c < 2045
                ? (c < 1984
                  ? (c >= 1869 && c <= 1969)
                  : (c <= 2037 || c == 2042))
                : (c <= 2045 || (c < 2112
                  ? (c >= 2048 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))))
              : (c <= 2183 || (c < 2406
                ? (c < 2192
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2193 || (c >= 2200 && c <= 2403)))
                : (c <= 2415 || (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : c <= 2444)))))))))
        : (c <= 2448 || (c < 2693
          ? (c < 2575
            ? (c < 2519
              ? (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))
              : (c <= 2519 || (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2545)))
                : (c <= 2556 || (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))))))
            : (c <= 2576 || (c < 2631
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2654
                ? (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : c <= 2691)))))))
          : (c <= 2701 || (c < 2835
            ? (c < 2763
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))))
              : (c <= 2765 || (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))
                : (c <= 2815 || (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))))
            : (c <= 2856 || (c < 2908
              ? (c < 2876
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2884 || (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))
              : (c <= 2909 || (c < 2946
                ? (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2927 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))))))))))
      : (c <= 2965 || (c < 3664
        ? (c < 3260
          ? (c < 3114
            ? (c < 3014
              ? (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))))
              : (c <= 3016 || (c < 3046
                ? (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))
            : (c <= 3129 || (c < 3174
              ? (c < 3157
                ? (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))
              : (c <= 3183 || (c < 3218
                ? (c < 3205
                  ? (c >= 3200 && c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))))))
          : (c <= 3268 || (c < 3450
            ? (c < 3328
              ? (c < 3293
                ? (c < 3274
                  ? (c >= 3270 && c <= 3272)
                  : (c <= 3277 || (c >= 3285 && c <= 3286)))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3402
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3415)
                  : (c <= 3427 || (c >= 3430 && c <= 3439)))))))
            : (c <= 3455 || (c < 3535
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))
              : (c <= 3540 || (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3648
                  ? (c >= 3585 && c <= 3642)
                  : c <= 3662)))))))))
        : (c <= 3673 || (c < 4682
          ? (c < 3895
            ? (c < 3782
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3872
                  ? (c >= 3864 && c <= 3865)
                  : (c <= 3881 || c == 3893))))))
            : (c <= 3895 || (c < 4096
              ? (c < 3953
                ? (c < 3902
                  ? c == 3897
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3972 || (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || c == 4038))))
              : (c <= 4169 || (c < 4301
                ? (c < 4256
                  ? (c >= 4176 && c <= 4253)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))))
          : (c <= 4685 || (c < 4957
            ? (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))
            : (c <= 4959 || (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))
                : (c <= 5996 || (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6003)))))))))))))
    : (c <= 6099 || (c < 42786
      ? (c < 8319
        ? (c < 7296
          ? (c < 6656
            ? (c < 6400
              ? (c < 6155
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))
              : (c <= 6430 || (c < 6512
                ? (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6617)))))))
            : (c <= 6683 || (c < 6912
              ? (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6845 || (c >= 6847 && c <= 6862)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7019
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : c <= 7293)))))))
          : (c <= 7304 || (c < 8126
            ? (c < 8008
              ? (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))
            : (c <= 8126 || (c < 8203
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8207 || (c < 8288
                ? (c < 8255
                  ? (c >= 8234 && c <= 8238)
                  : (c <= 8256 || c == 8276))
                : (c <= 8292 || (c < 8305
                  ? (c >= 8294 && c <= 8303)
                  : c <= 8305)))))))))
        : (c <= 8319 || (c < 11712
          ? (c < 8517
            ? (c < 8469
              ? (c < 8421
                ? (c < 8400
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8412 || c == 8417))
                : (c <= 8432 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? c == 8526
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))))
          : (c <= 11718 || (c < 12549
            ? (c < 12337
              ? (c < 11744
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11775 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12335)))))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12441 && c <= 12442)))
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))
            : (c <= 12591 || (c < 42192
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))))
              : (c <= 42237 || (c < 42612
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42607)))
                : (c <= 42621 || (c < 42775
                  ? (c >= 42623 && c <= 42737)
                  : c <= 42783)))))))))))
      : (c <= 42888 || (c < 65296
        ? (c < 43824
          ? (c < 43471
            ? (c < 43136
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43052
                  ? (c >= 42994 && c <= 43047)
                  : (c <= 43052 || (c >= 43072 && c <= 43123)))))
              : (c <= 43205 || (c < 43261
                ? (c < 43232
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43309 || (c < 43360
                  ? (c >= 43312 && c <= 43347)
                  : (c <= 43388 || (c >= 43392 && c <= 43456)))))))
            : (c <= 43481 || (c < 43744
              ? (c < 43600
                ? (c < 43520
                  ? (c >= 43488 && c <= 43518)
                  : (c <= 43574 || (c >= 43584 && c <= 43597)))
                : (c <= 43609 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))
              : (c <= 43759 || (c < 43793
                ? (c < 43777
                  ? (c >= 43762 && c <= 43766)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : c <= 43822)))))))
          : (c <= 43866 || (c < 64318
            ? (c < 55243
              ? (c < 44016
                ? (c < 43888
                  ? (c >= 43868 && c <= 43881)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55203
                  ? c == 44032
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64298
                  ? (c >= 64285 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))))))
            : (c <= 64318 || (c < 65024
              ? (c < 64467
                ? (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))
                : (c <= 64829 || (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))
              : (c <= 65039 || (c < 65136
                ? (c < 65075
                  ? (c >= 65056 && c <= 65071)
                  : (c <= 65076 || (c >= 65101 && c <= 65103)))
                : (c <= 65140 || (c < 65279
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65279)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65664
            ? (c < 65498
              ? (c < 65382
                ? (c < 65343
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65343 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))
              : (c <= 65500 || (c < 65576
                ? (c < 65536
                  ? (c >= 65529 && c <= 65531)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))))))
            : (c <= 65786 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? c == 66272
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67456
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : c <= 67431)))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
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
      if (eof) ADVANCE(51);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(77);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') SKIP(47)
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '#') ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(77);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '{') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(10)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '}') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '+') ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 46:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 47:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(46)
      END_STATE();
    case 48:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(48)
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(77);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') SKIP(49)
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '|') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(88);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_states_declaration_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '|') ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_frame_sprite_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_frame_sprite_token1);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_frame_sprite_token1);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_frame_sprite_token2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_frame_sprite_token3);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__frame_keyword_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(117);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__interpreted_string_literal_content);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__interpreted_string_literal_content);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__interpreted_string_literal_content);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__interpreted_string_literal_content);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__interpreted_string_literal_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(117);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'D') ADVANCE(1);
      if (lookahead == 'F') ADVANCE(2);
      if (lookahead == 'L') ADVANCE(3);
      if (lookahead == 'O') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'F') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'G') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'F') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_ui);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'H') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 'U') ADVANCE(139);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_play);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 139:
      if (lookahead == 'L') ADVANCE(171);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LIGHT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_Light);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(173);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_light);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(195);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_Offset);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_STATES);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_States);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 183:
      if (lookahead == 'h') ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_offset);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_states);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DEFAULT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_Default);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_virtual);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_clearscope);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_virtualscope);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 50},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 50},
  [92] = {.lex_state = 50},
  [93] = {.lex_state = 50},
  [94] = {.lex_state = 50},
  [95] = {.lex_state = 50},
  [96] = {.lex_state = 50},
  [97] = {.lex_state = 50},
  [98] = {.lex_state = 50},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 50},
  [123] = {.lex_state = 50},
  [124] = {.lex_state = 50},
  [125] = {.lex_state = 50},
  [126] = {.lex_state = 16},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 16},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 16},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 16},
  [139] = {.lex_state = 50},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 50},
  [142] = {.lex_state = 16},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 50},
  [145] = {.lex_state = 50},
  [146] = {.lex_state = 50},
  [147] = {.lex_state = 50},
  [148] = {.lex_state = 16},
  [149] = {.lex_state = 50},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 50},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 16},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 16},
  [158] = {.lex_state = 16},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 16},
  [161] = {.lex_state = 16},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 50},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 16},
  [169] = {.lex_state = 50},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 16},
  [173] = {.lex_state = 16},
  [174] = {.lex_state = 16},
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 16},
  [182] = {.lex_state = 16},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 16},
  [185] = {.lex_state = 16},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 16},
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 16},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 16},
  [197] = {.lex_state = 50},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 16},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 50},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 16},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 16},
  [210] = {.lex_state = 16},
  [211] = {.lex_state = 16},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 50},
  [214] = {.lex_state = 50},
  [215] = {.lex_state = 16},
  [216] = {.lex_state = 16},
  [217] = {.lex_state = 16},
  [218] = {.lex_state = 50},
  [219] = {.lex_state = 50},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 50},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 50},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 50},
  [232] = {.lex_state = 50},
  [233] = {.lex_state = 16},
  [234] = {.lex_state = 50},
  [235] = {.lex_state = 16},
  [236] = {.lex_state = 50},
  [237] = {.lex_state = 16},
  [238] = {.lex_state = 16},
  [239] = {.lex_state = 16},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 50},
  [242] = {.lex_state = 16},
  [243] = {.lex_state = 50},
  [244] = {.lex_state = 16},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 50},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 16},
  [250] = {.lex_state = 50},
  [251] = {.lex_state = 50},
  [252] = {.lex_state = 50},
  [253] = {.lex_state = 50},
  [254] = {.lex_state = 50},
  [255] = {.lex_state = 50},
  [256] = {.lex_state = 50},
  [257] = {.lex_state = 50},
  [258] = {.lex_state = 50},
  [259] = {.lex_state = 50},
  [260] = {.lex_state = 50},
  [261] = {.lex_state = 50},
  [262] = {.lex_state = 50},
  [263] = {.lex_state = 50},
  [264] = {.lex_state = 50},
  [265] = {.lex_state = 50},
  [266] = {.lex_state = 50},
  [267] = {.lex_state = 50},
  [268] = {.lex_state = 50},
  [269] = {.lex_state = 50},
  [270] = {.lex_state = 50},
  [271] = {.lex_state = 50},
  [272] = {.lex_state = 50},
  [273] = {.lex_state = 50},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 50},
  [276] = {.lex_state = 50},
  [277] = {.lex_state = 50},
  [278] = {.lex_state = 50},
  [279] = {.lex_state = 50},
  [280] = {.lex_state = 50},
  [281] = {.lex_state = 50},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 50},
  [284] = {.lex_state = 50},
  [285] = {.lex_state = 50},
  [286] = {.lex_state = 50},
  [287] = {.lex_state = 50},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 16},
  [290] = {.lex_state = 50},
  [291] = {.lex_state = 50},
  [292] = {.lex_state = 50},
  [293] = {.lex_state = 50},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 16},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 16},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 16},
  [329] = {.lex_state = 16},
  [330] = {.lex_state = 16},
  [331] = {.lex_state = 20},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 20},
  [335] = {.lex_state = 20},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 16},
  [345] = {.lex_state = 16},
  [346] = {.lex_state = 20},
  [347] = {.lex_state = 20},
  [348] = {.lex_state = 20},
  [349] = {.lex_state = 20},
  [350] = {.lex_state = 20},
  [351] = {.lex_state = 20},
  [352] = {.lex_state = 20},
  [353] = {.lex_state = 20},
  [354] = {.lex_state = 20},
  [355] = {.lex_state = 20},
  [356] = {.lex_state = 20},
  [357] = {.lex_state = 20},
  [358] = {.lex_state = 20},
  [359] = {.lex_state = 20},
  [360] = {.lex_state = 20},
  [361] = {.lex_state = 20},
  [362] = {.lex_state = 20},
  [363] = {.lex_state = 20},
  [364] = {.lex_state = 20},
  [365] = {.lex_state = 19},
  [366] = {.lex_state = 20},
  [367] = {.lex_state = 19},
  [368] = {.lex_state = 19},
  [369] = {.lex_state = 17},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 19},
  [374] = {.lex_state = 20},
  [375] = {.lex_state = 20},
  [376] = {.lex_state = 19},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 19},
  [380] = {.lex_state = 19},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Default] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_DEFAULT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_States] = ACTIONS(1),
    [anon_sym_states] = ACTIONS(1),
    [anon_sym_STATES] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_Offset] = ACTIONS(1),
    [anon_sym_offset] = ACTIONS(1),
    [anon_sym_OFFSET] = ACTIONS(1),
    [anon_sym_Light] = ACTIONS(1),
    [anon_sym_light] = ACTIONS(1),
    [anon_sym_LIGHT] = ACTIONS(1),
    [anon_sym_clearscope] = ACTIONS(1),
    [anon_sym_virtualscope] = ACTIONS(1),
    [anon_sym_play] = ACTIONS(1),
    [anon_sym_ui] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_transient] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(396),
    [sym__definition] = STATE(282),
    [sym_version_definition] = STATE(313),
    [sym_include_definition] = STATE(313),
    [sym_class_definition] = STATE(313),
    [sym_const_definition] = STATE(313),
    [sym_scope] = STATE(319),
    [sym_modifier] = STATE(319),
    [aux_sym_source_file_repeat1] = STATE(282),
    [aux_sym_class_definition_repeat1] = STATE(319),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_version] = ACTIONS(7),
    [anon_sym_POUNDinclude] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_clearscope] = ACTIONS(15),
    [anon_sym_virtualscope] = ACTIONS(15),
    [anon_sym_play] = ACTIONS(15),
    [anon_sym_ui] = ACTIONS(15),
    [anon_sym_action] = ACTIONS(15),
    [anon_sym_abstract] = ACTIONS(17),
    [anon_sym_virtual] = ACTIONS(19),
    [anon_sym_override] = ACTIONS(17),
    [anon_sym_static] = ACTIONS(17),
    [anon_sym_transient] = ACTIONS(17),
    [anon_sym_extend] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(348),
    [sym__type] = STATE(175),
    [sym_predefined_type] = STATE(330),
    [sym__class_name] = STATE(330),
    [sym__statement] = STATE(364),
    [sym_return_statement] = STATE(348),
    [sym_declaration_statement] = STATE(348),
    [sym_if_statement] = STATE(348),
    [sym_for_statement] = STATE(348),
    [sym_foreach_statement] = STATE(348),
    [sym_generic_statement] = STATE(348),
    [sym__expression] = STATE(290),
    [sym__nonleft_expression] = STATE(277),
    [sym__left_expression] = STATE(92),
    [sym_member_access_expression] = STATE(92),
    [sym_assignment_expression] = STATE(277),
    [sym_binary_expression] = STATE(277),
    [sym_postfix_unary_expression] = STATE(277),
    [sym_prefix_unary_expression] = STATE(277),
    [sym_parenthesized_expression] = STATE(277),
    [sym_vector_expression] = STATE(277),
    [sym_function_expression] = STATE(277),
    [sym_ternary_expression] = STATE(277),
    [sym_string_concat_expression] = STATE(277),
    [sym_subscript_expression] = STATE(92),
    [sym__frame_keyword] = STATE(121),
    [sym__literal] = STATE(277),
    [sym_string_literal] = STATE(277),
    [sym_boolean_literal] = STATE(277),
    [aux_sym_frame_statement_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_int] = ACTIONS(33),
    [anon_sym_float] = ACTIONS(33),
    [anon_sym_double] = ACTIONS(33),
    [anon_sym_string] = ACTIONS(33),
    [anon_sym_bool] = ACTIONS(33),
    [anon_sym_void] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_foreach] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(61),
    [anon_sym_DASH_DASH] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [aux_sym__frame_keyword_token1] = ACTIONS(71),
    [anon_sym_Offset] = ACTIONS(73),
    [anon_sym_offset] = ACTIONS(73),
    [anon_sym_OFFSET] = ACTIONS(73),
    [anon_sym_Light] = ACTIONS(75),
    [anon_sym_light] = ACTIONS(75),
    [anon_sym_LIGHT] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number_literal] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_True] = ACTIONS(81),
    [anon_sym_False] = ACTIONS(81),
  },
  [3] = {
    [sym__expression] = STATE(169),
    [sym__nonleft_expression] = STATE(214),
    [sym__left_expression] = STATE(92),
    [sym_member_access_expression] = STATE(92),
    [sym_assignment_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_postfix_unary_expression] = STATE(214),
    [sym_prefix_unary_expression] = STATE(214),
    [sym_parenthesized_expression] = STATE(214),
    [sym_vector_expression] = STATE(214),
    [sym_function_expression] = STATE(214),
    [sym_ternary_expression] = STATE(214),
    [sym_string_concat_expression] = STATE(214),
    [sym_subscript_expression] = STATE(92),
    [sym__literal] = STATE(214),
    [sym_string_literal] = STATE(214),
    [sym_boolean_literal] = STATE(214),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_int] = ACTIONS(83),
    [anon_sym_float] = ACTIONS(83),
    [anon_sym_double] = ACTIONS(83),
    [anon_sym_string] = ACTIONS(83),
    [anon_sym_bool] = ACTIONS(83),
    [anon_sym_void] = ACTIONS(83),
    [anon_sym_return] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_foreach] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(85),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_BANG_EQ] = ACTIONS(85),
    [anon_sym_AMP_AMP] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_PLUS_PLUS] = ACTIONS(85),
    [anon_sym_DASH_DASH] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [aux_sym__frame_keyword_token1] = ACTIONS(83),
    [anon_sym_Offset] = ACTIONS(83),
    [anon_sym_offset] = ACTIONS(83),
    [anon_sym_OFFSET] = ACTIONS(83),
    [anon_sym_Light] = ACTIONS(83),
    [anon_sym_light] = ACTIONS(83),
    [anon_sym_LIGHT] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_True] = ACTIONS(83),
    [anon_sym_False] = ACTIONS(83),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      aux_sym__frame_keyword_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_number_literal,
    STATE(105), 1,
      aux_sym_frame_statement_repeat1,
    STATE(121), 1,
      sym__frame_keyword,
    STATE(175), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(361), 1,
      sym__statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(73), 3,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
    ACTIONS(75), 3,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(348), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(277), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 22,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(95), 36,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 22,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(99), 36,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 22,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(103), 36,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_EQ,
    ACTIONS(113), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(109), 17,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(107), 35,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 22,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(115), 36,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 22,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(95), 36,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 22,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(119), 36,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [586] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_DASH,
    ACTIONS(138), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      sym_number_literal,
    STATE(110), 1,
      sym__expression,
    ACTIONS(135), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    STATE(67), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(144), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(133), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(107), 9,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(109), 11,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_LBRACK,
    STATE(100), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [675] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(154), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_for,
    ACTIONS(158), 1,
      anon_sym_foreach,
    ACTIONS(160), 1,
      sym_number_literal,
    STATE(164), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(16), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [777] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(154), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_for,
    ACTIONS(158), 1,
      anon_sym_foreach,
    ACTIONS(160), 1,
      sym_number_literal,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(15), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [879] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(154), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_for,
    ACTIONS(158), 1,
      anon_sym_foreach,
    ACTIONS(160), 1,
      sym_number_literal,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(16), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [981] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_return,
    ACTIONS(186), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(192), 1,
      anon_sym_for,
    ACTIONS(195), 1,
      anon_sym_foreach,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      sym_number_literal,
    STATE(164), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(16), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(198), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(207), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(180), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [1083] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(154), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_for,
    ACTIONS(158), 1,
      anon_sym_foreach,
    ACTIONS(160), 1,
      sym_number_literal,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(13), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [1185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 18,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(107), 34,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [1245] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(160), 1,
      sym_number_literal,
    ACTIONS(212), 1,
      anon_sym_if,
    ACTIONS(214), 1,
      anon_sym_for,
    ACTIONS(216), 1,
      anon_sym_foreach,
    STATE(164), 1,
      sym__type,
    STATE(249), 1,
      sym__statement,
    STATE(290), 1,
      sym__expression,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [1343] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_number_literal,
    ACTIONS(218), 1,
      anon_sym_if,
    ACTIONS(220), 1,
      anon_sym_for,
    ACTIONS(222), 1,
      anon_sym_foreach,
    STATE(175), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(346), 1,
      sym__statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(348), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(277), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [1441] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(160), 1,
      sym_number_literal,
    ACTIONS(212), 1,
      anon_sym_if,
    ACTIONS(214), 1,
      anon_sym_for,
    ACTIONS(216), 1,
      anon_sym_foreach,
    STATE(164), 1,
      sym__type,
    STATE(239), 1,
      sym__statement,
    STATE(290), 1,
      sym__expression,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [1539] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_number_literal,
    STATE(175), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(350), 1,
      sym__statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(348), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(277), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [1637] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_number_literal,
    STATE(175), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(359), 1,
      sym__statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(348), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(277), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [1735] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_number_literal,
    STATE(175), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(357), 1,
      sym__statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(348), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(277), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [1833] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_number_literal,
    STATE(175), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(353), 1,
      sym__statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(348), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(277), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [1931] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_number_literal,
    ACTIONS(218), 1,
      anon_sym_if,
    ACTIONS(220), 1,
      anon_sym_for,
    ACTIONS(222), 1,
      anon_sym_foreach,
    STATE(175), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(355), 1,
      sym__statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(348), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(277), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [2029] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_number_literal,
    ACTIONS(218), 1,
      anon_sym_if,
    ACTIONS(220), 1,
      anon_sym_for,
    ACTIONS(222), 1,
      anon_sym_foreach,
    STATE(175), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(350), 1,
      sym__statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(348), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(277), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [2127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 18,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(224), 34,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [2187] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(53), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(234), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(57), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(230), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(228), 26,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [2271] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_number_literal,
    ACTIONS(218), 1,
      anon_sym_if,
    ACTIONS(220), 1,
      anon_sym_for,
    ACTIONS(222), 1,
      anon_sym_foreach,
    STATE(175), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(359), 1,
      sym__statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(348), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(277), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [2369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 18,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(236), 34,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [2429] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      sym_number_literal,
    ACTIONS(218), 1,
      anon_sym_if,
    ACTIONS(220), 1,
      anon_sym_for,
    ACTIONS(222), 1,
      anon_sym_foreach,
    STATE(175), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(357), 1,
      sym__statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(348), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(277), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [2527] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(65), 1,
      anon_sym_QMARK,
    ACTIONS(67), 1,
      anon_sym_DOT_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(53), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(234), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(242), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
    ACTIONS(57), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(240), 25,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_BANG,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [2615] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(65), 1,
      anon_sym_QMARK,
    ACTIONS(67), 1,
      anon_sym_DOT_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(53), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(234), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(246), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
    ACTIONS(57), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(244), 25,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_BANG,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [2703] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(53), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(57), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(248), 26,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [2785] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(250), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(248), 33,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [2853] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(57), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 10,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(248), 31,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [2925] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(53), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(57), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(248), 29,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3001] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(53), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(234), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(57), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(248), 28,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3081] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(160), 1,
      sym_number_literal,
    ACTIONS(212), 1,
      anon_sym_if,
    ACTIONS(214), 1,
      anon_sym_for,
    ACTIONS(216), 1,
      anon_sym_foreach,
    STATE(164), 1,
      sym__type,
    STATE(246), 1,
      sym__statement,
    STATE(290), 1,
      sym__expression,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [3179] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(160), 1,
      sym_number_literal,
    ACTIONS(212), 1,
      anon_sym_if,
    ACTIONS(214), 1,
      anon_sym_for,
    ACTIONS(216), 1,
      anon_sym_foreach,
    STATE(164), 1,
      sym__type,
    STATE(233), 1,
      sym__statement,
    STATE(290), 1,
      sym__expression,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [3277] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(160), 1,
      sym_number_literal,
    ACTIONS(212), 1,
      anon_sym_if,
    ACTIONS(214), 1,
      anon_sym_for,
    ACTIONS(216), 1,
      anon_sym_foreach,
    STATE(164), 1,
      sym__type,
    STATE(248), 1,
      sym__statement,
    STATE(290), 1,
      sym__expression,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [3375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 18,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(252), 34,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 18,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(83), 34,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3495] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(250), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(258), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(256), 12,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
    ACTIONS(248), 25,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_BANG,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3567] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(256), 14,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(258), 33,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 18,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(99), 34,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3695] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(154), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_for,
    ACTIONS(158), 1,
      anon_sym_foreach,
    ACTIONS(160), 1,
      sym_number_literal,
    STATE(164), 1,
      sym__type,
    STATE(240), 1,
      sym__statement,
    STATE(290), 1,
      sym__expression,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [3793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 18,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(260), 34,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 18,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(264), 34,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 18,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(268), 34,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [3973] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(154), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_for,
    ACTIONS(158), 1,
      anon_sym_foreach,
    ACTIONS(160), 1,
      sym_number_literal,
    STATE(164), 1,
      sym__type,
    STATE(246), 1,
      sym__statement,
    STATE(290), 1,
      sym__expression,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [4071] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(154), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_for,
    ACTIONS(158), 1,
      anon_sym_foreach,
    ACTIONS(160), 1,
      sym_number_literal,
    STATE(164), 1,
      sym__type,
    STATE(248), 1,
      sym__statement,
    STATE(290), 1,
      sym__expression,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [4169] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_return,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(154), 1,
      anon_sym_if,
    ACTIONS(156), 1,
      anon_sym_for,
    ACTIONS(158), 1,
      anon_sym_foreach,
    ACTIONS(160), 1,
      sym_number_literal,
    STATE(164), 1,
      sym__type,
    STATE(249), 1,
      sym__statement,
    STATE(290), 1,
      sym__expression,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(238), 7,
      sym_block,
      sym_return_statement,
      sym_declaration_statement,
      sym_if_statement,
      sym_for_statement,
      sym_foreach_statement,
      sym_generic_statement,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [4267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_virtual,
    ACTIONS(270), 36,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_COLON,
      anon_sym_const,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [4320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(272), 37,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
      anon_sym_DASH,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_virtual,
    ACTIONS(266), 36,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_COLON,
      anon_sym_const,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [4426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(276), 37,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
      anon_sym_DASH,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 20,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(264), 23,
      anon_sym_out,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 20,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
    ACTIONS(268), 23,
      anon_sym_out,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [4581] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(160), 1,
      sym_number_literal,
    STATE(164), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(216), 2,
      sym_declaration_statement,
      sym_generic_statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [4656] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(160), 1,
      sym_number_literal,
    STATE(164), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(199), 2,
      sym_declaration_statement,
      sym_generic_statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [4731] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(160), 1,
      sym_number_literal,
    STATE(164), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(210), 2,
      sym_declaration_statement,
      sym_generic_statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [4806] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_let,
    ACTIONS(160), 1,
      sym_number_literal,
    STATE(164), 1,
      sym__type,
    STATE(290), 1,
      sym__expression,
    STATE(215), 2,
      sym_declaration_statement,
      sym_generic_statement,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(283), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [4881] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(70), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [4949] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(299), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
    ACTIONS(296), 3,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(133), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(292), 7,
      anon_sym_BANG,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(107), 8,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(109), 11,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [5009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(107), 17,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(109), 17,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [5061] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(70), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 18,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(117), 22,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [5177] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(328), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(313), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(316), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(322), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(319), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(325), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    STATE(70), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5245] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(84), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5313] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(74), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5381] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(65), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5449] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(70), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 18,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(105), 22,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [5565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 18,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(101), 22,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [5613] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(70), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5681] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(77), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5749] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(70), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5817] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(85), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5885] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(87), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [5953] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(68), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [6021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 18,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(97), 22,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [6069] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(70), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [6137] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(70), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [6205] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(79), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [6273] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(397), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(284), 3,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
    ACTIONS(286), 3,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
    STATE(220), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
    STATE(70), 6,
      sym__declaration,
      sym_method_declaration,
      sym_variable_declaration,
      sym_default_declaration,
      sym_states_declaration,
      aux_sym_class_definition_repeat2,
  [6341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 18,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(97), 22,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [6389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 18,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(121), 22,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [6437] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DASH,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 3,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(351), 7,
      anon_sym_BANG,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(353), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DOT_DOT,
    ACTIONS(361), 16,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_LBRACK,
  [6491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 16,
      anon_sym_out,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(262), 21,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [6536] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(133), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(107), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 20,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [6583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 25,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [6626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 25,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [6669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 25,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [6712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 25,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [6755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 25,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [6798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 25,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [6841] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_PLUS,
    ACTIONS(376), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      sym_number_literal,
    STATE(99), 1,
      aux_sym_default_declaration_repeat1,
    STATE(292), 1,
      sym__expression,
    STATE(317), 2,
      sym_default_declaration_flag,
      sym_default_declaration_value,
    ACTIONS(379), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(12), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(388), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [6907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(109), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [6949] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 1,
      anon_sym_PLUS,
    ACTIONS(397), 1,
      anon_sym_DASH,
    ACTIONS(399), 1,
      sym_number_literal,
    STATE(113), 1,
      aux_sym_default_declaration_repeat1,
    STATE(292), 1,
      sym__expression,
    STATE(317), 2,
      sym_default_declaration_flag,
      sym_default_declaration_value,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(12), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [7015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(226), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [7057] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(403), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(411), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(413), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(415), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(419), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(421), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(230), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(417), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(228), 8,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(238), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [7165] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym__frame_keyword_token1,
    STATE(105), 1,
      aux_sym_frame_statement_repeat1,
    STATE(121), 1,
      sym__frame_keyword,
    ACTIONS(432), 3,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
    ACTIONS(435), 3,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
    ACTIONS(427), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(425), 17,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7217] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(438), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_DOT_DOT,
    ACTIONS(403), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(411), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(413), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(415), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(419), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(421), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(242), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
    ACTIONS(417), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(240), 7,
      anon_sym_BANG,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7287] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(438), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_DOT_DOT,
    ACTIONS(403), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(411), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(413), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(415), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(419), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(421), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(246), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
    ACTIONS(417), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(244), 7,
      anon_sym_BANG,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7357] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(403), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(411), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(413), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(415), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(417), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(248), 8,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7421] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(421), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(250), 14,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(248), 15,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7471] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(438), 1,
      anon_sym_QMARK,
    ACTIONS(440), 1,
      anon_sym_DOT_DOT,
    ACTIONS(403), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(411), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(413), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(415), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(419), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(421), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(444), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
    ACTIONS(417), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(442), 7,
      anon_sym_BANG,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7541] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(417), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 10,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(248), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7595] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(411), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(413), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(415), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(417), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 8,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(248), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7653] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_PLUS,
    ACTIONS(397), 1,
      anon_sym_DASH,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_default_declaration_repeat1,
    STATE(292), 1,
      sym__expression,
    STATE(317), 2,
      sym_default_declaration_flag,
      sym_default_declaration_value,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(12), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [7719] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(409), 1,
      anon_sym_SLASH,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(411), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(413), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(415), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(417), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 6,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(248), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(254), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [7823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(85), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [7865] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(421), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(256), 14,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DQUOTE,
    ACTIONS(258), 15,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_DOT_DOT,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(262), 18,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
  [7957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(448), 24,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [7997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(452), 24,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [8037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(456), 24,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      aux_sym__frame_keyword_token1,
      anon_sym_Offset,
      anon_sym_offset,
      anon_sym_OFFSET,
      anon_sym_Light,
      anon_sym_light,
      anon_sym_LIGHT,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [8077] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    ACTIONS(133), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(107), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 15,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
  [8122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    ACTIONS(133), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(107), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 15,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
  [8167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    ACTIONS(133), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(107), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 15,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
  [8212] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_EQ,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(133), 5,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(107), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 15,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
  [8257] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8313] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_SEMI,
    STATE(263), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8369] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8425] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    STATE(279), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8481] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8537] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8593] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    STATE(264), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8649] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8705] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8761] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8817] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8873] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(287), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(66), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8926] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      sym_number_literal,
    STATE(112), 1,
      sym__expression,
    ACTIONS(494), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(67), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(144), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(100), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [8979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(254), 21,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [9016] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(38), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9069] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 9,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [9126] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(532), 1,
      sym_identifier,
    STATE(10), 1,
      sym_function_expression,
    STATE(293), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(5), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 12,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9181] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(141), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9234] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(248), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 11,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [9287] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(248), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(250), 13,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [9336] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(248), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 17,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [9381] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(250), 9,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [9438] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(39), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9491] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(246), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [9554] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(145), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9607] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(242), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [9670] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(46), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9723] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(36), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9776] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(35), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9829] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(34), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9882] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(146), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9935] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(270), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [9988] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(261), 1,
      sym_assignment_expression,
    STATE(290), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(124), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 12,
      sym__nonleft_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10043] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(243), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10096] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(260), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10149] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(258), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10202] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(33), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10255] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(29), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10308] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(257), 1,
      sym_assignment_expression,
    STATE(290), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(125), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 12,
      sym__nonleft_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10363] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(147), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 21,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [10453] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      sym_number_literal,
    STATE(103), 1,
      sym__expression,
    ACTIONS(494), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(67), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(144), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(100), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10506] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(250), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10559] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(258), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 17,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [10604] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(271), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10657] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(247), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10710] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(149), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10763] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(201), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10816] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(254), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10869] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(546), 1,
      sym_identifier,
    STATE(255), 1,
      sym_assignment_expression,
    STATE(290), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(123), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 12,
      sym__nonleft_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10924] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(548), 1,
      sym_identifier,
    STATE(280), 1,
      sym_assignment_expression,
    STATE(290), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(122), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 12,
      sym__nonleft_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [10979] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(45), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11032] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(234), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11085] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(265), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11138] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(252), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11191] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(278), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11244] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(241), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11297] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(151), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11350] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(259), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11403] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(2), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11456] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(273), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11509] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      sym_number_literal,
    STATE(106), 1,
      sym__expression,
    ACTIONS(494), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(67), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(144), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(100), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11562] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(281), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11615] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      sym_number_literal,
    STATE(107), 1,
      sym__expression,
    ACTIONS(494), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(67), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(144), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(100), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11668] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      sym_number_literal,
    STATE(108), 1,
      sym__expression,
    ACTIONS(494), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(67), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(144), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(100), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11721] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(253), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11774] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      sym_number_literal,
    STATE(109), 1,
      sym__expression,
    ACTIONS(494), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(67), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(144), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(100), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11827] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      sym_number_literal,
    STATE(111), 1,
      sym__expression,
    ACTIONS(494), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(67), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(144), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(100), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11880] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(231), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11933] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(94), 1,
      sym_function_expression,
    STATE(290), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(93), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 12,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [11988] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(262), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 21,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [12078] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      sym_number_literal,
    STATE(114), 1,
      sym__expression,
    ACTIONS(494), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(67), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(144), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(100), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12131] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(284), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12184] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(232), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12237] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(230), 7,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [12296] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(269), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12349] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      sym_number_literal,
    STATE(117), 1,
      sym__expression,
    ACTIONS(494), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(67), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(144), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(100), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12402] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(276), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12455] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(251), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12508] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(292), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(66), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12561] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      sym_number_literal,
    STATE(37), 1,
      sym__expression,
    ACTIONS(504), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(8), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(510), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(18), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12614] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(144), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12667] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(169), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12720] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(256), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12773] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(552), 1,
      sym_identifier,
    STATE(88), 1,
      sym_function_expression,
    STATE(291), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(83), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 12,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12828] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(266), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [12881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(226), 21,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [12918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 21,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [12955] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(285), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [13008] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(286), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [13061] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym_number_literal,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(236), 1,
      sym__expression,
    ACTIONS(91), 3,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
    STATE(92), 3,
      sym__left_expression,
      sym_member_access_expression,
      sym_subscript_expression,
    ACTIONS(81), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 13,
      sym__nonleft_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_postfix_unary_expression,
      sym_prefix_unary_expression,
      sym_parenthesized_expression,
      sym_vector_expression,
      sym_function_expression,
      sym_ternary_expression,
      sym_string_concat_expression,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
  [13114] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_function_expression_repeat1,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13179] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_function_expression_repeat1,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13244] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(401), 1,
      sym__type,
    ACTIONS(290), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    STATE(288), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(288), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(19), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
  [13291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    ACTIONS(562), 26,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [13326] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      aux_sym_function_expression_repeat1,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    ACTIONS(568), 26,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [13426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 26,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [13461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    ACTIONS(576), 26,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [13496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(580), 26,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [13531] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_function_expression_repeat1,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
    ACTIONS(586), 26,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [13631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
    ACTIONS(590), 26,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [13666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RBRACE,
    ACTIONS(594), 26,
      anon_sym_Default,
      anon_sym_default,
      anon_sym_DEFAULT,
      anon_sym_States,
      anon_sym_states,
      anon_sym_STATES,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [13701] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13763] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_else,
    ACTIONS(608), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(606), 17,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [13861] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(616), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [13957] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(626), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [14053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(630), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [14087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(606), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [14121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(634), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [14155] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(642), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [14251] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(650), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [14347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(654), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [14381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(658), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [14415] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(664), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [14509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(668), 18,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [14543] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14605] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14664] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(678), 1,
      anon_sym_COLON,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14723] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14782] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    ACTIONS(686), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(684), 16,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
  [14876] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(686), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(684), 16,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
  [14970] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15029] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(692), 1,
      anon_sym_COLON,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15088] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(694), 1,
      anon_sym_RBRACK,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    ACTIONS(686), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(684), 16,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
  [15182] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15241] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(698), 1,
      anon_sym_SEMI,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15300] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(700), 1,
      anon_sym_SEMI,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15359] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(702), 1,
      anon_sym_RBRACK,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15418] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15477] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15536] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15595] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15654] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15713] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(714), 1,
      anon_sym_COLON,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15772] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15831] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(718), 1,
      anon_sym_COLON,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15890] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    ACTIONS(722), 1,
      anon_sym_version,
    ACTIONS(725), 1,
      anon_sym_POUNDinclude,
    ACTIONS(728), 1,
      anon_sym_class,
    ACTIONS(731), 1,
      anon_sym_const,
    ACTIONS(740), 1,
      anon_sym_virtual,
    STATE(274), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(319), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    STATE(313), 4,
      sym_version_definition,
      sym_include_definition,
      sym_class_definition,
      sym_const_definition,
    ACTIONS(734), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(737), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [15941] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16000] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_SEMI,
    ACTIONS(107), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 16,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
  [16094] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16153] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(751), 1,
      anon_sym_SEMI,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    ACTIONS(686), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(684), 16,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
  [16247] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16306] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_version,
    ACTIONS(9), 1,
      anon_sym_POUNDinclude,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    STATE(274), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(319), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    STATE(313), 4,
      sym_version_definition,
      sym_include_definition,
      sym_class_definition,
      sym_const_definition,
    ACTIONS(15), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(17), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [16357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_SEMI,
    ACTIONS(107), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 16,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
  [16392] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(759), 1,
      anon_sym_SEMI,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16451] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(761), 1,
      anon_sym_SEMI,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16510] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(763), 1,
      anon_sym_SEMI,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16569] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(258), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(256), 12,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
      anon_sym_DOT_DOT,
  [16609] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(288), 4,
      sym_scope,
      sym_modifier,
      sym_access_level,
      aux_sym_method_declaration_repeat1,
    ACTIONS(767), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(770), 6,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
    ACTIONS(765), 7,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [16647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(252), 17,
      anon_sym_DASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      anon_sym_for,
      anon_sym_foreach,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [16679] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16735] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16791] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16847] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(538), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_DOT_DOT,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(520), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(522), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(524), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(534), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(536), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(526), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_LBRACE,
    ACTIONS(776), 21,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [16933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_LBRACE,
    ACTIONS(780), 21,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [16963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 20,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_virtual,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
      anon_sym_private,
      anon_sym_protected,
      sym_identifier,
  [16989] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_virtual,
    ACTIONS(786), 2,
      anon_sym_class,
      anon_sym_LBRACE,
    STATE(297), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    ACTIONS(788), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(791), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_virtual,
    ACTIONS(797), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17043] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(801), 1,
      anon_sym_COLON,
    ACTIONS(803), 1,
      anon_sym_LBRACE,
    STATE(321), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(17), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_virtual,
    ACTIONS(805), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_virtual,
    ACTIONS(809), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_virtual,
    ACTIONS(813), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_virtual,
    ACTIONS(817), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_virtual,
    ACTIONS(821), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_virtual,
    ACTIONS(825), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_virtual,
    ACTIONS(829), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_virtual,
    ACTIONS(833), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_virtual,
    ACTIONS(837), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_virtual,
    ACTIONS(841), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_virtual,
    ACTIONS(845), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_virtual,
    ACTIONS(849), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17363] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(853), 1,
      anon_sym_COLON,
    ACTIONS(855), 1,
      anon_sym_LBRACE,
    STATE(322), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(17), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_virtual,
    ACTIONS(857), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_virtual,
    ACTIONS(861), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_virtual,
    ACTIONS(865), 15,
      ts_builtin_sym_end,
      anon_sym_version,
      anon_sym_POUNDinclude,
      anon_sym_class,
      anon_sym_const,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17467] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(869), 1,
      anon_sym_LBRACE,
    STATE(297), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(17), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_SEMI,
    ACTIONS(871), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(873), 7,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
  [17521] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(877), 1,
      anon_sym_LBRACE,
    STATE(320), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(17), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17550] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(879), 1,
      anon_sym_class,
    STATE(297), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(17), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17579] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(881), 1,
      anon_sym_LBRACE,
    STATE(297), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(17), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17608] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(883), 1,
      anon_sym_LBRACE,
    STATE(297), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(17), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
    STATE(297), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(17), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_virtual,
    ACTIONS(887), 1,
      anon_sym_LBRACE,
    STATE(316), 3,
      sym_scope,
      sym_modifier,
      aux_sym_class_definition_repeat1,
    ACTIONS(15), 5,
      anon_sym_clearscope,
      anon_sym_virtualscope,
      anon_sym_play,
      anon_sym_ui,
      anon_sym_action,
    ACTIONS(17), 5,
      anon_sym_abstract,
      anon_sym_override,
      anon_sym_static,
      anon_sym_transient,
      anon_sym_extend,
  [17695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 7,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
    ACTIONS(889), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
  [17717] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(891), 1,
      anon_sym_out,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      aux_sym_parameter_list_repeat1,
    STATE(411), 1,
      sym__type,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
  [17748] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_identifier,
    ACTIONS(898), 1,
      anon_sym_out,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      aux_sym_parameter_list_repeat1,
    STATE(411), 1,
      sym__type,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(903), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
  [17779] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(891), 1,
      anon_sym_out,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_parameter_list_repeat1,
    STATE(411), 1,
      sym__type,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
  [17810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 6,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(910), 6,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
  [17830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 6,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(914), 6,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
  [17850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 6,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(918), 6,
      anon_sym_LPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number_literal,
  [17870] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_identifier,
    ACTIONS(924), 1,
      aux_sym_frame_sprite_token1,
    STATE(185), 1,
      sym_frame_sprite,
    ACTIONS(922), 2,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
    ACTIONS(926), 2,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
    STATE(334), 4,
      sym__states_statement,
      sym_frame_statement,
      sym_control_statement,
      aux_sym_states_declaration_repeat1,
  [17897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_EQ,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 8,
      anon_sym_out,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [17920] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_EQ,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    ACTIONS(936), 8,
      anon_sym_out,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [17943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym_identifier,
    ACTIONS(949), 1,
      aux_sym_frame_sprite_token1,
    STATE(185), 1,
      sym_frame_sprite,
    ACTIONS(947), 2,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
    ACTIONS(952), 2,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
    STATE(334), 4,
      sym__states_statement,
      sym_frame_statement,
      sym_control_statement,
      aux_sym_states_declaration_repeat1,
  [17970] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_identifier,
    ACTIONS(924), 1,
      aux_sym_frame_sprite_token1,
    STATE(185), 1,
      sym_frame_sprite,
    ACTIONS(926), 2,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
    ACTIONS(955), 2,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
    STATE(331), 4,
      sym__states_statement,
      sym_frame_statement,
      sym_control_statement,
      aux_sym_states_declaration_repeat1,
  [17997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    ACTIONS(957), 8,
      anon_sym_out,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [18017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(963), 8,
      anon_sym_out,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [18037] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(398), 1,
      sym__type,
    STATE(330), 2,
      sym_predefined_type,
      sym__class_name,
    ACTIONS(33), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
  [18059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    ACTIONS(969), 8,
      anon_sym_out,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [18076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(973), 8,
      anon_sym_out,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [18093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      sym_number_literal,
    STATE(336), 3,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(979), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
  [18114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    ACTIONS(981), 8,
      anon_sym_out,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [18131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(985), 8,
      anon_sym_out,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_bool,
      anon_sym_void,
      sym_identifier,
  [18148] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(989), 1,
      sym_number_literal,
    STATE(337), 3,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(979), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
  [18169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(991), 1,
      sym_number_literal,
    STATE(402), 3,
      sym__literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(979), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
  [18190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(608), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(278), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(632), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(274), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(670), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(644), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(618), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(636), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(628), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_else,
    ACTIONS(606), 2,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(608), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(652), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(660), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(656), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      anon_sym_else,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(666), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 2,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(997), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 2,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(1001), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 2,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(1001), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 2,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(1005), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 2,
      aux_sym_frame_sprite_token1,
      sym_identifier,
    ACTIONS(1009), 4,
      anon_sym_RBRACE,
      aux_sym_states_declaration_token1,
      aux_sym_frame_sprite_token2,
      aux_sym_frame_sprite_token3,
  [18472] = 4,
    ACTIONS(1011), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_DQUOTE,
    ACTIONS(1015), 1,
      sym__interpreted_string_literal_content,
    STATE(380), 1,
      aux_sym_string_literal_repeat1,
  [18485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
    ACTIONS(1019), 1,
      aux_sym_states_declaration_token1,
    STATE(374), 1,
      aux_sym_states_declaration_repeat2,
  [18498] = 4,
    ACTIONS(1011), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    ACTIONS(1023), 1,
      sym__interpreted_string_literal_content,
    STATE(376), 1,
      aux_sym_string_literal_repeat1,
  [18511] = 4,
    ACTIONS(1011), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_DQUOTE,
    ACTIONS(1027), 1,
      sym__interpreted_string_literal_content,
    STATE(373), 1,
      aux_sym_string_literal_repeat1,
  [18524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(1029), 1,
      sym_number_literal,
    STATE(310), 1,
      sym_string_literal,
  [18537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_function_expression_repeat1,
  [18550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_SEMI,
    ACTIONS(1035), 1,
      anon_sym_LPAREN,
    STATE(385), 1,
      sym_parameter_list,
  [18563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_function_expression_repeat1,
  [18576] = 4,
    ACTIONS(1011), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym__interpreted_string_literal_content,
    ACTIONS(1039), 1,
      anon_sym_DQUOTE,
    STATE(380), 1,
      aux_sym_string_literal_repeat1,
  [18589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
    ACTIONS(1043), 1,
      aux_sym_states_declaration_token1,
    STATE(374), 1,
      aux_sym_states_declaration_repeat2,
  [18602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      aux_sym_states_declaration_token1,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_states_declaration_repeat2,
  [18615] = 4,
    ACTIONS(1011), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym__interpreted_string_literal_content,
    ACTIONS(1048), 1,
      anon_sym_DQUOTE,
    STATE(380), 1,
      aux_sym_string_literal_repeat1,
  [18628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_LPAREN,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
    STATE(383), 1,
      sym_parameter_list,
  [18641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    ACTIONS(1052), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_function_expression_repeat1,
  [18654] = 4,
    ACTIONS(1011), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_DQUOTE,
    ACTIONS(1057), 1,
      sym__interpreted_string_literal_content,
    STATE(365), 1,
      aux_sym_string_literal_repeat1,
  [18667] = 4,
    ACTIONS(1011), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_DQUOTE,
    ACTIONS(1061), 1,
      sym__interpreted_string_literal_content,
    STATE(380), 1,
      aux_sym_string_literal_repeat1,
  [18680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_function_expression_repeat1,
  [18693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_parenthesized_expression,
  [18703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_block,
  [18713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(303), 1,
      sym_string_literal,
  [18723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_block,
  [18733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_parenthesized_expression,
  [18743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_parenthesized_expression,
  [18753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_parenthesized_expression,
  [18763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_LBRACE,
  [18770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
  [18777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_LPAREN,
  [18784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym_identifier,
  [18791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym_identifier,
  [18798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
  [18805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_LBRACE,
  [18812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      ts_builtin_sym_end,
  [18819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      sym_identifier,
  [18826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym_identifier,
  [18833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
  [18840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
  [18847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_identifier,
  [18854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_SEMI,
  [18861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym_identifier,
  [18868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym_identifier,
  [18875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_LBRACE,
  [18882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_RPAREN,
  [18889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym_identifier,
  [18896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym_identifier,
  [18903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_LPAREN,
  [18910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_identifier,
  [18917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym_identifier,
  [18924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_LBRACE,
  [18931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_LPAREN,
  [18938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym_identifier,
  [18945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_EQ,
  [18952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_LPAREN,
  [18959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_LPAREN,
  [18966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      sym_identifier,
  [18973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      sym_identifier,
  [18980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_LPAREN,
  [18987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_LPAREN,
  [18994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
  [19001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 186,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 318,
  [SMALL_STATE(9)] = 388,
  [SMALL_STATE(10)] = 454,
  [SMALL_STATE(11)] = 520,
  [SMALL_STATE(12)] = 586,
  [SMALL_STATE(13)] = 675,
  [SMALL_STATE(14)] = 777,
  [SMALL_STATE(15)] = 879,
  [SMALL_STATE(16)] = 981,
  [SMALL_STATE(17)] = 1083,
  [SMALL_STATE(18)] = 1185,
  [SMALL_STATE(19)] = 1245,
  [SMALL_STATE(20)] = 1343,
  [SMALL_STATE(21)] = 1441,
  [SMALL_STATE(22)] = 1539,
  [SMALL_STATE(23)] = 1637,
  [SMALL_STATE(24)] = 1735,
  [SMALL_STATE(25)] = 1833,
  [SMALL_STATE(26)] = 1931,
  [SMALL_STATE(27)] = 2029,
  [SMALL_STATE(28)] = 2127,
  [SMALL_STATE(29)] = 2187,
  [SMALL_STATE(30)] = 2271,
  [SMALL_STATE(31)] = 2369,
  [SMALL_STATE(32)] = 2429,
  [SMALL_STATE(33)] = 2527,
  [SMALL_STATE(34)] = 2615,
  [SMALL_STATE(35)] = 2703,
  [SMALL_STATE(36)] = 2785,
  [SMALL_STATE(37)] = 2853,
  [SMALL_STATE(38)] = 2925,
  [SMALL_STATE(39)] = 3001,
  [SMALL_STATE(40)] = 3081,
  [SMALL_STATE(41)] = 3179,
  [SMALL_STATE(42)] = 3277,
  [SMALL_STATE(43)] = 3375,
  [SMALL_STATE(44)] = 3435,
  [SMALL_STATE(45)] = 3495,
  [SMALL_STATE(46)] = 3567,
  [SMALL_STATE(47)] = 3635,
  [SMALL_STATE(48)] = 3695,
  [SMALL_STATE(49)] = 3793,
  [SMALL_STATE(50)] = 3853,
  [SMALL_STATE(51)] = 3913,
  [SMALL_STATE(52)] = 3973,
  [SMALL_STATE(53)] = 4071,
  [SMALL_STATE(54)] = 4169,
  [SMALL_STATE(55)] = 4267,
  [SMALL_STATE(56)] = 4320,
  [SMALL_STATE(57)] = 4373,
  [SMALL_STATE(58)] = 4426,
  [SMALL_STATE(59)] = 4479,
  [SMALL_STATE(60)] = 4530,
  [SMALL_STATE(61)] = 4581,
  [SMALL_STATE(62)] = 4656,
  [SMALL_STATE(63)] = 4731,
  [SMALL_STATE(64)] = 4806,
  [SMALL_STATE(65)] = 4881,
  [SMALL_STATE(66)] = 4949,
  [SMALL_STATE(67)] = 5009,
  [SMALL_STATE(68)] = 5061,
  [SMALL_STATE(69)] = 5129,
  [SMALL_STATE(70)] = 5177,
  [SMALL_STATE(71)] = 5245,
  [SMALL_STATE(72)] = 5313,
  [SMALL_STATE(73)] = 5381,
  [SMALL_STATE(74)] = 5449,
  [SMALL_STATE(75)] = 5517,
  [SMALL_STATE(76)] = 5565,
  [SMALL_STATE(77)] = 5613,
  [SMALL_STATE(78)] = 5681,
  [SMALL_STATE(79)] = 5749,
  [SMALL_STATE(80)] = 5817,
  [SMALL_STATE(81)] = 5885,
  [SMALL_STATE(82)] = 5953,
  [SMALL_STATE(83)] = 6021,
  [SMALL_STATE(84)] = 6069,
  [SMALL_STATE(85)] = 6137,
  [SMALL_STATE(86)] = 6205,
  [SMALL_STATE(87)] = 6273,
  [SMALL_STATE(88)] = 6341,
  [SMALL_STATE(89)] = 6389,
  [SMALL_STATE(90)] = 6437,
  [SMALL_STATE(91)] = 6491,
  [SMALL_STATE(92)] = 6536,
  [SMALL_STATE(93)] = 6583,
  [SMALL_STATE(94)] = 6626,
  [SMALL_STATE(95)] = 6669,
  [SMALL_STATE(96)] = 6712,
  [SMALL_STATE(97)] = 6755,
  [SMALL_STATE(98)] = 6798,
  [SMALL_STATE(99)] = 6841,
  [SMALL_STATE(100)] = 6907,
  [SMALL_STATE(101)] = 6949,
  [SMALL_STATE(102)] = 7015,
  [SMALL_STATE(103)] = 7057,
  [SMALL_STATE(104)] = 7123,
  [SMALL_STATE(105)] = 7165,
  [SMALL_STATE(106)] = 7217,
  [SMALL_STATE(107)] = 7287,
  [SMALL_STATE(108)] = 7357,
  [SMALL_STATE(109)] = 7421,
  [SMALL_STATE(110)] = 7471,
  [SMALL_STATE(111)] = 7541,
  [SMALL_STATE(112)] = 7595,
  [SMALL_STATE(113)] = 7653,
  [SMALL_STATE(114)] = 7719,
  [SMALL_STATE(115)] = 7781,
  [SMALL_STATE(116)] = 7823,
  [SMALL_STATE(117)] = 7865,
  [SMALL_STATE(118)] = 7915,
  [SMALL_STATE(119)] = 7957,
  [SMALL_STATE(120)] = 7997,
  [SMALL_STATE(121)] = 8037,
  [SMALL_STATE(122)] = 8077,
  [SMALL_STATE(123)] = 8122,
  [SMALL_STATE(124)] = 8167,
  [SMALL_STATE(125)] = 8212,
  [SMALL_STATE(126)] = 8257,
  [SMALL_STATE(127)] = 8313,
  [SMALL_STATE(128)] = 8369,
  [SMALL_STATE(129)] = 8425,
  [SMALL_STATE(130)] = 8481,
  [SMALL_STATE(131)] = 8537,
  [SMALL_STATE(132)] = 8593,
  [SMALL_STATE(133)] = 8649,
  [SMALL_STATE(134)] = 8705,
  [SMALL_STATE(135)] = 8761,
  [SMALL_STATE(136)] = 8817,
  [SMALL_STATE(137)] = 8873,
  [SMALL_STATE(138)] = 8926,
  [SMALL_STATE(139)] = 8979,
  [SMALL_STATE(140)] = 9016,
  [SMALL_STATE(141)] = 9069,
  [SMALL_STATE(142)] = 9126,
  [SMALL_STATE(143)] = 9181,
  [SMALL_STATE(144)] = 9234,
  [SMALL_STATE(145)] = 9287,
  [SMALL_STATE(146)] = 9336,
  [SMALL_STATE(147)] = 9381,
  [SMALL_STATE(148)] = 9438,
  [SMALL_STATE(149)] = 9491,
  [SMALL_STATE(150)] = 9554,
  [SMALL_STATE(151)] = 9607,
  [SMALL_STATE(152)] = 9670,
  [SMALL_STATE(153)] = 9723,
  [SMALL_STATE(154)] = 9776,
  [SMALL_STATE(155)] = 9829,
  [SMALL_STATE(156)] = 9882,
  [SMALL_STATE(157)] = 9935,
  [SMALL_STATE(158)] = 9988,
  [SMALL_STATE(159)] = 10043,
  [SMALL_STATE(160)] = 10096,
  [SMALL_STATE(161)] = 10149,
  [SMALL_STATE(162)] = 10202,
  [SMALL_STATE(163)] = 10255,
  [SMALL_STATE(164)] = 10308,
  [SMALL_STATE(165)] = 10363,
  [SMALL_STATE(166)] = 10416,
  [SMALL_STATE(167)] = 10453,
  [SMALL_STATE(168)] = 10506,
  [SMALL_STATE(169)] = 10559,
  [SMALL_STATE(170)] = 10604,
  [SMALL_STATE(171)] = 10657,
  [SMALL_STATE(172)] = 10710,
  [SMALL_STATE(173)] = 10763,
  [SMALL_STATE(174)] = 10816,
  [SMALL_STATE(175)] = 10869,
  [SMALL_STATE(176)] = 10924,
  [SMALL_STATE(177)] = 10979,
  [SMALL_STATE(178)] = 11032,
  [SMALL_STATE(179)] = 11085,
  [SMALL_STATE(180)] = 11138,
  [SMALL_STATE(181)] = 11191,
  [SMALL_STATE(182)] = 11244,
  [SMALL_STATE(183)] = 11297,
  [SMALL_STATE(184)] = 11350,
  [SMALL_STATE(185)] = 11403,
  [SMALL_STATE(186)] = 11456,
  [SMALL_STATE(187)] = 11509,
  [SMALL_STATE(188)] = 11562,
  [SMALL_STATE(189)] = 11615,
  [SMALL_STATE(190)] = 11668,
  [SMALL_STATE(191)] = 11721,
  [SMALL_STATE(192)] = 11774,
  [SMALL_STATE(193)] = 11827,
  [SMALL_STATE(194)] = 11880,
  [SMALL_STATE(195)] = 11933,
  [SMALL_STATE(196)] = 11988,
  [SMALL_STATE(197)] = 12041,
  [SMALL_STATE(198)] = 12078,
  [SMALL_STATE(199)] = 12131,
  [SMALL_STATE(200)] = 12184,
  [SMALL_STATE(201)] = 12237,
  [SMALL_STATE(202)] = 12296,
  [SMALL_STATE(203)] = 12349,
  [SMALL_STATE(204)] = 12402,
  [SMALL_STATE(205)] = 12455,
  [SMALL_STATE(206)] = 12508,
  [SMALL_STATE(207)] = 12561,
  [SMALL_STATE(208)] = 12614,
  [SMALL_STATE(209)] = 12667,
  [SMALL_STATE(210)] = 12720,
  [SMALL_STATE(211)] = 12773,
  [SMALL_STATE(212)] = 12828,
  [SMALL_STATE(213)] = 12881,
  [SMALL_STATE(214)] = 12918,
  [SMALL_STATE(215)] = 12955,
  [SMALL_STATE(216)] = 13008,
  [SMALL_STATE(217)] = 13061,
  [SMALL_STATE(218)] = 13114,
  [SMALL_STATE(219)] = 13179,
  [SMALL_STATE(220)] = 13244,
  [SMALL_STATE(221)] = 13291,
  [SMALL_STATE(222)] = 13326,
  [SMALL_STATE(223)] = 13391,
  [SMALL_STATE(224)] = 13426,
  [SMALL_STATE(225)] = 13461,
  [SMALL_STATE(226)] = 13496,
  [SMALL_STATE(227)] = 13531,
  [SMALL_STATE(228)] = 13596,
  [SMALL_STATE(229)] = 13631,
  [SMALL_STATE(230)] = 13666,
  [SMALL_STATE(231)] = 13701,
  [SMALL_STATE(232)] = 13763,
  [SMALL_STATE(233)] = 13825,
  [SMALL_STATE(234)] = 13861,
  [SMALL_STATE(235)] = 13923,
  [SMALL_STATE(236)] = 13957,
  [SMALL_STATE(237)] = 14019,
  [SMALL_STATE(238)] = 14053,
  [SMALL_STATE(239)] = 14087,
  [SMALL_STATE(240)] = 14121,
  [SMALL_STATE(241)] = 14155,
  [SMALL_STATE(242)] = 14217,
  [SMALL_STATE(243)] = 14251,
  [SMALL_STATE(244)] = 14313,
  [SMALL_STATE(245)] = 14347,
  [SMALL_STATE(246)] = 14381,
  [SMALL_STATE(247)] = 14415,
  [SMALL_STATE(248)] = 14475,
  [SMALL_STATE(249)] = 14509,
  [SMALL_STATE(250)] = 14543,
  [SMALL_STATE(251)] = 14605,
  [SMALL_STATE(252)] = 14664,
  [SMALL_STATE(253)] = 14723,
  [SMALL_STATE(254)] = 14782,
  [SMALL_STATE(255)] = 14841,
  [SMALL_STATE(256)] = 14876,
  [SMALL_STATE(257)] = 14935,
  [SMALL_STATE(258)] = 14970,
  [SMALL_STATE(259)] = 15029,
  [SMALL_STATE(260)] = 15088,
  [SMALL_STATE(261)] = 15147,
  [SMALL_STATE(262)] = 15182,
  [SMALL_STATE(263)] = 15241,
  [SMALL_STATE(264)] = 15300,
  [SMALL_STATE(265)] = 15359,
  [SMALL_STATE(266)] = 15418,
  [SMALL_STATE(267)] = 15477,
  [SMALL_STATE(268)] = 15536,
  [SMALL_STATE(269)] = 15595,
  [SMALL_STATE(270)] = 15654,
  [SMALL_STATE(271)] = 15713,
  [SMALL_STATE(272)] = 15772,
  [SMALL_STATE(273)] = 15831,
  [SMALL_STATE(274)] = 15890,
  [SMALL_STATE(275)] = 15941,
  [SMALL_STATE(276)] = 16000,
  [SMALL_STATE(277)] = 16059,
  [SMALL_STATE(278)] = 16094,
  [SMALL_STATE(279)] = 16153,
  [SMALL_STATE(280)] = 16212,
  [SMALL_STATE(281)] = 16247,
  [SMALL_STATE(282)] = 16306,
  [SMALL_STATE(283)] = 16357,
  [SMALL_STATE(284)] = 16392,
  [SMALL_STATE(285)] = 16451,
  [SMALL_STATE(286)] = 16510,
  [SMALL_STATE(287)] = 16569,
  [SMALL_STATE(288)] = 16609,
  [SMALL_STATE(289)] = 16647,
  [SMALL_STATE(290)] = 16679,
  [SMALL_STATE(291)] = 16735,
  [SMALL_STATE(292)] = 16791,
  [SMALL_STATE(293)] = 16847,
  [SMALL_STATE(294)] = 16903,
  [SMALL_STATE(295)] = 16933,
  [SMALL_STATE(296)] = 16963,
  [SMALL_STATE(297)] = 16989,
  [SMALL_STATE(298)] = 17019,
  [SMALL_STATE(299)] = 17043,
  [SMALL_STATE(300)] = 17075,
  [SMALL_STATE(301)] = 17099,
  [SMALL_STATE(302)] = 17123,
  [SMALL_STATE(303)] = 17147,
  [SMALL_STATE(304)] = 17171,
  [SMALL_STATE(305)] = 17195,
  [SMALL_STATE(306)] = 17219,
  [SMALL_STATE(307)] = 17243,
  [SMALL_STATE(308)] = 17267,
  [SMALL_STATE(309)] = 17291,
  [SMALL_STATE(310)] = 17315,
  [SMALL_STATE(311)] = 17339,
  [SMALL_STATE(312)] = 17363,
  [SMALL_STATE(313)] = 17395,
  [SMALL_STATE(314)] = 17419,
  [SMALL_STATE(315)] = 17443,
  [SMALL_STATE(316)] = 17467,
  [SMALL_STATE(317)] = 17496,
  [SMALL_STATE(318)] = 17521,
  [SMALL_STATE(319)] = 17550,
  [SMALL_STATE(320)] = 17579,
  [SMALL_STATE(321)] = 17608,
  [SMALL_STATE(322)] = 17637,
  [SMALL_STATE(323)] = 17666,
  [SMALL_STATE(324)] = 17695,
  [SMALL_STATE(325)] = 17717,
  [SMALL_STATE(326)] = 17748,
  [SMALL_STATE(327)] = 17779,
  [SMALL_STATE(328)] = 17810,
  [SMALL_STATE(329)] = 17830,
  [SMALL_STATE(330)] = 17850,
  [SMALL_STATE(331)] = 17870,
  [SMALL_STATE(332)] = 17897,
  [SMALL_STATE(333)] = 17920,
  [SMALL_STATE(334)] = 17943,
  [SMALL_STATE(335)] = 17970,
  [SMALL_STATE(336)] = 17997,
  [SMALL_STATE(337)] = 18017,
  [SMALL_STATE(338)] = 18037,
  [SMALL_STATE(339)] = 18059,
  [SMALL_STATE(340)] = 18076,
  [SMALL_STATE(341)] = 18093,
  [SMALL_STATE(342)] = 18114,
  [SMALL_STATE(343)] = 18131,
  [SMALL_STATE(344)] = 18148,
  [SMALL_STATE(345)] = 18169,
  [SMALL_STATE(346)] = 18190,
  [SMALL_STATE(347)] = 18205,
  [SMALL_STATE(348)] = 18220,
  [SMALL_STATE(349)] = 18235,
  [SMALL_STATE(350)] = 18250,
  [SMALL_STATE(351)] = 18265,
  [SMALL_STATE(352)] = 18280,
  [SMALL_STATE(353)] = 18295,
  [SMALL_STATE(354)] = 18310,
  [SMALL_STATE(355)] = 18325,
  [SMALL_STATE(356)] = 18342,
  [SMALL_STATE(357)] = 18357,
  [SMALL_STATE(358)] = 18372,
  [SMALL_STATE(359)] = 18387,
  [SMALL_STATE(360)] = 18402,
  [SMALL_STATE(361)] = 18416,
  [SMALL_STATE(362)] = 18430,
  [SMALL_STATE(363)] = 18444,
  [SMALL_STATE(364)] = 18458,
  [SMALL_STATE(365)] = 18472,
  [SMALL_STATE(366)] = 18485,
  [SMALL_STATE(367)] = 18498,
  [SMALL_STATE(368)] = 18511,
  [SMALL_STATE(369)] = 18524,
  [SMALL_STATE(370)] = 18537,
  [SMALL_STATE(371)] = 18550,
  [SMALL_STATE(372)] = 18563,
  [SMALL_STATE(373)] = 18576,
  [SMALL_STATE(374)] = 18589,
  [SMALL_STATE(375)] = 18602,
  [SMALL_STATE(376)] = 18615,
  [SMALL_STATE(377)] = 18628,
  [SMALL_STATE(378)] = 18641,
  [SMALL_STATE(379)] = 18654,
  [SMALL_STATE(380)] = 18667,
  [SMALL_STATE(381)] = 18680,
  [SMALL_STATE(382)] = 18693,
  [SMALL_STATE(383)] = 18703,
  [SMALL_STATE(384)] = 18713,
  [SMALL_STATE(385)] = 18723,
  [SMALL_STATE(386)] = 18733,
  [SMALL_STATE(387)] = 18743,
  [SMALL_STATE(388)] = 18753,
  [SMALL_STATE(389)] = 18763,
  [SMALL_STATE(390)] = 18770,
  [SMALL_STATE(391)] = 18777,
  [SMALL_STATE(392)] = 18784,
  [SMALL_STATE(393)] = 18791,
  [SMALL_STATE(394)] = 18798,
  [SMALL_STATE(395)] = 18805,
  [SMALL_STATE(396)] = 18812,
  [SMALL_STATE(397)] = 18819,
  [SMALL_STATE(398)] = 18826,
  [SMALL_STATE(399)] = 18833,
  [SMALL_STATE(400)] = 18840,
  [SMALL_STATE(401)] = 18847,
  [SMALL_STATE(402)] = 18854,
  [SMALL_STATE(403)] = 18861,
  [SMALL_STATE(404)] = 18868,
  [SMALL_STATE(405)] = 18875,
  [SMALL_STATE(406)] = 18882,
  [SMALL_STATE(407)] = 18889,
  [SMALL_STATE(408)] = 18896,
  [SMALL_STATE(409)] = 18903,
  [SMALL_STATE(410)] = 18910,
  [SMALL_STATE(411)] = 18917,
  [SMALL_STATE(412)] = 18924,
  [SMALL_STATE(413)] = 18931,
  [SMALL_STATE(414)] = 18938,
  [SMALL_STATE(415)] = 18945,
  [SMALL_STATE(416)] = 18952,
  [SMALL_STATE(417)] = 18959,
  [SMALL_STATE(418)] = 18966,
  [SMALL_STATE(419)] = 18973,
  [SMALL_STATE(420)] = 18980,
  [SMALL_STATE(421)] = 18987,
  [SMALL_STATE(422)] = 18994,
  [SMALL_STATE(423)] = 19001,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_unary_expression, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_unary_expression, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access_expression, 3, .production_id = 16),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access_expression, 3, .production_id = 16),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4, .production_id = 20),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4, .production_id = 20),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 3, .production_id = 14),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 3, .production_id = 14),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 5, .production_id = 25),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 5, .production_id = 25),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 4, .production_id = 21),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 4, .production_id = 21),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(182),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(203),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), SHIFT(203),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(200),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(209),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(328),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(132),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(158),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(387),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(391),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(390),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(209),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(368),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(283),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(91),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_expression, 7, .production_id = 33),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_expression, 7, .production_id = 33),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5, .production_id = 26),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 26),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_expression, 5, .production_id = 24),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_expression, 5, .production_id = 24),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 17),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 17),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_concat_expression, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_concat_expression, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .dynamic_precedence = 2, .production_id = 15),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .dynamic_precedence = 2, .production_id = 15),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_unary_expression, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_unary_expression, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_declaration_flag, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_declaration_flag, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1), REDUCE(sym_default_declaration_flag, 2),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), REDUCE(sym_default_declaration_flag, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(393),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(405),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(389),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(328),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(295),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(294),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(296),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_name, 1, .production_id = 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_expression, 1),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 4), REDUCE(sym__left_expression, 1),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__class_name, 1, .production_id = 4), REDUCE(sym__left_expression, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_expression, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 4),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_default_declaration_repeat1, 2), SHIFT_REPEAT(12),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_default_declaration_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_default_declaration_repeat1, 2), SHIFT_REPEAT(200),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_default_declaration_repeat1, 2), SHIFT_REPEAT(206),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_default_declaration_repeat1, 2), SHIFT_REPEAT(137),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_default_declaration_repeat1, 2), SHIFT_REPEAT(209),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_default_declaration_repeat1, 2), SHIFT_REPEAT(368),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_default_declaration_repeat1, 2), SHIFT_REPEAT(214),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_default_declaration_repeat1, 2), SHIFT_REPEAT(91),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_frame_statement_repeat1, 2, .production_id = 28),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frame_statement_repeat1, 2, .production_id = 28),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_frame_statement_repeat1, 2, .production_id = 28), SHIFT_REPEAT(121),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_frame_statement_repeat1, 2, .production_id = 28), SHIFT_REPEAT(409),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_frame_statement_repeat1, 2, .production_id = 28), SHIFT_REPEAT(413),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_declaration_value, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_declaration_value, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__frame_keyword, 6, .production_id = 36),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__frame_keyword, 6, .production_id = 36),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__frame_keyword, 4, .production_id = 34),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__frame_keyword, 4, .production_id = 34),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_frame_statement_repeat1, 1, .production_id = 23),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frame_statement_repeat1, 1, .production_id = 23),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 5, .production_id = 12),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 5, .production_id = 12),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_declaration, 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_declaration, 4),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_declaration, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_declaration, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_declaration, 4, .production_id = 10),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_declaration, 4, .production_id = 10),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, .production_id = 9),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 9),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4, .production_id = 9),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, .production_id = 9),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 12),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 12),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_states_declaration, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_states_declaration, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 30),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 30),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 3),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2), SHIFT(196),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2), SHIFT(197),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 35),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 35),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 3, .production_id = 31),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 3, .production_id = 31),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_statement, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_statement, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 37),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 37),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_statement, 7, .production_id = 38),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_statement, 7, .production_id = 38),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, .production_id = 39),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 39),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nonleft_expression, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nonleft_expression, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(369),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(384),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(414),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(410),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_declaration_repeat1, 2),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_declaration_repeat1, 2), SHIFT_REPEAT(295),
  [770] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_declaration_repeat1, 2), SHIFT_REPEAT(294),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_declaration_repeat1, 2), SHIFT_REPEAT(296),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_level, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(295),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(294),
  [794] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(294),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4, .production_id = 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 4, .production_id = 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5, .production_id = 3),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 5, .production_id = 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, .production_id = 7),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 6, .production_id = 7),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5, .production_id = 6),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 5, .production_id = 6),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2, .production_id = 2),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_definition, 2, .production_id = 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_definition, 5, .production_id = 5),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_definition, 5, .production_id = 5),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7, .production_id = 13),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 7, .production_id = 13),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 9, .production_id = 13),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 9, .production_id = 13),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7, .production_id = 6),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 7, .production_id = 6),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 8, .production_id = 7),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 8, .production_id = 7),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 7, .production_id = 7),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 7, .production_id = 7),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_definition, 2, .production_id = 1),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_definition, 2, .production_id = 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, .production_id = 3),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 6, .production_id = 3),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, .production_id = 6),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 6, .production_id = 6),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 8, .production_id = 13),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 8, .production_id = 13),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_default_declaration_repeat1, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_default_declaration_repeat1, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_default_declaration_repeat1, 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 19), SHIFT_REPEAT(393),
  [898] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 19), SHIFT_REPEAT(338),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 19),
  [903] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 19), SHIFT_REPEAT(328),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predefined_type, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predefined_type, 1),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame_sprite, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_sprite, 1),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_declaration_repeat2, 2, .production_id = 8),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 3, .production_id = 12),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 3, .production_id = 12),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 9),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 9),
  [944] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_declaration_repeat1, 2), SHIFT_REPEAT(129),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_declaration_repeat1, 2),
  [949] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_states_declaration_repeat1, 2), SHIFT_REPEAT(329),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_declaration_repeat1, 2), SHIFT_REPEAT(329),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_declaration_repeat2, 1, .production_id = 8),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 4, .production_id = 29),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 4, .production_id = 29),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 5, .production_id = 32),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 5, .production_id = 32),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 5, .production_id = 29),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 5, .production_id = 29),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 3, .production_id = 9),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 3, .production_id = 9),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 4, .production_id = 12),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 4, .production_id = 12),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 6, .production_id = 32),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 6, .production_id = 32),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_statement, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_statement, 2),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame_statement, 4, .production_id = 27),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_statement, 4, .production_id = 27),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_statement, 3),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_statement, 3),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frame_statement, 3, .production_id = 22),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_statement, 3, .production_id = 22),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_states_declaration_repeat2, 2, .production_id = 11),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_states_declaration_repeat2, 2, .production_id = 11), SHIFT_REPEAT(335),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_expression_repeat1, 2), SHIFT_REPEAT(171),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(380),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 18),
  [1080] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zscript(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
