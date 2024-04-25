const PREC = {
	DOT: 18,
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
		[$._left_expression, $.function_expression],
		[$.function_expression, $._class_name],
		[$._left_expression, $._class_name],
		[$.default_declaration_flag, $._expression],
		[$.default_declaration_value, $._expression],
	],

	supertypes: $ => [
		$._definition,
		$._statement,
		$._expression,
		$._type,
	],

	word: $ => $.identifier,

	rules: {
		source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.version_definition,
			$.include_definition,
			$.class_definition,
			$.const_definition,
		),

		version_definition: $ => seq(
			'version',
			field('version', choice($.number_literal, $.string_literal)),
		),

		include_definition: $ => seq(
			'#include',
			field('path', $.string_literal),
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

		const_definition: $ => seq(
			'const',
			$.identifier,
			'=',
			$._literal,
		),

		_declaration: $ => seq(
			'{',
			repeat(choice(
				$.method_declaration,
				$.variable_declaration,
				$.default_declaration,
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

		default_declaration: $ => seq(
			'default',
			'{',
			repeat(seq(
				choice(
					$.default_declaration_flag,
					$.default_declaration_value,
				),
				optional(';'),
			)),
			'}',
		),
		default_declaration_flag: $ => seq(choice('+', '-'), $._left_expression),
		default_declaration_value: $ => seq($._left_expression, $._expression),

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
			$._class_name,
		),

		predefined_type: $ => choice(
			'int',
			'float',
			'double',
			'string',
			'bool',
			'void',
		),

		_class_name: $ => alias($.identifier, $.class_name),

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
			$._expression,
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
			$._nonleft_expression,
			$._left_expression,
		),

		_nonleft_expression: $ => choice(
			$.assignment_expression,
			$.binary_expression,
			$.comparison_expression,
			$.not_expression,
			$.postfix_unary_expression,
			$.prefix_unary_expression,
			$.parenthesized_expression,
			$.function_expression,
			'true',
			'false',
			'True',
			'False',
			$._literal,
		),

		_left_expression: $ => choice(
			$.member_access_expression,
			$.identifier,
		),

		member_access_expression: $ => prec(PREC.DOT, seq(
			choice($._expression, $.identifier),
			'.',
			field('member', choice($.function_expression, $.identifier)),
		)),

		assignment_expression: $ => prec.left(seq(
			$._left_expression,
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

		binary_expression: $ => choice(
			prec.left(1, seq($._expression, '+', $._expression)),
			prec.left(1, seq($._expression, '-', $._expression)),
			prec.left(2, seq($._expression, '*', $._expression)),
			prec.left(2, seq($._expression, '/', $._expression)),
		),

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

		parenthesized_expression: $ => seq(
			'(',
			$._expression,
			')',
		),

		function_expression: $ => seq(
			$.identifier,
			'(',
			repeat(seq(
				$._expression,
				optional(','),
			)),
			')',
		),

		scope: $ => choice(
			'clearscope',
			'virtualscope',
			'play',
			'ui',
			'action',
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

		_literal: $ => choice(
			$.string_literal,
			$.number_literal,
		),

		string_literal: $ => seq(
			'"',
			repeat($._interpreted_string_literal_content),
			token.immediate('"'),
		),

		_interpreted_string_literal_content: _ => token.immediate(prec(1, /[^"\r\n\\]+/)),

		number_literal: $ => /[\d.]+/,

		// copied from tree-sitter-c-sharp
		identifier: $ => /[\p{L}\p{Nl}_][\p{L}\p{Nl}\p{Nd}\p{Pc}\p{Cf}\p{Mn}\p{Mc}]*/,
	},
});
