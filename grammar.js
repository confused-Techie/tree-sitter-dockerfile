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
    ),

    run_instruction: $ => seq(
      alias(/[rR][uU][nN]/, 'RUN'),
      $.arguments
    ),

    from_instruction: $ => seq(
      alias(/[fF][rR][oO][mM]/, 'FROM'),
      $.arguments,
    ),

    arguments: $ => /.*/,

  },

});
