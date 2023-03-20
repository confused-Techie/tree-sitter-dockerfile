module.exports = grammar({
  name: 'dockerfile',

  extras: $ => [
    /\s+/,
  ],

  rules: {
    source_file: $ => repeat($._lines),

    _lines: $ => choice(
      $.instruction,
      $.comment,
    ),

    comment: $ => seq('#', /.*/),

    instruction: $ => choice(
      $.from_instruction,
      $.run_instruction,
      $.cmd_instruction,
    ),

    run_instruction: $ => seq(
      alias(/[rR][uU][nN]/, 'RUN'),
      choice(
        $.string_array,
        $.shell_command
      )
    ),

    from_instruction: $ => seq(
      alias(/[fF][rR][oO][mM]/, 'FROM'),
      seq(
        optional($._from_platform),
        optional($.from_platform_value),
        $.from_image,
        optional($.from_image_tag),
        optional($.from_image_digest),
        optional($.from_image_name),
      ),
    ),

    _from_platform: $ => seq(
      $.from_platform_declaration,
      $.from_platform_value
    ),

    from_platform_declaration: $ => /--platform=/,

    from_platform_value: $ => /[a-z]+/,

    from_image: $ => /[a-z]+/,

    from_image_tag: $ => /:[^\s]+/,

    from_image_digest: $ => /@[^\s]+/,

    from_image_name: $ => /AS [^\s]+/,

    cmd_instruction: $ => seq(
      alias(/[cC][mM][dD]/, 'CMD'),
      choice(
        $.string_array,
        $.shell_command
      )
    ),

    arguments: $ => /.*/,

    string_array: $ => seq(
      "[",
      optional(
        seq($.string, repeat(seq(",", $.string)))
      ),
      "]"
    ),

    string: $ => choice(
      $.double_quoted_string,
      $.single_quoted_string
    ),

    single_quoted_string: $ => seq(
      "'",
      repeat(
        choice(
          token.immediate(/[^'\n\\\$]+/)
        )
      ),
      "'"
    ),

    double_quoted_string: $ => seq(
      '"',
      repeat(
        choice(
          token.immediate(/[^"\n\\\$]+/)
        )
      ),
      '"'
    ),

    shell_command: $ => seq(
      $.shell_fragment,
    ),

    shell_fragment: $ => repeat1(
      choice(
        /[,=-]/,
        /[^\\\[\n#\s,=-][^\\\n]*/,
        /\\[^\n,=-]/
      )
    ),

  },

});
