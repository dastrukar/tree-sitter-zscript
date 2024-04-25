(class_definition name: (identifier) @type)
(class_definition inherit: (identifier) @type)

(class_definition (method_declaration name: (identifier) @function))

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
	"class"
	"version"
] @keyword.storage.type

[
	"true"
	"false"
] @constant.builtin.boolean

[
	"foreach"
] @keyword.control.repeat

[
	"if"
	"else"
] @keyword.control.conditional

"return" @keyword.control.return

[
	(string_expression)
] @string

(comment) @comment
