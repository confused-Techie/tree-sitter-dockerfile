#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  aux_sym_run_instruction_token1 = 3,
  sym_source_file = 4,
  sym__lines = 5,
  sym_comment = 6,
  sym_instruction = 7,
  sym_run_instruction = 8,
  sym_arguments = 9,
  aux_sym_source_file_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_run_instruction_token1] = "RUN",
  [sym_source_file] = "source_file",
  [sym__lines] = "_lines",
  [sym_comment] = "comment",
  [sym_instruction] = "instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_arguments] = "arguments",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [sym_source_file] = sym_source_file,
  [sym__lines] = sym__lines,
  [sym_comment] = sym_comment,
  [sym_instruction] = sym_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_arguments] = sym_arguments,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_run_instruction_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym__lines] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_instruction] = STATE(2),
    [sym_run_instruction] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_run_instruction_token1] = ACTIONS(7),
  },
  [2] = {
    [sym__lines] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_run_instruction] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_run_instruction_token1] = ACTIONS(7),
  },
  [3] = {
    [sym__lines] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_run_instruction] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [aux_sym_run_instruction_token1] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
  [6] = 1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
  [12] = 1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
  [18] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_run_instruction_token1,
  [24] = 2,
    ACTIONS(27), 1,
      aux_sym_comment_token1,
    STATE(7), 1,
      sym_arguments,
  [31] = 1,
    ACTIONS(29), 1,
      aux_sym_comment_token1,
  [35] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 6,
  [SMALL_STATE(6)] = 12,
  [SMALL_STATE(7)] = 18,
  [SMALL_STATE(8)] = 24,
  [SMALL_STATE(9)] = 31,
  [SMALL_STATE(10)] = 35,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
