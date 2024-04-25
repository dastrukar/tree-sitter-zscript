const PREC = {
	POSTFIX: 6,
	PREFIX: 5,
};

module.exports = grammar({
	name: 'zscript',

	extras: $ => [
		$.comment,
		/\W/,
	],

	conflicts: $ => [
	],

	rules: {
		source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.version_definition,
			$.include_definition,
			$.class_definition,
		),

		version_definition: $ => seq(
			'version',
			field('version', choice($.number, $.string_expression)),
		),

		include_definition: $ => seq(
			'#include',
			field('path', $.identifier),
		),

		class_definition: $ => seq(
			repeat(choice(
				$.scope,
				$.modifier,
			)),
			'class',
			field('name', $.identifier),
			field('inherit', optional(seq(
				':',
				$.identifier
			))),
			repeat(choice(
				$.scope,
				$.modifier,
			)),
			$._declaration,
		),

		_declaration: $ => seq(
			'{',
			repeat(choice(
				$.method_declaration,
				$.variable_declaration,
			)),
			'}',
		),

		method_declaration: $ => seq(
			repeat(choice(
				$.scope,
				$.modifier,
				$.access_level,
			)),
			field('type', $._type),
			field('name', $.identifier),
			$.parameter_list,
			$.block,
		),

		variable_declaration: $ => seq(
			repeat(choice(
				$.scope,
				$.modifier,
				$.access_level,
			)),
			field('type', $._type),
			field('name', $.identifier),
			';',
		),

		parameter_list: $ => seq(
			'(',
			repeat(seq(
				optional('out'),
				field('type', $._type),
				$.identifier,
				optional(','),
			)),
			')',
		),

		block: $ => seq(
			'{',
			repeat($._statement),
			'}',
		),

		_type: $ => choice(
			$.predefined_type,
			$.class_name,
		),

		predefined_type: $ => choice(
			'int',
			'float',
			'double',
			'string',
			'bool',
			'void',
		),

		class_name: $ => /[a-zA-Z0-9_]+/,

		_statement: $ => choice(
			$.block,
			$.return_statement,
			$.if_statement,
			$.for_statement,
			$.foreach_statement,
			$.variable_statement,
		),

		return_statement: $ => seq(
			'return',
			optional($._expression),
			';',
		),

		variable_statement: $ => seq(
			optional(choice(
				$._type,
				'let',
			)),
			choice(
				$.identifier,
				$.assignment_expression,
			),
			';',
		),

		if_statement: $ => prec.left(seq(
			'if',
			'(',
			repeat($._expression),
			')',
			$._statement,
			optional(seq(
				'else',
				$._statement,
			)),
		)),

		for_statement: $ => seq(
			'for',
			'(',
			$.variable_statement,
			optional($._expression),
			';',
			optional($._expression),
			')',
			$._statement,
		),

		foreach_statement: $ => seq(
			'foreach',
			'(',
			$._expression,
			':',
			$.identifier,
			')',
			$._statement,
		),

		_expression: $ => choice(
			$.assignment_expression,
			$.comparison_expression,
			$.not_expression,
			$.postfix_unary_expression,
			$.prefix_unary_expression,
			$.string_expression,
			$.identifier,
			$.number,
			'true',
			'false',
		),

		assignment_expression: $ => prec.left(seq(
			$.identifier,
			choice(
				'=',
				'+=',
				'-=',
				'*=',
				'/=',
				'|=',
			),
			$._expression,
		)),

		comparison_expression: $ => prec.left(seq(
			$._expression,
			choice('<', '>', '<=', '>=', '==', '!='),
			$._expression,
		)),

		not_expression: $ => prec.left(seq(
			'!',
			$._expression,
		)),

		postfix_unary_expression: $ => prec.left(PREC.POSTFIX, seq(
			$._expression,
			choice('++', '--'),
		)),

		prefix_unary_expression: $ => prec.right(PREC.PREFIX, seq(
			choice('++', '--'),
			$._expression,
		)),

		string_expression: $ => seq(
			'"',
			repeat($._interpreted_string_literal_content),
			token.immediate('"'),
		),

		_interpreted_string_literal_content: _ => token.immediate(prec(1, /[^"\r\n\\]+/)),

		scope: $ => choice(
			'clearscope',
			'virtualscope',
			'play',
			'ui',
		),

		modifier: $ => choice(
			'abstract',
			'virtual',
			'override',
			'static',
			'transient',
			'extend',
		),

		access_level: $ => choice(
			'private',
			'protected',
		),

		// regex taken from tree-sitter-c-sharp
		comment: $ => token(choice(
			seq('//', /[^\n\r]*/),
			seq(
				'/*',
				/[^*]*\*+([^/*][^*]*\*+)*/,
				'*/',
			),
		)),

		identifier: $ => /[a-zA-Z0-9_]+/,
		number: $ => /[\d.]+/,
	},
});
