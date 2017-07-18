
%{
#include<stdio.h>

#define YY_DECL int yylex()

#include"fileproduction.h"

#include"pearlang.tab.h"
%}

%%

[ \t] ; //ignore all whitespaces
[\n]                  { printf("\n");} 

return                {yylval.prod = createProd(yytext); return RETURN;}
break                 {yylval.prod = createProd(yytext); return BREAK;}
continue              {yylval.prod = createProd(yytext); return CONTINUE;}
null                  {yylval.prod = createProd(yytext); return NUL;}
crt                   {yylval.prod = createProd(yytext); return CRT;}
new                   {yylval.prod = createProd(yytext); return NEW;}
struct                {yylval.prod = createProd(yytext); return STRUCT;}

";"                   {yylval.prod = createProd(yytext); printf("SEMICOLON "); return SEMICOLON;}
":"                   {yylval.prod = createProd(yytext); printf("COLON "); return COLON;}
"("                   {yylval.prod = createProd(yytext); printf("L_BRACE"); return L_BRACE;}
")"                   {yylval.prod = createProd(yytext); printf("R_BRACE"); return R_BRACE;}
"->"                  {yylval.prod = createProd(yytext); printf("AR"); return AR;}
"="                   {yylval.prod = createProd(yytext); printf("EQUAL"); return EQUAL;}
","                   {yylval.prod = createProd(yytext); printf("COMMA"); return COMMA;}
"."                   {yylval.prod = createProd(yytext); printf("DOT"); return DOT;}
"+"                   {yylval.prod = createProd(yytext); printf("PLUS"); return PLUS;}
"-"                   {yylval.prod = createProd(yytext); printf("MINUS"); return MINUS;}         
"*"                   {yylval.prod = createProd(yytext); printf("TIMES"); return TIMES;}
"#"                   {yylval.prod = createProd(yytext); printf("HASH"); return HASH;}
"<"                   {yylval.prod = createProd(yytext); printf("SMALLER"); return SMALLER;}
">"                   {yylval.prod = createProd(yytext); printf("BIGGER"); return BIGGER;}
"/"                   {yylval.prod = createProd(yytext); printf("DIVIDED"); return DIVIDED;}
"%"                   {yylval.prod = createProd(yytext); printf("MODULO"); return MODULO;}


"{"                   {yylval.prod = createProd(yytext); printf("L_GBRACE"); return L_GBRACE;}
"}"                   {yylval.prod = createProd(yytext); printf("R_GBRACE"); return R_GBRACE;}

true                  {yylval.prod = createProd(yytext); printf("TRUE"); return TRUE;}
false                 {yylval.prod = createProd(yytext); printf("FALSE"); return FALSE;}

i8                    {yylval.prod = createProd(yytext); printf("I8"); return I8;}
i16                   {yylval.prod = createProd(yytext); printf("I16"); return I16;}
i32                   {yylval.prod = createProd(yytext); printf("I32"); return I32;}
i64                   {yylval.prod = createProd(yytext); printf("I64"); return I64;}
u8                    {yylval.prod = createProd(yytext); printf("U8"); return U8;}
u16                   {yylval.prod = createProd(yytext); printf("U16"); return U16;}
u32                   {yylval.prod = createProd(yytext); printf("U32"); return U32;}
u64                   {yylval.prod = createProd(yytext); printf("U64"); return U64;}
f32                   {yylval.prod = createProd(yytext); printf("F32"); return F32;}
f64                   {yylval.prod = createProd(yytext); printf("F64"); return F64;}
bool                  {yylval.prod = createProd(yytext); printf("BOOL"); return BOOL;}
void                  {yylval.prod = createProd(yytext); printf("VOID"); return VOID;}


[0-9]+		            {yylval.prod = createProd(yytext); 
                            printf("NUMBER ");
                            return NUMBER;
                        }
[0-9]+\.[0-9]+          {yylval.prod = createProd(yytext); 
                            printf("FLOAT");
                            return FLOAT;
                        }
[a-zA-Z0-9]+            {yylval.prod = createProd(yytext); 
                            printf("ID ");
                            return ID;
                        }

\"(\\.|[^"])*\"         {yylval.prod = createProd(yytext); 
                            printf("STRING ");
                            return STRING;
                        }   

%%
