#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_DASH_DASH_DASH_LF = 5,
  aux_sym_astro_component_script_token1 = 6,
  anon_sym_LT = 7,
  anon_sym_SLASH_GT = 8,
  anon_sym_LT_SLASH = 9,
  anon_sym_EQ = 10,
  sym_attribute_name = 11,
  sym_attribute_value = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_quoted_attribute_value_token1 = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_quoted_attribute_value_token2 = 16,
  sym_text = 17,
  sym__start_tag_name = 18,
  sym__script_start_tag_name = 19,
  sym__style_start_tag_name = 20,
  sym__end_tag_name = 21,
  sym_erroneous_end_tag_name = 22,
  sym__implicit_end_tag = 23,
  sym_raw_text = 24,
  sym_comment = 25,
  sym_fragment = 26,
  sym_doctype = 27,
  sym__node = 28,
  sym_astro_component_script = 29,
  sym_element = 30,
  sym_script_element = 31,
  sym_style_element = 32,
  sym_start_tag = 33,
  sym_script_start_tag = 34,
  sym_style_start_tag = 35,
  sym_self_closing_tag = 36,
  sym_end_tag = 37,
  sym_erroneous_end_tag = 38,
  sym_attribute = 39,
  sym_quoted_attribute_value = 40,
  aux_sym_fragment_repeat1 = 41,
  aux_sym_astro_component_script_repeat1 = 42,
  aux_sym_start_tag_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_DASH_DASH_DASH_LF] = "---\n",
  [aux_sym_astro_component_script_token1] = "astro_component_script_token1",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_fragment] = "fragment",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_astro_component_script] = "astro_component_script",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_astro_component_script_repeat1] = "astro_component_script_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_DASH_DASH_DASH_LF] = anon_sym_DASH_DASH_DASH_LF,
  [aux_sym_astro_component_script_token1] = aux_sym_astro_component_script_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_fragment] = sym_fragment,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_astro_component_script] = sym_astro_component_script,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_astro_component_script_repeat1] = aux_sym_astro_component_script_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_astro_component_script_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_astro_component_script] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_astro_component_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(1);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(32);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(47);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_LF);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_LF);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_astro_component_script_token1);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_astro_component_script_token1);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22, .external_lex_state = 2},
  [2] = {.lex_state = 22, .external_lex_state = 3},
  [3] = {.lex_state = 22, .external_lex_state = 3},
  [4] = {.lex_state = 22, .external_lex_state = 3},
  [5] = {.lex_state = 22, .external_lex_state = 3},
  [6] = {.lex_state = 22, .external_lex_state = 3},
  [7] = {.lex_state = 22, .external_lex_state = 2},
  [8] = {.lex_state = 22, .external_lex_state = 2},
  [9] = {.lex_state = 22, .external_lex_state = 2},
  [10] = {.lex_state = 22, .external_lex_state = 2},
  [11] = {.lex_state = 22, .external_lex_state = 3},
  [12] = {.lex_state = 22, .external_lex_state = 3},
  [13] = {.lex_state = 22, .external_lex_state = 3},
  [14] = {.lex_state = 22, .external_lex_state = 3},
  [15] = {.lex_state = 22, .external_lex_state = 2},
  [16] = {.lex_state = 22, .external_lex_state = 3},
  [17] = {.lex_state = 22, .external_lex_state = 3},
  [18] = {.lex_state = 22, .external_lex_state = 3},
  [19] = {.lex_state = 22, .external_lex_state = 3},
  [20] = {.lex_state = 22, .external_lex_state = 2},
  [21] = {.lex_state = 22, .external_lex_state = 3},
  [22] = {.lex_state = 22, .external_lex_state = 3},
  [23] = {.lex_state = 22, .external_lex_state = 3},
  [24] = {.lex_state = 22, .external_lex_state = 2},
  [25] = {.lex_state = 22, .external_lex_state = 2},
  [26] = {.lex_state = 22, .external_lex_state = 3},
  [27] = {.lex_state = 22, .external_lex_state = 2},
  [28] = {.lex_state = 22, .external_lex_state = 2},
  [29] = {.lex_state = 22, .external_lex_state = 2},
  [30] = {.lex_state = 22, .external_lex_state = 2},
  [31] = {.lex_state = 22, .external_lex_state = 3},
  [32] = {.lex_state = 22, .external_lex_state = 2},
  [33] = {.lex_state = 22, .external_lex_state = 2},
  [34] = {.lex_state = 22, .external_lex_state = 3},
  [35] = {.lex_state = 22, .external_lex_state = 3},
  [36] = {.lex_state = 22, .external_lex_state = 2},
  [37] = {.lex_state = 11, .external_lex_state = 4},
  [38] = {.lex_state = 11, .external_lex_state = 4},
  [39] = {.lex_state = 11, .external_lex_state = 4},
  [40] = {.lex_state = 11, .external_lex_state = 4},
  [41] = {.lex_state = 11, .external_lex_state = 4},
  [42] = {.lex_state = 11, .external_lex_state = 2},
  [43] = {.lex_state = 2, .external_lex_state = 2},
  [44] = {.lex_state = 11, .external_lex_state = 2},
  [45] = {.lex_state = 2, .external_lex_state = 2},
  [46] = {.lex_state = 11, .external_lex_state = 2},
  [47] = {.lex_state = 11, .external_lex_state = 2},
  [48] = {.lex_state = 11, .external_lex_state = 2},
  [49] = {.lex_state = 11, .external_lex_state = 4},
  [50] = {.lex_state = 11, .external_lex_state = 4},
  [51] = {.lex_state = 0, .external_lex_state = 5},
  [52] = {.lex_state = 11, .external_lex_state = 4},
  [53] = {.lex_state = 11, .external_lex_state = 4},
  [54] = {.lex_state = 31, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 5},
  [56] = {.lex_state = 0, .external_lex_state = 6},
  [57] = {.lex_state = 31, .external_lex_state = 2},
  [58] = {.lex_state = 31, .external_lex_state = 2},
  [59] = {.lex_state = 31, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 6},
  [61] = {.lex_state = 11, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 6},
  [63] = {.lex_state = 0, .external_lex_state = 6},
  [64] = {.lex_state = 0, .external_lex_state = 6},
  [65] = {.lex_state = 0, .external_lex_state = 7},
  [66] = {.lex_state = 0, .external_lex_state = 7},
  [67] = {.lex_state = 3, .external_lex_state = 2},
  [68] = {.lex_state = 4, .external_lex_state = 2},
  [69] = {.lex_state = 3, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 6},
  [73] = {.lex_state = 0, .external_lex_state = 6},
  [74] = {.lex_state = 0, .external_lex_state = 6},
  [75] = {.lex_state = 11, .external_lex_state = 2},
  [76] = {.lex_state = 11, .external_lex_state = 2},
  [77] = {.lex_state = 11, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 8},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 20, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 9},
  [97] = {.lex_state = 0, .external_lex_state = 9},
  [98] = {.lex_state = 20, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 8},
  [101] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_LF] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_fragment] = STATE(95),
    [sym_doctype] = STATE(7),
    [sym__node] = STATE(7),
    [sym_element] = STATE(7),
    [sym_script_element] = STATE(7),
    [sym_style_element] = STATE(7),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(62),
    [sym_style_start_tag] = STATE(60),
    [sym_self_closing_tag] = STATE(15),
    [sym_erroneous_end_tag] = STATE(7),
    [aux_sym_fragment_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_DASH_DASH_DASH_LF] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_SLASH] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_end_tag,
    STATE(19), 1,
      sym_self_closing_tag,
    STATE(56), 1,
      sym_style_start_tag,
    STATE(63), 1,
      sym_script_start_tag,
    STATE(5), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [46] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_self_closing_tag,
    STATE(33), 1,
      sym_end_tag,
    STATE(56), 1,
      sym_style_start_tag,
    STATE(63), 1,
      sym_script_start_tag,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [92] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    ACTIONS(35), 1,
      sym_text,
    ACTIONS(37), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_end_tag,
    STATE(19), 1,
      sym_self_closing_tag,
    STATE(56), 1,
      sym_style_start_tag,
    STATE(63), 1,
      sym_script_start_tag,
    STATE(3), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [138] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(39), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_end_tag,
    STATE(19), 1,
      sym_self_closing_tag,
    STATE(56), 1,
      sym_style_start_tag,
    STATE(63), 1,
      sym_script_start_tag,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [184] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LT_BANG,
    ACTIONS(44), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      anon_sym_LT_SLASH,
    ACTIONS(53), 1,
      sym_text,
    ACTIONS(56), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_self_closing_tag,
    STATE(56), 1,
      sym_style_start_tag,
    STATE(63), 1,
      sym_script_start_tag,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [227] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      sym_text,
    STATE(4), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(60), 1,
      sym_style_start_tag,
    STATE(62), 1,
      sym_script_start_tag,
    STATE(8), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [270] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_LT_BANG,
    ACTIONS(65), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_LT_SLASH,
    ACTIONS(74), 1,
      sym_text,
    STATE(4), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(60), 1,
      sym_style_start_tag,
    STATE(62), 1,
      sym_script_start_tag,
    STATE(8), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(85), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(89), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(93), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(97), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(105), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(109), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(81), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(101), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(117), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(121), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(125), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(113), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(133), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(129), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(77), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_DASH_DASH_DASH_LF,
      anon_sym_LT,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_text,
  [705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_attribute_name,
    ACTIONS(137), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(37), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_GT,
    ACTIONS(144), 1,
      anon_sym_SLASH_GT,
    ACTIONS(146), 1,
      sym_attribute_name,
    STATE(41), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(148), 1,
      anon_sym_GT,
    ACTIONS(150), 1,
      anon_sym_SLASH_GT,
    STATE(37), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_GT,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(152), 1,
      anon_sym_SLASH_GT,
    STATE(39), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(148), 1,
      anon_sym_GT,
    ACTIONS(154), 1,
      anon_sym_SLASH_GT,
    STATE(37), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_GT,
    ACTIONS(158), 1,
      sym_attribute_name,
    STATE(44), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_attribute_value,
    ACTIONS(162), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_quoted_attribute_value,
  [818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(166), 1,
      sym_attribute_name,
    STATE(44), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_attribute_value,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_quoted_attribute_value,
  [848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_attribute_name,
    ACTIONS(175), 1,
      anon_sym_GT,
    STATE(44), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_attribute_name,
    ACTIONS(177), 1,
      anon_sym_GT,
    STATE(42), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_attribute_name,
    ACTIONS(179), 1,
      anon_sym_GT,
    STATE(46), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_EQ,
    ACTIONS(181), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym__start_tag_name,
    ACTIONS(189), 1,
      sym__script_start_tag_name,
    ACTIONS(191), 1,
      sym__style_start_tag_name,
  [924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(199), 1,
      aux_sym_astro_component_script_token1,
    STATE(54), 1,
      aux_sym_astro_component_script_repeat1,
  [955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__script_start_tag_name,
    ACTIONS(191), 1,
      sym__style_start_tag_name,
    ACTIONS(202), 1,
      sym__start_tag_name,
  [968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    ACTIONS(206), 1,
      sym_raw_text,
    STATE(16), 1,
      sym_end_tag,
  [981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(210), 1,
      aux_sym_astro_component_script_token1,
    STATE(54), 1,
      aux_sym_astro_component_script_repeat1,
  [994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_astro_component_script_token1,
    STATE(57), 1,
      aux_sym_astro_component_script_repeat1,
    STATE(88), 1,
      sym_astro_component_script,
  [1007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_astro_component_script_token1,
    STATE(57), 1,
      aux_sym_astro_component_script_repeat1,
    STATE(82), 1,
      sym_astro_component_script,
  [1020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    ACTIONS(216), 1,
      sym_raw_text,
    STATE(27), 1,
      sym_end_tag,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_EQ,
    ACTIONS(181), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    ACTIONS(220), 1,
      sym_raw_text,
    STATE(25), 1,
      sym_end_tag,
  [1057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    ACTIONS(222), 1,
      sym_raw_text,
    STATE(17), 1,
      sym_end_tag,
  [1070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym__end_tag_name,
    ACTIONS(228), 1,
      sym_erroneous_end_tag_name,
  [1088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(230), 1,
      sym__end_tag_name,
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      aux_sym_quoted_attribute_value_token2,
  [1108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      aux_sym_quoted_attribute_value_token1,
  [1118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      aux_sym_quoted_attribute_value_token2,
  [1128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      aux_sym_quoted_attribute_value_token1,
  [1138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    STATE(34), 1,
      sym_end_tag,
  [1148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    STATE(28), 1,
      sym_end_tag,
  [1206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    STATE(21), 1,
      sym_end_tag,
  [1216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    STATE(30), 1,
      sym_end_tag,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_GT,
  [1233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH_DASH_LF,
  [1240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_GT,
  [1247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_GT,
  [1254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
  [1261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym__end_tag_name,
  [1268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_GT,
  [1275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DASH_DASH_DASH_LF,
  [1282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_GT,
  [1289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_doctype_token1,
  [1296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_GT,
  [1303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym__doctype,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
  [1317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
  [1324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
  [1331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_erroneous_end_tag_name,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_erroneous_end_tag_name,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_doctype_token1,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
  [1359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym__end_tag_name,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 313,
  [SMALL_STATE(10)] = 327,
  [SMALL_STATE(11)] = 341,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 383,
  [SMALL_STATE(15)] = 397,
  [SMALL_STATE(16)] = 411,
  [SMALL_STATE(17)] = 425,
  [SMALL_STATE(18)] = 439,
  [SMALL_STATE(19)] = 453,
  [SMALL_STATE(20)] = 467,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 495,
  [SMALL_STATE(23)] = 509,
  [SMALL_STATE(24)] = 523,
  [SMALL_STATE(25)] = 537,
  [SMALL_STATE(26)] = 551,
  [SMALL_STATE(27)] = 565,
  [SMALL_STATE(28)] = 579,
  [SMALL_STATE(29)] = 593,
  [SMALL_STATE(30)] = 607,
  [SMALL_STATE(31)] = 621,
  [SMALL_STATE(32)] = 635,
  [SMALL_STATE(33)] = 649,
  [SMALL_STATE(34)] = 663,
  [SMALL_STATE(35)] = 677,
  [SMALL_STATE(36)] = 691,
  [SMALL_STATE(37)] = 705,
  [SMALL_STATE(38)] = 720,
  [SMALL_STATE(39)] = 737,
  [SMALL_STATE(40)] = 754,
  [SMALL_STATE(41)] = 771,
  [SMALL_STATE(42)] = 788,
  [SMALL_STATE(43)] = 802,
  [SMALL_STATE(44)] = 818,
  [SMALL_STATE(45)] = 832,
  [SMALL_STATE(46)] = 848,
  [SMALL_STATE(47)] = 862,
  [SMALL_STATE(48)] = 876,
  [SMALL_STATE(49)] = 890,
  [SMALL_STATE(50)] = 902,
  [SMALL_STATE(51)] = 911,
  [SMALL_STATE(52)] = 924,
  [SMALL_STATE(53)] = 933,
  [SMALL_STATE(54)] = 942,
  [SMALL_STATE(55)] = 955,
  [SMALL_STATE(56)] = 968,
  [SMALL_STATE(57)] = 981,
  [SMALL_STATE(58)] = 994,
  [SMALL_STATE(59)] = 1007,
  [SMALL_STATE(60)] = 1020,
  [SMALL_STATE(61)] = 1033,
  [SMALL_STATE(62)] = 1044,
  [SMALL_STATE(63)] = 1057,
  [SMALL_STATE(64)] = 1070,
  [SMALL_STATE(65)] = 1078,
  [SMALL_STATE(66)] = 1088,
  [SMALL_STATE(67)] = 1098,
  [SMALL_STATE(68)] = 1108,
  [SMALL_STATE(69)] = 1118,
  [SMALL_STATE(70)] = 1128,
  [SMALL_STATE(71)] = 1138,
  [SMALL_STATE(72)] = 1148,
  [SMALL_STATE(73)] = 1156,
  [SMALL_STATE(74)] = 1164,
  [SMALL_STATE(75)] = 1172,
  [SMALL_STATE(76)] = 1180,
  [SMALL_STATE(77)] = 1188,
  [SMALL_STATE(78)] = 1196,
  [SMALL_STATE(79)] = 1206,
  [SMALL_STATE(80)] = 1216,
  [SMALL_STATE(81)] = 1226,
  [SMALL_STATE(82)] = 1233,
  [SMALL_STATE(83)] = 1240,
  [SMALL_STATE(84)] = 1247,
  [SMALL_STATE(85)] = 1254,
  [SMALL_STATE(86)] = 1261,
  [SMALL_STATE(87)] = 1268,
  [SMALL_STATE(88)] = 1275,
  [SMALL_STATE(89)] = 1282,
  [SMALL_STATE(90)] = 1289,
  [SMALL_STATE(91)] = 1296,
  [SMALL_STATE(92)] = 1303,
  [SMALL_STATE(93)] = 1310,
  [SMALL_STATE(94)] = 1317,
  [SMALL_STATE(95)] = 1324,
  [SMALL_STATE(96)] = 1331,
  [SMALL_STATE(97)] = 1338,
  [SMALL_STATE(98)] = 1345,
  [SMALL_STATE(99)] = 1352,
  [SMALL_STATE(100)] = 1359,
  [SMALL_STATE(101)] = 1366,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(101),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(59),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(51),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(97),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(92),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(58),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(55),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(96),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(49),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(61),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_astro_component_script_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_astro_component_script_repeat1, 2), SHIFT_REPEAT(54),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_astro_component_script, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [274] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_astro_external_scanner_create(void);
void tree_sitter_astro_external_scanner_destroy(void *);
bool tree_sitter_astro_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_astro_external_scanner_serialize(void *, char *);
void tree_sitter_astro_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_astro(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_astro_external_scanner_create,
      tree_sitter_astro_external_scanner_destroy,
      tree_sitter_astro_external_scanner_scan,
      tree_sitter_astro_external_scanner_serialize,
      tree_sitter_astro_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
