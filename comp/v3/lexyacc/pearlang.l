
%{
#include<stdio.h>

#define YY_DECL int yylex()

#include"fileprod.h"

#include"pearlang.tab.h"

int lineNum = 0;
%}

%%

[ \t] ; //ignore all whitespaces
[\n]                  { printf("\n"); lineNum++;} 

return                {yylval.str = createStr(yytext); return RETURN;}
break                 {yylval.str = createStr(yytext); return BREAK;}
continue              {yylval.str = createStr(yytext); return CONTINUE;}
null                  {yylval.str = createStr("NULL"); return NUL;}
crt                   {yylval.str = createStr(yytext); return CRT;}
new                   {yylval.str = createStr(yytext); return NEW;}
struct                {yylval.str = createStr(yytext); return STRUCT;}
#include              {yylval.str = createStr(yytext); return INCLUDE;}
local                 {yylval.str = createStr(yytext); return LOCAL;}
if                    {yylval.str = createStr(yytext); return IF;}
else                  {yylval.str = createStr(yytext); return ELSE;}
while                 {yylval.str = createStr(yytext); return WHILE;}
for                   {yylval.str = createStr(yytext); return FOR;}
sizeof                {yylval.str = createStr(yytext); return SIZEOF;}

";"                   {yylval.str = createStr(yytext); printf("SEMICOLON "); return SEMICOLON;}
":"                   {yylval.str = createStr(yytext); printf("COLON "); return COLON;}
"("                   {yylval.str = createStr(yytext); printf("L_BRACE"); return L_BRACE;}
")"                   {yylval.str = createStr(yytext); printf("R_BRACE"); return R_BRACE;}
"->"                  {yylval.str = createStr(yytext); printf("AR"); return AR;}
"&"                   {yylval.str = createStr(yytext); printf("ADDRESS"); return ADDRESS;}
"="                   {yylval.str = createStr(yytext); printf("EQUAL"); return EQUAL;}
","                   {yylval.str = createStr(yytext); printf("COMMA"); return COMMA;}
"."                   {yylval.str = createStr(yytext); printf("DOT"); return DOT;}
"+"                   {yylval.str = createStr(yytext); printf("PLUS"); return PLUS;}
"-"                   {yylval.str = createStr(yytext); printf("MINUS"); return MINUS;}         
"*"                   {yylval.str = createStr(yytext); printf("TIMES"); return TIMES;}
"#"                   {yylval.str = createStr(yytext); printf("HASH"); return HASH;}
">"                   {yylval.str = createStr(yytext); printf("GREATER"); return GREATER;}
"<"                   {yylval.str = createStr(yytext); printf("LESS"); return LESS;}
">="                   {yylval.str = createStr(yytext); printf("GREQ"); return GREQ;}
"<="                   {yylval.str = createStr(yytext); printf("LEEQ"); return LEEQ;}
"=="                   {yylval.str = createStr(yytext); printf("SAME"); return SAME;}
"!="                   {yylval.str = createStr(yytext); printf("NOTEQ"); return NOTEQ;}
"||"                   {yylval.str = createStr(yytext); printf("OR"); return OR;}
"&&"                   {yylval.str = createStr(yytext); printf("AND"); return AND;}
"!"                   {yylval.str = createStr(yytext); printf("NOT"); return NOT;}
"/"                   {yylval.str = createStr(yytext); printf("DIVIDED"); return DIVIDED;}
"%"                   {yylval.str = createStr(yytext); printf("MODULO"); return MODULO;}
"\""                  {yylval.str = createStr(yytext); printf("QUOTATION"); return QUOTATION;}


"{"                   {yylval.str = createStr(yytext); printf("L_GBRACE"); return L_GBRACE;}
"}"                   {yylval.str = createStr(yytext); printf("R_GBRACE"); return R_GBRACE;}

true                  {yylval.str = createStr(yytext); printf("TRUE"); return TRUE;}
false                 {yylval.str = createStr(yytext); printf("FALSE"); return FALSE;}

i8                    {yylval.str = createStr("int8_t"); printf("I8"); return I8;}
i16                   {yylval.str = createStr("int16_t"); printf("I16"); return I16;}
i32                   {yylval.str = createStr("int32_t"); printf("I32"); return I32;}
i64                   {yylval.str = createStr("long long"); printf("I64"); return I64;}
u8                    {yylval.str = createStr("uint8_t"); printf("U8"); return U8;}
u16                   {yylval.str = createStr("uint16_t"); printf("U16"); return U16;}
u32                   {yylval.str = createStr("uint32_t"); printf("U32"); return U32;}
u64                   {yylval.str = createStr("unsigned long long"); printf("U64"); return U64;}
f32                   {yylval.str = createStr("float"); printf("F32"); return F32;}
f64                   {yylval.str = createStr("double"); printf("F64"); return F64;}
int                   {yylval.str = createStr("int"); printf("int"); return INT;}
bool                  {yylval.str = createStr(yytext); printf("BOOL"); return BOOL;}
void                  {yylval.str = createStr(yytext); printf("VOID"); return VOID;}


[0-9]+		            {yylval.str = createStr(yytext); 
                            printf("NUMBER ");
                            return NUMBER;
                        }
[0-9]+\.[0-9]+          {yylval.str = createStr(yytext); 
                            printf("FLOAT");
                            return FLOAT;
                        }
[a-zA-Z0-9]+            {yylval.str = createStr(yytext); 
                            printf("ID ");
                            return ID;
                        }

\"(\\.|[^"])*\"         {yylval.str = createStr(yytext); 
                            printf("STRING ");
                            return STRING;
                        }   

"/*"((\*+[^/*])|([^*]))*\**"*/"     {printf("multiline comment \n");}
"//".*                              {printf("line comment \n");}


%%
