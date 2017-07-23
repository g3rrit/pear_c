" Vim Syntax File
" Language: Pearlang
" Maintainer: Gerrit Proessl
" Last Revision: 7. Juli 2017

if exists("b:current_syntax")
    finish
endif

syn keyword pearTodo contained TODO FIXME XXX NOTE
syn match pearComment "//.*$" contains=pearTodo

"" Regular int like number with - + or nothing in front
syn match pearNum '\d\+' contained display
syn match pearNum '[-+]\d\+' contained display

" Floating point number with decimal no E or e (+,-)
syn match pearNum '\d\+\.\d*' contained display
syn match pearNum '[-+]\d\+\.\d*' contained display

syn keyword pearKey return struct null new crt break continue local while if for else
syn keyword pearType i8 i16 i32 i64 u8 u16 u32 u64 f32 f64 bool void int char

syn keyword pearOp + - * sizeof < > == != !

syn region pearString start='"' end='"'

let b:current_syntax = "pear"

hi def link pearTodo    Todo
hi def link pearNum     Constant
hi def link pearKey     Statement
hi def link pearComment Comment
hi def link pearType    Type
hi def link pearString  String
hi def link pearOp      Operator

