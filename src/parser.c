#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  aux_sym_run_instruction_token1 = 3,
  aux_sym_from_instruction_token1 = 4,
  sym_from_platform_declaration = 5,
  aux_sym_from_platform_value_token1 = 6,
  sym_from_image_tag = 7,
  sym_from_image_digest = 8,
  sym_from_image_name = 9,
  aux_sym_cmd_instruction_token1 = 10,
  anon_sym_LBRACK = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACK = 13,
  anon_sym_SQUOTE = 14,
  aux_sym_single_quoted_string_token1 = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_double_quoted_string_token1 = 17,
  aux_sym_shell_fragment_token1 = 18,
  aux_sym_shell_fragment_token2 = 19,
  aux_sym_shell_fragment_token3 = 20,
  sym_source_file = 21,
  sym__lines = 22,
  sym_comment = 23,
  sym_instruction = 24,
  sym_run_instruction = 25,
  sym_from_instruction = 26,
  sym__from_platform = 27,
  sym_from_platform_value = 28,
  sym_from_image = 29,
  sym_cmd_instruction = 30,
  sym_string_array = 31,
  sym_string = 32,
  sym_single_quoted_string = 33,
  sym_double_quoted_string = 34,
  sym_shell_command = 35,
  sym_shell_fragment = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_string_array_repeat1 = 38,
  aux_sym_single_quoted_string_repeat1 = 39,
  aux_sym_double_quoted_string_repeat1 = 40,
  aux_sym_shell_fragment_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_run_instruction_token1] = "RUN",
  [aux_sym_from_instruction_token1] = "FROM",
  [sym_from_platform_declaration] = "from_platform_declaration",
  [aux_sym_from_platform_value_token1] = "from_platform_value_token1",
  [sym_from_image_tag] = "from_image_tag",
  [sym_from_image_digest] = "from_image_digest",
  [sym_from_image_name] = "from_image_name",
  [aux_sym_cmd_instruction_token1] = "CMD",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [sym_source_file] = "source_file",
  [sym__lines] = "_lines",
  [sym_comment] = "comment",
  [sym_instruction] = "instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_from_instruction] = "from_instruction",
  [sym__from_platform] = "_from_platform",
  [sym_from_platform_value] = "from_platform_value",
  [sym_from_image] = "from_image",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_string_array] = "string_array",
  [sym_string] = "string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [sym_from_platform_declaration] = sym_from_platform_declaration,
  [aux_sym_from_platform_value_token1] = aux_sym_from_platform_value_token1,
  [sym_from_image_tag] = sym_from_image_tag,
  [sym_from_image_digest] = sym_from_image_digest,
  [sym_from_image_name] = sym_from_image_name,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [sym_source_file] = sym_source_file,
  [sym__lines] = sym__lines,
  [sym_comment] = sym_comment,
  [sym_instruction] = sym_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym__from_platform] = sym__from_platform,
  [sym_from_platform_value] = sym_from_platform_value,
  [sym_from_image] = sym_from_image,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_string_array] = sym_string_array,
  [sym_string] = sym_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_from_platform_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_from_platform_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_from_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_from_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_from_image_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__lines] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__from_platform] = {
    .visible = false,
    .named = true,
  },
  [sym_from_platform_value] = {
    .visible = true,
    .named = true,
  },
  [sym_from_image] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(9);
      if (lookahead == 'C') ADVANCE(20);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(25);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == '=') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'S') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(74);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(9);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(20);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(24);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(73);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_from_platform_declaration);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_from_platform_value_token1);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_from_platform_value_token1);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_from_platform_value_token1);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_from_platform_value_token1);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_from_platform_value_token1);
      if (lookahead == 'O') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_from_platform_value_token1);
      if (lookahead == 'R') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_from_platform_value_token1);
      if (lookahead == 'U') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_from_platform_value_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_from_image_tag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_from_image_digest);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_from_image_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 30},
  [48] = {.lex_state = 30},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 30},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 30},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_run_instruction_token1] = ACTIONS(1),
    [aux_sym_from_instruction_token1] = ACTIONS(1),
    [aux_sym_from_platform_value_token1] = ACTIONS(1),
    [sym_from_image_tag] = ACTIONS(1),
    [sym_from_image_digest] = ACTIONS(1),
    [sym_from_image_name] = ACTIONS(1),
    [aux_sym_cmd_instruction_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [aux_sym_shell_fragment_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(55),
    [sym__lines] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_instruction] = STATE(2),
    [sym_run_instruction] = STATE(32),
    [sym_from_instruction] = STATE(32),
    [sym_cmd_instruction] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_run_instruction_token1] = ACTIONS(7),
    [aux_sym_from_instruction_token1] = ACTIONS(9),
    [aux_sym_cmd_instruction_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(32), 3,
      sym_run_instruction,
      sym_from_instruction,
      sym_cmd_instruction,
    STATE(3), 4,
      sym__lines,
      sym_comment,
      sym_instruction,
      aux_sym_source_file_repeat1,
  [27] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(20), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(26), 1,
      aux_sym_cmd_instruction_token1,
    STATE(32), 3,
      sym_run_instruction,
      sym_from_instruction,
      sym_cmd_instruction,
    STATE(3), 4,
      sym__lines,
      sym_comment,
      sym_instruction,
      aux_sym_source_file_repeat1,
  [54] = 5,
    ACTIONS(35), 1,
      aux_sym_shell_fragment_token2,
    STATE(5), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(33), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(31), 3,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [74] = 5,
    ACTIONS(44), 1,
      aux_sym_shell_fragment_token2,
    STATE(5), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(41), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(39), 3,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [94] = 3,
    ACTIONS(51), 1,
      aux_sym_from_platform_value_token1,
    ACTIONS(49), 3,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_from_image_tag,
      sym_from_image_digest,
      sym_from_image_name,
  [110] = 5,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(33), 1,
      sym_shell_fragment,
    STATE(27), 2,
      sym_string_array,
      sym_shell_command,
    ACTIONS(55), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [129] = 4,
    ACTIONS(59), 1,
      sym_from_image_tag,
    ACTIONS(61), 1,
      sym_from_image_digest,
    ACTIONS(63), 1,
      sym_from_image_name,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [146] = 5,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(33), 1,
      sym_shell_fragment,
    STATE(24), 2,
      sym_string_array,
      sym_shell_command,
    ACTIONS(55), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [165] = 1,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      sym_from_image_tag,
      sym_from_image_digest,
      sym_from_image_name,
      aux_sym_cmd_instruction_token1,
  [176] = 4,
    ACTIONS(67), 1,
      sym_from_image_tag,
    ACTIONS(69), 1,
      sym_from_image_digest,
    ACTIONS(71), 1,
      sym_from_image_name,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [193] = 4,
    ACTIONS(75), 1,
      sym_from_image_tag,
    ACTIONS(77), 1,
      sym_from_image_digest,
    ACTIONS(79), 1,
      sym_from_image_name,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [210] = 3,
    ACTIONS(61), 1,
      sym_from_image_digest,
    ACTIONS(63), 1,
      sym_from_image_name,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [224] = 3,
    ACTIONS(83), 1,
      sym_from_image_digest,
    ACTIONS(85), 1,
      sym_from_image_name,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [238] = 3,
    ACTIONS(69), 1,
      sym_from_image_digest,
    ACTIONS(71), 1,
      sym_from_image_name,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [252] = 2,
    ACTIONS(89), 1,
      sym_from_image_name,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [263] = 2,
    ACTIONS(85), 1,
      sym_from_image_name,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [274] = 5,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_string,
    STATE(54), 2,
      sym_single_quoted_string,
      sym_double_quoted_string,
  [291] = 2,
    ACTIONS(63), 1,
      sym_from_image_name,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [302] = 2,
    ACTIONS(71), 1,
      sym_from_image_name,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [313] = 1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [321] = 1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [329] = 4,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_string,
    STATE(54), 2,
      sym_single_quoted_string,
      sym_double_quoted_string,
  [343] = 1,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [351] = 1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [359] = 1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [367] = 1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [375] = 1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [383] = 1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [391] = 5,
    ACTIONS(107), 1,
      sym_from_platform_declaration,
    ACTIONS(109), 1,
      aux_sym_from_platform_value_token1,
    STATE(12), 1,
      sym_from_image,
    STATE(41), 1,
      sym__from_platform,
    STATE(51), 1,
      sym_from_platform_value,
  [407] = 1,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [415] = 1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [423] = 1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [431] = 1,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [439] = 1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
      aux_sym_from_instruction_token1,
      aux_sym_cmd_instruction_token1,
  [447] = 3,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      aux_sym_single_quoted_string_token1,
    STATE(36), 1,
      aux_sym_single_quoted_string_repeat1,
  [457] = 3,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      aux_sym_double_quoted_string_token1,
    STATE(38), 1,
      aux_sym_double_quoted_string_repeat1,
  [467] = 3,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      aux_sym_double_quoted_string_token1,
    STATE(42), 1,
      aux_sym_double_quoted_string_repeat1,
  [477] = 3,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_single_quoted_string_token1,
    STATE(36), 1,
      aux_sym_single_quoted_string_repeat1,
  [487] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_string_array_repeat1,
  [497] = 3,
    ACTIONS(109), 1,
      aux_sym_from_platform_value_token1,
    STATE(11), 1,
      sym_from_image,
    STATE(49), 1,
      sym_from_platform_value,
  [507] = 3,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      aux_sym_double_quoted_string_token1,
    STATE(42), 1,
      aux_sym_double_quoted_string_repeat1,
  [517] = 3,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      aux_sym_single_quoted_string_token1,
    STATE(39), 1,
      aux_sym_single_quoted_string_repeat1,
  [527] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_string_array_repeat1,
  [537] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_string_array_repeat1,
  [547] = 2,
    ACTIONS(156), 1,
      aux_sym_from_platform_value_token1,
    STATE(56), 1,
      sym_from_platform_value,
  [554] = 1,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [559] = 1,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [564] = 2,
    ACTIONS(162), 1,
      aux_sym_from_platform_value_token1,
    STATE(8), 1,
      sym_from_image,
  [571] = 1,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [576] = 2,
    ACTIONS(162), 1,
      aux_sym_from_platform_value_token1,
    STATE(11), 1,
      sym_from_image,
  [583] = 1,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [588] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [593] = 1,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [598] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [602] = 1,
    ACTIONS(172), 1,
      aux_sym_from_platform_value_token1,
  [606] = 1,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
  [610] = 1,
    ACTIONS(176), 1,
      aux_sym_from_platform_value_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 238,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 263,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 291,
  [SMALL_STATE(20)] = 302,
  [SMALL_STATE(21)] = 313,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 329,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 359,
  [SMALL_STATE(27)] = 367,
  [SMALL_STATE(28)] = 375,
  [SMALL_STATE(29)] = 383,
  [SMALL_STATE(30)] = 391,
  [SMALL_STATE(31)] = 407,
  [SMALL_STATE(32)] = 415,
  [SMALL_STATE(33)] = 423,
  [SMALL_STATE(34)] = 431,
  [SMALL_STATE(35)] = 439,
  [SMALL_STATE(36)] = 447,
  [SMALL_STATE(37)] = 457,
  [SMALL_STATE(38)] = 467,
  [SMALL_STATE(39)] = 477,
  [SMALL_STATE(40)] = 487,
  [SMALL_STATE(41)] = 497,
  [SMALL_STATE(42)] = 507,
  [SMALL_STATE(43)] = 517,
  [SMALL_STATE(44)] = 527,
  [SMALL_STATE(45)] = 537,
  [SMALL_STATE(46)] = 547,
  [SMALL_STATE(47)] = 554,
  [SMALL_STATE(48)] = 559,
  [SMALL_STATE(49)] = 564,
  [SMALL_STATE(50)] = 571,
  [SMALL_STATE(51)] = 576,
  [SMALL_STATE(52)] = 583,
  [SMALL_STATE(53)] = 588,
  [SMALL_STATE(54)] = 593,
  [SMALL_STATE(55)] = 598,
  [SMALL_STATE(56)] = 602,
  [SMALL_STATE(57)] = 606,
  [SMALL_STATE(58)] = 610,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_image, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_image, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_platform_value, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 7),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(36),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(42),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_platform, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_platform_value, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
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
