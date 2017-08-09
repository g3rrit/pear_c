%{
#include<stdio.h>
#include<stdlib.h>
#include"fileprod.h"
#include"filealloc.h"
#include"string.h"
#include"dir.h"
#include"globals.h"
#include"stdbool.h"
#include"compiler.h"

#define YYDEBUG 1

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern int lineNum;

void yyerror(const char* s);
%}

%union {
    char *str;
    Func *func;
    Assign *assign;
    Sassign *sassign;
    Struc *struc;
}

%token<str> ID                      /*identifier*/
%token<str> NUMBER
%token<str> FLOAT
%token<str> STRING
%token<str> AR                      /*arrow sign ->*/
%token<str> COLON
%token<str> SEMICOLON
%token<str> COMMA
%token<str> DOT
%token<str> L_BRACE R_BRACE         /* ( ) */ 
%token<str> L_GBRACE R_GBRACE       /* { } */
%token<str> L_ABRACE R_ABRACE       /* [ ] */
%token<str> EQUAL                   /* = */
%token<str> ADDRESS

%token<str> TIMES
%token<str> PLUS
%token<str> MINUS
%token<str> DIVIDED
%token<str> MODULO
%token<str> HASH
%token<str> QUOTATION
%token<str> SIZEOF

%token<str> GREATER
%token<str> LESS
%token<str> GREQ
%token<str> LEEQ
%token<str> SAME
%token<str> AND
%token<str> OR
%token<str> NOT
%token<str> NOTEQ

%token<str> VOID
%token<str> I8
%token<str> I16
%token<str> I32
%token<str> I64
%token<str> U8
%token<str> U16
%token<str> U32
%token<str> U64
%token<str> F32
%token<str> F64
%token<str> BOOL
%token<str> INT

%token<str> RETURN
%token<str> NEW
%token<str> CRT
%token<str> BREAK
%token<str> CONTINUE
%token<str> STRUCT
%token<str> INCLUDE

%token<str> IF
%token<str> ELSE
%token<str> WHILE
%token<str> FOR

%token<str> LOCAL

%token<str> TRUE
%token<str> FALSE

%token<str> NUL

%type<str> statement expression areturn type fcall s_fcall preproc include_s block_s block loop conditionalOp condition allotment typecast declaration equals access 
%type<func> func funcdecl s_funcdecl 
%type<struc> s_struct struct
%type<assign> assignment

%right access_p

%left EQUAL
%left TIMES


%start program


%%

program: 
       program line { printf("reduction\n"); }
       | line { printf("reduction\n"); }
;

equals:
      PLUS EQUAL { printf("reduction\n"); } 
      | MINUS EQUAL { printf("reduction\n"); } 
      | TIMES EQUAL { printf("reduction\n"); }  
      | DIVIDED EQUAL { printf("reduction\n"); } 
;

declaration:
           ID COLON type { printf("reduction\n"); }
           | ID L_ABRACE R_ABRACE COLON type { printf("reduction\n"); }
           | ID L_ABRACE expression R_ABRACE COLON type { printf("reduction\n"); }
           | funcdecl { printf("reduction\n"); }
;

preproc:
       include_s { printf("reduction\n"); } 
       | LOCAL include_s { printf("reduction\n"); } 
;

include_s:
       INCLUDE STRING { printf("reduction\n"); } 
;


s_fcall:
     ID L_BRACE { printf("reduction\n"); } 
     | access L_BRACE { printf("reduction\n"); } 
     | s_fcall expression { printf("reduction\n"); } 
     | s_fcall COMMA expression { printf("reduction\n"); } 
;

fcall:
     s_fcall R_BRACE { printf("reduction\n"); } 
;

    /* FUNCTION */

s_funcdecl:
       ID COLON L_BRACE { printf("reduction\n"); } 
       | s_funcdecl declaration { printf("reduction\n"); } 
       | s_funcdecl COMMA declaration { printf("reduction\n"); } 
;

funcdecl:
       s_funcdecl R_BRACE AR type { printf("reduction\n"); } 
;

/*s_func:*/
      /*funcdecl L_GBRACE { printf("reduction\n"); } */
 /*     | s_func statement { printf("reduction\n"); } */
/*;*/

func:
    funcdecl block { printf("reduction\n"); } 
    | LOCAL funcdecl block { printf("reduction\n"); } 
;        

    /* FUNCTION */

    /* STRUCT */

s_struct:
        ID COLON STRUCT L_GBRACE { printf("reduction\n"); } 
        | LOCAL ID COLON STRUCT L_GBRACE { printf("reduction\n"); } 
        | s_struct assignment SEMICOLON { printf("reduction\n"); } 
        | s_struct func { printf("reduction\n"); } 
;

struct:
      s_struct R_GBRACE { printf("reduction\n"); } 
      | struct COLON ID { printf("reduction\n"); } 
;

block_s:
       L_GBRACE { printf("reduction\n"); }
       | block_s statement { printf("reduction\n"); }
;

block:
     block_s R_GBRACE { printf("reduction\n"); } 
;

    /* BLOCK */

    /* LOOPS */

loop:
    FOR L_BRACE expression SEMICOLON expression SEMICOLON expression R_BRACE block { printf("reduction\n"); } 
    | WHILE L_BRACE expression R_BRACE block { printf("reduction\n"); } 
;

condition:
         IF L_BRACE expression R_BRACE block { printf("reduction\n"); } 
         | condition ELSE condition { printf("reduction\n"); } 
         | condition ELSE block { printf("reduction\n"); } 
         | IF L_BRACE expression R_BRACE statement { printf("reduction\n"); } 
;

