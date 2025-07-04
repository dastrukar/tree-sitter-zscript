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
		[$._function_expression_argument, $.vector_expression],
		[$._function_expression_argument, $.parenthesized_expression],
		[$._left_expression, $._class_type],
		[$.variable_declaration, $._class_type],
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
			$.const_array_definition,
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
			alias(/class/i, '_class'),
			field('name', $.identifier),
			field('inherit', optional(seq(
				':',
				$.identifier
			))),
			field('replaces', optional(seq(
				'replaces',
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
			alias(/struct/i, '_struct'),
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
			alias(/const/i, '_const'),
			field('name', $.identifier),
			'=',
			field('value', $._expression),
			';',
		),

		const_array_definition: $ => seq(
			optional('static'),
			alias(/const/i, '_const'),
			field('type', $._type), optional('[]'),
			field('name', $.identifier), optional('[]'),
			'=',
			field('contents', $.const_array_expression),
			';',
		),

		_declaration: $ => choice(
			$.method_declaration,
			$.variable_declaration,
			$.flagdef_declaration,
			$.property_declaration,
			$.default_declaration,
			$.enum_declaration,
			$.const_array_declaration,
			$.states_declaration,
			$.const_declaration,
		),

		method_declaration: $ => seq(
			repeat(choice(
				$.scope,
				$.modifier,
				$.access_level,
			)),
			field('type', $._type),
			repeat(seq(
				optional(','),
				field('type', $._type),
			)),
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

		flagdef_declaration: $ => seq(
			'flagdef',
			field('name', $.identifier),
			':',
			field('variable', $.identifier),
			',',
			field('number', $.number_literal),
			';',
		),

		property_declaration: $ => seq(
			'property',
			field('name', $.identifier),
			':',
			field('variable', $.identifier),
			repeat(seq(
				',',
				field('variable', $.identifier),
			)),
			';',
		),

		// as in the default actor values
		default_declaration: $ => seq(
			alias(/default/i, '_default'),
			'{',
			repeat(seq(
				choice(
					$.default_declaration_flag,
					$.default_declaration_value,
					alias(/projectile/i, '_projectile'),
					alias(/monster/i, '_monster'),
				),
				optional(';'),
			)),
			'}',
		),
		default_declaration_flag: $ => seq(choice('+', '-'), $._left_expression),
		default_declaration_value: $ => seq($._left_expression, $._expression, repeat(seq(',', $._expression))),

		enum_declaration: $ => seq(
			alias(/enum/i, '_enum'),
			field('name', $.identifier),
			'{',
			repeat($.enum_declaration_value),
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

		const_array_declaration: $ => alias($.const_array_definition, $.const_array_declaration),

		states_declaration: $ => seq(
			alias(/states/i, '_states'),
			'{',
			repeat(seq(
				field('label', alias(/\w+:/, $.label_identifier)),
				repeat($._states_statement),
			)),
			'}',
		),

		const_declaration: $ => alias($.const_definition, $.const_declaration),

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
			$.map_type,
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
			alias(/class/i, '_class'),
			'<',
			field('type', $._type),
			'>',
		),
		array_type: $ => seq(
			alias(/array/i, '_array'),
			'<',
			field('type', $._type),
			'>',
		),

		map_type: $ => seq(
			alias(/map/i, '_map'),
			'<',
			field('type', $._type),
			',',
			field('type', $._type),
			'>',
		),

		_statement: $ => choice(
			$.block,
			$.return_statement,
			$.continue_statement,
			$.break_statement,
			$.if_statement,
			$.switch_statement,
			$.case_statement,
			$.default_statement,
			$.while_statement,
			$.do_while_statement,
			$.for_statement,
			$.foreach_statement,
			$.declaration_statement,
			$.generic_statement,
		),

		return_statement: $ => seq(
			'return',
			optional(seq(
				$._expression,
				repeat(seq(
					',',
					$._expression,
				)),
			)),
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
			'(',
			field('condition', $._expression),
			')',
			field('body', $._statement),
			optional(field('alternative', seq(
				'else',
				$._statement,
			))),
		)),

		switch_statement: $ => prec.left(seq(
			'switch',
			'(',
			field('variable', $._expression),
			')',
			field('body', $.block),
		)),

		case_statement: $ => seq(
			'case',
			$._expression,
			':',
		),

		default_statement: $ => seq(
			alias(/default/i, '_default'),
			':',
		),

		while_statement: $ => seq(
			'while',
			'(',
			field('condition', $._expression),
			')',
			field('body', $._statement),
		),

		do_while_statement: $ => seq(
			'do',
			field('body', $._statement),
			'while',
			'(',
			field('condition', $._expression),
			')',
			optional(';')
		),

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

		generic_statement: $ => seq($._expression, ';'),

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
			$.array_expression,
			$.vector_expression,
			$.function_expression,
			$.typecast_expression,
			$.ternary_expression,
			$.string_concat_expression,
			$.const_array_expression,
			$._literal,
		),

		_left_expression: $ => choice(
			$.member_access_expression,
			$.subscript_expression,
			$.identifier,
		),

		member_access_expression: $ => prec(PREC.DOT, seq(
			choice($._expression, $.predefined_type),
			'.',
			field('member', $._left_expression),
		)),

		assignment_expression: $ => prec.right(seq(
			field('left', choice($._left_expression, $.array_expression)),
			choice(
				'=',
				'+=',
				'-=',
				'*=',
				'/=',
				'|=',
				'&=',
				'^=',
				'>>=',
				'<<=',
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
				[PREC.COMPARE, '~=='],
				[PREC.COMPARE, 'is'],
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
			choice('++', '--', '-', '!', '~'),
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
			field('argument', optional(seq(
				$._function_expression_argument,
				repeat(seq(
					',',
					$._function_expression_argument,
				)),
			))),
			')',
		)),
		_function_expression_argument: $ => seq(
			field('name', optional(seq(
				$.identifier,
				':',
			))),
			$._expression,
		),

		// because function expression can't pick up typecasting sometimes
		typecast_expression: $ => prec(PREC.FUNCTION, seq(
			choice(seq(
				'(',
				field('type', $._type),
				')',
			),
				field('type', $._type),
			),
			'(',
			field('target', $._expression),
			')',
		)),

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
			field('index', optional($._expression)),
			']',
		)),

		array_expression: $ => seq(
			'[',
			$._expression,
			repeat(seq(
				',',
				$._expression,
			)),
			']',
		),

		const_array_expression: $ => seq(
			'{',
			$._expression,
			repeat(seq(
				',',
				$._expression,
			)),
			'}',
		),

		_states_statement: $ => choice(
			$.frame_statement,
			$.control_statement,
		),

		frame_statement: $ => seq(
			field('sprite', $.frame_sprite),
			field('keyword', repeat($.frame_keyword)),
			choice(
				';',
				seq($.function_expression, ';'),
				$.block,
			),
		),
		frame_sprite: $ => choice(
			/\w{4} +\w+ +-?\d+/,
			/\w{4} +#+ +-?\d+/,
			/"----" +\w+ +-?\d+/,
			/"----" +#+ +-?\d+/,
			/---- +\w+ +-?\d+/,
			/---- +#+ +-?\d+/,
			/"####" +\w+ +-?\d+/,
			/"####" +#+ +-?\d+/,
			/#### +\w+ +-?\d+/,
			/#### +#+ +-?\d+/,
		),

		frame_keyword: $ => choice(
			/bright/i,
			/canraise/i,
			/fast/i,
			/nodelay/i,
			/slow/i,
			seq(
				/offset/i,
				'(',
				field('x', $._expression),
				',',
				field('y', $._expression),
				')',
			),
			seq(
				/light/i,
				'(',
				field('light', $._expression),
				')',
			),
		),

		control_statement: $ => seq(
			field('keyword', $.identifier),
			// alias(choice(
			// 	'loop', 'LOOP', 'Loop',
			// 	'stop', 'STOP', 'Stop',
			// 	'wait', 'WAIT', 'Wait',
			// 	'fail', 'FAIL', 'Fail',
			// 	seq(choice('goto', 'GOTO', 'Goto'), $._expression),
			// ), $.control_keyword),
			optional(choice(
				seq(alias(/super/i, '_super'), '::', $.identifier),
				$._expression
			)),
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
			$.name_literal,
			$.number_literal,
			$.hex_literal,
			$.boolean_literal,
		),

		string_literal: $ => seq(
			'"',
			repeat(choice(
				$._interpreted_string_literal_content,
				$.escape_sequence,
				$.colour_escape_sequence,
			)),
			'"',
		),

		_interpreted_string_literal_content: _ => token.immediate(prec(1, /[^"\\]+/)),
		escape_sequence: _ => token.immediate(/\\./),
		colour_escape_sequence: _ => token.immediate(/\\[a-z][a-zA-Z\-]?(\[[a-zA-Z]+\])?/),

		name_literal: $ => /'[^']+'/,

		number_literal: $ => /[\d.]+/,

		hex_literal: $ => /0x[\d\w]+/i,

		boolean_literal: $ => choice(
			/true/i,
			/false/i,
		),

		// copied from tree-sitter-c-sharp
		identifier: $ => token(/[\p{L}\p{Nl}_][\p{L}\p{Nl}\p{Nd}\p{Pc}\p{Cf}\p{Mn}\p{Mc}]*/),
	},
});
