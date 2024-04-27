(class_definition name: (identifier) @type)
(class_definition inherit: (identifier) @type)

(class_definition (method_declaration name: (identifier) @function))
(function_expression function: (identifier) @function)
(member_access_expression member: (identifier) @function)

(states_declaration label: (label_identifier) @keyword)
(frame_statement keyword: (generic_keyword) @keyword)
(frame_statement keyword: (offset_keyword) @function)
(frame_statement keyword: (light_keyword) @function)
(control_statement) @keyword


[
	(predefined_type)
	(class_name)
	"let"
] @type.builtin

(class_definition (variable_declaration type: (class_name) @type))

[
	(scope)
	(modifier)
	(access_level)
] @keyword.storage.modifier

[
	"version"
	"#include"
	"default" "Default" "DEFAULT"
	"states" "States" "STATES"
] @keyword

[
	"class"
	"const"
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

"return" @keyword.control.return

[
	"="
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
] @operator

(string_literal) @string
(number_literal) @constant.numeric

(comment) @comment
