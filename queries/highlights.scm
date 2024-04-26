(class_definition name: (identifier) @type)
(class_definition inherit: (identifier) @type)

(class_definition (method_declaration name: (identifier) @function))
(function_expression (identifier) @function)
(member_access_expression member: (identifier) @function)

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
	"default"
] @keyword

[
	"class"
	"const"
] @keyword.storage.type

[
	"true"
	"false"
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
] @operator

(string_literal) @string
(number_literal) @number

(comment) @comment