conditionalOp:
             GREATER { printf("reduction\n"); } 
             | LESS { printf("reduction\n"); } 
             | GREQ { printf("reduction\n"); } 
             | LEEQ { printf("reduction\n"); } 
             | AND { printf("reduction\n"); } 
             | OR { printf("reduction\n"); } 
             | SAME { printf("reduction\n"); } 
             | NOTEQ { printf("reduction\n"); } 
;

areturn:
       RETURN expression SEMICOLON { printf("reduction\n"); } 
       | RETURN SEMICOLON { printf("reduction\n"); } 
;

allotment:
         ID EQUAL expression { printf("reduction\n"); }
         | access EQUAL expression { printf("reduction\n"); }
;

assignment:
          declaration EQUAL expression { printf("reduction\n"); } 
          | declaration { printf("reduction\n"); } 
          | expression equals expression { printf("reduction\n"); } 
;

statement: 
         expression SEMICOLON { printf("reduction\n"); } 
         | areturn { printf("reduction\n"); } 
         | CONTINUE SEMICOLON { printf("reduction\n"); }   
         | BREAK SEMICOLON { printf("reduction\n"); } 
         | loop { printf("reduction\n"); } 
         | condition { printf("reduction\n"); } 
         | func { printf("reduction\n"); }    
         | struct { printf("reduction\n"); } 
;

access:
      ID AR ID { printf("reduction\n"); } 
      | access AR ID { printf("reduction\n"); }
      | ID AR access { printf("reduction\n"); }
      | access AR access { printf("reduction\n"); }
      | ID DOT ID { printf("reduction\n"); }
      | access DOT ID { printf("reduction\n"); }
      | ID DOT access { printf("reduction\n"); }
      | access DOT access { printf("reduction\n"); }
      | ADDRESS ID { printf("reduction\n"); }
      | ADDRESS access { printf("reduction\n"); }
      | TIMES ID { printf("reduction\n"); }
      | TIMES access { printf("reduction\n"); }
      | L_BRACE ID R_BRACE { printf("reduction\n"); }
      | L_BRACE access R_BRACE { printf("reduction\n"); }    
      | ID L_ABRACE R_ABRACE { printf("reduction\n"); }
      | access L_ABRACE R_ABRACE { printf("reduction\n"); }
      | ID L_ABRACE expression R_ABRACE { printf("reduction\n"); } 
      | access L_ABRACE expression R_ABRACE { printf("reduction\n"); }
;

expression:
          fcall { printf("reduction\n"); } 
          | NUL { printf("reduction\n"); } 
          | NUMBER { printf("reduction\n"); } 
          | FLOAT { printf("reduction\n"); } 
          | STRING { printf("reduction\n"); } 
          | ID { printf("reduction\n"); } 
          | TRUE { printf("reduction\n"); } 
          | FALSE { printf("reduction\n"); } 
          | STRING { printf("reduction\n"); } 
          | access { printf("reduction\n"); } 
          | assignment { printf("reduction\n"); }
          | allotment { printf("reduction\n"); }
          | SIZEOF L_BRACE type R_BRACE { printf("reduction\n"); } 
          | NEW ID L_BRACE R_BRACE { printf("reduction\n"); } 
          | CRT ID L_BRACE R_BRACE { printf("reduction\n"); } 
          | typecast expression { printf("reduction\n"); } 
          | s_expression expression { printf("reduction\n"); }
          | s_expression PLUS { printf("reduction\n"); } 
          | s_expression MINUS { printf("reduction\n"); } 
          | MINUS expression { printf("reduction\n"); } 
          | PLUS expression { printf("reduction\n"); } 
          | NOT expression { printf("reduction\n"); } 
          | L_BRACE expression R_BRACE { printf("reduction\n"); } 
;

s_expression:
            expression PLUS { printf("reduction\n"); }
            | expression MINUS { printf("reduction\n"); }
            | expression TIMES { printf("reduction\n"); }
            | expression DIVIDED { printf("reduction\n"); }
            | expression MODULO { printf("reduction\n"); }
            | expression conditionalOp { printf("reduction\n"); }
;

type:
    VOID { printf("reduction\n"); }  
    | I8 { printf("reduction\n"); }    
    | I16 { printf("reduction\n"); }    
    | I32 { printf("reduction\n"); }    
    | I64 { printf("reduction\n"); }    
    | U8 { printf("reduction\n"); }  
    | U16 { printf("reduction\n"); }  
    | U32 { printf("reduction\n"); }  
    | U64 { printf("reduction\n"); }  
    | F32 { printf("reduction\n"); }   
    | F64 { printf("reduction\n"); }   
    | BOOL { printf("reduction\n"); }  
    | INT { printf("reduction\n"); }   
    | ID { printf("reduction\n"); }    
    | type TIMES { printf("reduction\n"); }   
    | STRUCT type { printf("reduction\n"); } 
    | ID TIMES { printf("reduction\n"); } 
;

typecast:
        L_BRACE type R_BRACE { printf("reduction\n"); } 
;

line: 
    statement { printf("reduction\n"); } 
    | preproc { printf("reduction\n"); } 
    | struct { printf("reduction\n"); } 
;



%%

#include"stdio.h"

int yydebug = 1;

int main(int argc, char *argv[])
{
    //INITIALIZE COMPILER
    compInit(argc, argv); 

    //char *gccarr[fileCount];

    compile(); 

    compCleanUp();

    printf("finished compiling \n");

    //compileToOut(fileCount, gccarr);

    return 0;
}



void yyerror(const char* s)
{
    fprintf(stderr, "parse error: %s \n", s);
    fprintf(stderr, "in line: %i\n", lineNum);
    globalS->exit = true;
    close(0);
}
