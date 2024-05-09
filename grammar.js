const PREC = {
	DOT: 18,
	FUNCTION: 8,
	POSTFIX: 7,
	PREFIX: 6,
	COMPARE: 5,
	BITWISE: 4,
	MULT: 3,
	ADD: 2,
	LOGIC: 1,
};

module.exports = grammar({
	name: 'zscript',

	extras: $ => [
		$.comment,
		/\s|\\\r?\n/,
	],

	conflicts: $ => [
		[$.function_expression, $.vector_expression],
		[$.function_expression_argument, $.vector_expression],
		[$.function_expression_argument, $.parenthesized_expression],
		[$._left_expression, $._class_type],
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
			$.struct_definition,
			$.const_definition,
			$.const_array_declaration,
			$.enum_declaration,
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
			choice('class', 'Class', 'CLASS'),
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
			repeat($._declaration),
			'}',
		),

		struct_definition: $ => seq(
			repeat(choice(
				$.scope,
				$.modifier,
			)),
			choice('struct', 'Struct', 'STRUCT'),
			field('name', $.identifier),
			repeat(choice(
				$.scope,
				$.modifier,
			)),
			'{',
			repeat($._declaration),
			'}',
			optional(';'),
		),

		const_definition: $ => seq(
			choice('const', 'Const', 'CONST'),
			field('name', $.identifier),
			'=',
			field('value', $._literal),
			';',
		),

		_declaration: $ => choice(
			$.method_declaration,
			$.variable_declaration,
			$.default_declaration,
			$.enum_declaration,
			$.const_array_declaration,
			$.states_declaration,
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
			choice($.block, ';'),
		),

		parameter_list: $ => seq(
			'(',
			field('parameter', repeat(seq(
				optional('out'),
				field('type', $._type),
				field('name', $.identifier),
				field('default_value', optional(seq(
					'=',
					$._expression,
				))),
				optional(','),
			))),
			')',
		),

		variable_declaration: $ => seq(
			repeat(choice(
				$.scope,
				$.modifier,
				$.access_level,
			)),
			field('type', $._type),
			field('name', $.identifier),
			repeat(seq(
				',',
				field('name', $.identifier),
			)),
			';',
		),

		// as in the default actor values
		default_declaration: $ => seq(
			choice('Default', 'default', 'DEFAULT'),
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

		enum_declaration: $ => seq(
			choice('enum', 'Enum', 'ENum', 'ENUM'),
			field('name', $.identifier),
			'{',
			$.enum_declaration_value,
			'}',
			optional(';'),
		),
		enum_declaration_value: $ => seq(
			field('name', $.identifier),
			optional(seq(
				'=',
				field('value', $._literal),
			)),
			optional(','),
		),

		const_array_declaration: $ => seq(
			'static',
			choice('const', 'Const', 'CONST'),
			field('type', $._type), optional('[]'),
			field('name', $.identifier), optional('[]'),
			'=',
			'{',
			field('item', choice($._literal, $.identifier)),
			repeat(seq(
				',',
				field('item', choice($._literal, $.identifier)),
			)),
			'}',
			';',
		),

		states_declaration: $ => seq(
			choice('States', 'states', 'STATES'),
			'{',
			repeat(seq(
				field('label', alias(/\w+:/, $.label_identifier)),
				repeat($._states_statement),
			)),
			'}',
		),

		block: $ => seq(
			'{',
			repeat($._statement),
			'}',
		),

		_type: $ => choice(
			$.predefined_type,
			$._class_type,
			$.classname_type,
			$.array_type,
		),

		predefined_type: $ => choice(
			'int',
			'float',
			'double',
			'string',
			'bool',
			'void',
		),

		_class_type: $ => alias($.identifier, $.class_type),
		classname_type: $ => seq(
			choice('class', 'Class', 'CLASS'),
			'<',
			field('type', $._type),
			'>',
		),
		array_type: $ => seq(
			choice('array', 'Array', 'ARRAY'),
			'<',
			field('type', $._type),
			'>',
		),

		_statement: $ => choice(
			$.block,
			$.return_statement,
			$.continue_statement,
			$.break_statement,
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

		continue_statement: $ => seq('continue', ';',),
		break_statement: $ => seq('break', ';',),

		declaration_statement: $ => seq(
			choice(
				field('type', $._type),
				'let',
			),
			choice(
				seq(
					field('name', $._left_expression),
					repeat(seq(
						',',
						field('name', $._left_expression),
					)),
				),
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
			$.ternary_expression,
			$.string_concat_expression,
			$._literal,
		),

		_left_expression: $ => choice(
			$.member_access_expression,
			$.subscript_expression,
			$.identifier,
		),

		member_access_expression: $ => prec(PREC.DOT, seq(
			$._expression,
			'.',
			field('member', choice($.function_expression, $._left_expression)),
		)),

		assignment_expression: $ => prec.right(seq(
			field('left', $._left_expression),
			choice(
				'=',
				'+=',
				'-=',
				'*=',
				'/=',
				'|=',
			),
			field('right', $._expression),
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
				$.function_expression_argument,
				repeat(seq(
					',',
					$.function_expression_argument,
				)),
			))),
			')',
		)),
		function_expression_argument: $ => seq(
			field('name', optional(seq(
				$.identifier,
				':',
			))),
			$._expression,
		),

		ternary_expression: $ => prec.left(seq(
			field('condition', $._expression),
			'?',
			field('consequence', $._expression),
			':',
			field('alternative', $._expression),
		)),

		string_concat_expression: $ => prec.right(seq(
			$._expression,
			'..',
			$._expression,
		)),

		subscript_expression: $ => prec.right(PREC.POSTFIX, seq(
			field('array', $._expression),
			'[',
			field('index', $._expression),
			']',
		)),

		_states_statement: $ => choice(
			$.frame_statement,
			$.control_statement,
		),

		frame_statement: $ => seq(
			field('sprite', $.frame_sprite),
			field('duration', $._expression),
			field('keyword', repeat($._frame_keyword)),
			field('action', choice(
				$._statement,
				';', // statement must always end with a semicolon
			)),
		),
		frame_sprite: $ => choice(
			/\w{4} *\w/,
			/"----" *\w/,
			/"####" *#/,
		),

		_frame_keyword: $ => choice(
			alias(/[a-zA-Z]+/, $.generic_keyword),
			alias(seq(
				choice('Offset', 'offset', 'OFFSET'),
				'(',
				field('x', $._expression),
				',',
				field('y', $._expression),
				')',
			), $.offset_keyword),
			alias(seq(
				choice('Light', 'light', 'LIGHT'),
				'(',
				field('light', $._expression),
				')',
			), $.light_keyword),
		),

		control_statement: $ => seq(
			$.identifier,
			// choice(
			// 	'loop', 'LOOP', 'Loop',
			// 	'stop', 'STOP', 'Stop',
			// 	'wait', 'WAIT', 'Wait',
			// 	'fail', 'FAIL', 'Fail',
			// 	seq(choice('goto', 'GOTO', 'Goto'), $._expression),
			// ),
			optional($._expression),
			';',
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
			'native',
			$.deprecated_modifier,
		),

		deprecated_modifier: $ => seq(
			'deprecated',
			'(',
			field('version', $._literal),
			',',
			field('warning', $._literal),
			')',
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
