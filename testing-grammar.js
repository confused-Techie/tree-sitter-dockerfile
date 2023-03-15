module.exports = grammar({
  name: 'dockerfile',

  extras: $ => [
    /\s/,
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
    ),

    run_instruction: $ => seq(
      alias(/[rR][uU][nN]/, 'RUN'),
      choice(
        $.string_array,
      ),
    ),

    from_instruction: $ => seq(
      alias(/[fF][rR][oO][mM]/, 'FROM'),
      seq(
        //optional(
        //  $.platform_key_value
        //),
        field("image", token(/[a-z]+/)),
        //optional(
        //  choice(
        //    field("tag", seq(':', /.*/)),
        //    field("digest", seq('@', /.*/))
        //  )
        //),

      ),
      //$.arguments,
    ),

    arguments: $ => choice(
      $.string_array,
      // TODO Figure out how to support CLI data in run
    ),

    string_array: $ => seq(
      '[',
      optional(
        seq($.string, repeat( seq(',', $.string)))
      ),
      ']'
    ),

    string: $ => choice(
      $.double_quoted_string,
      $.single_quoted_string,
    ),

    double_quoted_string: $ => seq('"', /[^"\n\\\$]+/, '"'),

    single_quoted_string: $ => seq("'", /[^'\n\\\$]+/, "'"),

    platform_key_value: $ => seq('--platform=', /.*/),

    _key_value: $ => seq(
      field("name", token.immediate(/[a-z][-a-z]*/)),
      token.immediate("="),
      field("value", token.immediate(/[^\s]+/))
    ),

  }
});
