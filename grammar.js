const PREC = {
	DOT: 18,
	FUNCTION: 8,
	POSTFIX: 7,
	PREFIX: 6,
	LOGIC: 5,
	BITWISE: 4,
	MULT: 3,
	ADD: 2,
	COMPARE: 1,
};

module.exports = grammar({
	name: 'zscript',

	extras: $ => [
		$.comment,
		/\s|\\\r?\n/,
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
			'{',
			field('body', repeat($._declaration)),
			'}',
		),

		const_definition: $ => seq(
			'const',
			field('name', $.identifier),
			'=',
			field('value', $._literal),
		),

		_declaration: $ => choice(
			$.method_declaration,
			$.variable_declaration,
			$.default_declaration,
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
			field('body', $.block),
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

		// as in the default actor values
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
			$.declaration_statement,
			$.generic_statement,
		),

		return_statement: $ => seq(
			'return',
			optional($._expression),
			';',
		),

		declaration_statement: $ => seq(
			choice(
				field('type', $._type),
				'let',
			),
			choice(
				$._left_expression,
				$.assignment_expression,
			),
			';',
		),

		if_statement: $ => prec.left(seq(
			'if',
			field('condition', $.parenthesized_expression),
			field('body', $._statement),
			optional(field('alternative', seq(
				'else',
				$._statement,
			))),
		)),

		for_statement: $ => seq(
			'for',
			'(',
			field('initializer', choice(
				$.declaration_statement,
				$.generic_statement,
			)),
			field('condition', ($._expression)),
			';',
			optional(field('update', $._expression)),
			')',
			field('body', $._statement),
		),

		foreach_statement: $ => seq(
			'foreach',
			'(',
			field('left', $._expression),
			':',
			field('right', $.identifier),
			')',
			field('body', $._statement),
		),

		generic_statement: $ => seq($._nonleft_expression, ';'),

		_expression: $ => choice(
			$._nonleft_expression,
			$._left_expression,
		),

		_nonleft_expression: $ => choice(
			$.assignment_expression,
			$.binary_expression,
			$.postfix_unary_expression,
			$.prefix_unary_expression,
			$.parenthesized_expression,
			$.vector_expression,
			$.function_expression,
			$._literal,
		),

		_left_expression: $ => choice(
			$.member_access_expression,
			$.identifier,
		),

		member_access_expression: $ => prec(PREC.DOT, seq(
			$._expression,
			'.',
			field('member', choice($.function_expression, $._left_expression)),
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

		binary_expression: $ => {
			const table = [
				[PREC.ADD, '+'],
				[PREC.ADD, '-'],
				[PREC.MULT, '*'],
				[PREC.MULT, '/'],
				[PREC.MULT, '%'],
				[PREC.BITWISE, '|'],
				[PREC.BITWISE, '&'],
				[PREC.BITWISE, '<<'],
				[PREC.BITWISE, '>>'],
				[PREC.COMPARE, '<'],
				[PREC.COMPARE, '>'],
				[PREC.COMPARE, '<='],
				[PREC.COMPARE, '>='],
				[PREC.COMPARE, '=='],
				[PREC.COMPARE, '!='],
				[PREC.LOGIC, '&&'],
				[PREC.LOGIC, '||'],
			];

			return choice(...table.map(([precedence, operator]) =>
				prec.left(precedence, prec.dynamic(2, seq(
					field('left', $._expression),
					field('operator', operator),
					field('right', $._expression),
				))),
			));
		},

		postfix_unary_expression: $ => prec.right(PREC.POSTFIX, seq(
			$._expression,
			choice('++', '--'),
		)),

		prefix_unary_expression: $ => prec.right(PREC.PREFIX, seq(
			choice('++', '--', '-', '!'),
			$._expression,
		)),

		parenthesized_expression: $ => seq(
			'(',
			$._expression,
			')',
		),

		vector_expression: $ => seq(
			'(',
			field('x', $._expression),
			',',
			field('y', $._expression),
			optional(seq(
				',',
				field('z', $._expression),
			)),
			')',
		),

		function_expression: $ => prec(PREC.FUNCTION, seq(
			field('function', $._expression),
			'(',
			field('arguments', optional(seq(
				$._expression,
				repeat(seq(
					',',
					$._expression,
				)),
			))),
			')',
		)),

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
		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		comment: $ => token(choice(
			seq('//', /[^\n\r]*/),
			seq(
				'/*',
				/[^*]*\*+([^/*][^*]*\*+)*/,
				'/',
			),
		)),

		_literal: $ => choice(
			$.string_literal,
			$.number_literal,
			$.boolean_literal,
		),

		string_literal: $ => seq(
			'"',
			repeat($._interpreted_string_literal_content),
			'"',
		),

		_interpreted_string_literal_content: _ => token.immediate(prec(1, /[^"\r\n\\]+/)),

		number_literal: $ => /[\d.]+/,

		boolean_literal: $ => choice(
			"true",
			"false",
			"True",
			"False",
		),

		// copied from tree-sitter-c-sharp
		identifier: $ => token(/[\p{L}\p{Nl}_][\p{L}\p{Nl}\p{Nd}\p{Pc}\p{Cf}\p{Mn}\p{Mc}]*/),
	},
});
