(class_definition name: (identifier) @type)
(class_definition inherit: (identifier) @type)

(method_definition name: (identifier) @function)

[
	(predefined_type)
] @type.builtin

(variable_definition type: (class_name) @type)

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
