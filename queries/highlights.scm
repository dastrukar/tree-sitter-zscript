(class_definition name: (identifier) @type)
(class_definition inherit: (identifier) @type)
(struct_definition name: (identifier) @type)

(class_definition (method_declaration name: (identifier) @function))
(function_expression function: (identifier) @function)
(function_expression function: (subscript_expression array: (identifier) @function)) ; function name with namespace
(function_expression function: (subscript_expression index: (identifier) @keyword)) ; the namespace
(member_access_expression member: (identifier) @function)

(states_declaration label: (label_identifier) @keyword)
(frame_statement keyword: (generic_keyword) @keyword)
(frame_statement keyword: (offset_keyword) @function)
(frame_statement keyword: (light_keyword) @function)
(control_statement keyword: (identifier) @keyword)

(enum_declaration name: (identifier) @type)

[
	(predefined_type)
	(class_type)
	"array" "Array" "ARRAY"
] @type.builtin

(class_definition (variable_declaration type: (class_type) @type))

[
	(scope)
	(modifier)
	(access_level)
	"static"
] @keyword.storage.modifier

[
	"version"
	"#include"
	"default" "Default" "DEFAULT"
	"states" "States" "STATES"
	"let"
] @keyword

[
	"class" "Class" "CLASS"
	"const" "Const" "CONST"
	"struct" "Struct" "STRUCT"
	"enum" "Enum" "ENum" "ENUM"
] @keyword.storage.type

[
	(boolean_literal)
] @constant.builtin.boolean

[
	"for"
	"foreach"
] @keyword.control.repeat

[
	"if"
	"else"
] @keyword.control.conditional

[
	"continue"
	"break"
] @keyword.control

"return" @keyword.control.return

[
	"="
	"+="
	"-="
	"*="
	"/="
	"|="
	"+"
	"-"
	"*"
	"/"
	"%"
	"|"
	"&"
	"<<"
	">>"
	"<"
	">"
	"<="
	">="
	"=="
	"!="
	"&&"
	"||"
	"--"
	"++"
	"?"
	":"
	".."
	"!"
] @operator

(string_literal) @string
(number_literal) @constant.numeric

(comment) @comment
