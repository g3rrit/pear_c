%{
#include<stdio.h>
#include<stdlib.h>
#include"fileproduction.h"
#include"string.h"

extern int yylex();
extern int yyparse();
extern FILE *yyin;

void yyerror(const char* s);
%}

%union {
    Production *prod;
    char *str;
    int ival;
    float fval;
}

%token<prod> ID              /*identifier*/
%token<prod> NUMBER
%token<prod> FLOAT
%token<prod> STRING
%token<prod> AR                   /*arrow sign ->*/
%token<prod> COLON
%token<prod> SEMICOLON
%token<prod> COMMA
%token<prod> DOT
%token<prod> L_BRACE R_BRACE      /* ( ) */ 
%token<prod> L_GBRACE R_GBRACE    /* { } */
%token<prod> EQUAL                /* = */

%token<prod> TIMES
%token<prod> PLUS
%token<prod> MINUS
%token<prod> DIVIDED
%token<prod> MODULO
%token<prod> HASH
%token<prod> BIGGER
%token<prod> SMALLER

%token<prod> VOID
%token<prod> I8
%token<prod> I16
%token<prod> I32
%token<prod> I64
%token<prod> U8
%token<prod> U16
%token<prod> U32
%token<prod> U64
%token<prod> F32
%token<prod> F64
%token<prod> BOOL

%token<prod> RETURN
%token<prod> IF
%token<prod> NEW
%token<prod> CRT
%token<prod> BREAK
%token<prod> CONTINUE
%token<prod> STRUCT

%token<prod> TRUE
%token<prod> FALSE

%token<prod> NUL

%type<prod> statement expression functiondef fargs type function functionS areturn fcall fcallS assignment structdef 
%type<prod> struct s_sbody


%start program


%%

program: 
     program line 
    | 
;

line: 
    function {
        finishProd($1);
    }
    | struct {}
;

structdef:
      ID COLON STRUCT EQUAL {
            printf("found struct");
            Production *res = $1;
            printf(" id: %s \n", $1->str);
            appendStr(&res->id, $1->str);
            appendStr(&res->type, $1->str); 
            $$ = $1;
        }
;

struct:
      s_sbody R_GBRACE
        {
            printf("finish struct \n");
            $$ = $1;
            f_struct($1); 
        }
;

s_sbody:
       structdef L_GBRACE assignment { 
            printf("s_sboy \n");
            appendStr(&$1->sbody, $3->type);
            appendStr(&$1->sbody, $3->id);
            appendStr(&$1->sbody, "; \n");
            
            appendStr(&$1->initbody, $3->type);
            appendStr(&$1->initbody, $3->id);
            appendStr(&$1->initbody, " = ");
            appendStr(&$1->initbody, $3->value);
            appendStr(&$1->initbody, "; \n");  

            $$ = $1;
        }
       | s_sbody assignment {
            appendStr(&$1->sbody, $2->type);
            appendStr(&$1->sbody, $2->id);
            appendStr(&$1->sbody, "; \n");
            
            appendStr(&$1->initbody, $2->type);
            appendStr(&$1->initbody, $2->id);
            appendStr(&$1->initbody, " = ");
            appendStr(&$1->initbody, $2->value);
            appendStr(&$1->initbody, "; \n");  

            $$ = $1;
        }
;
    

fcall:
     fcallS R_BRACE {
            appendToProd($1, ")");
            $$ = $1;
        }
;

fcallS:
      ID L_BRACE {
            appendToProd($1, "(");
            $$ = $1;
        }
      | fcallS COMMA {
            printf("hererereeeee");
            appendToProd($1, " , ");
            $$ = $1;
        }
      | fcallS expression {
            appendTo($1, $2);
            $$ = $1; 
        }
      
;

functiondef:
           ID COLON fargs AR type EQUAL {
            printf("function definition \n");
            Production *prod = createProd("\n");
            appendTo(prod, $5);
            appendToProd(prod, " ");
            appendTo(prod, $1);
            appendTo(prod, $3);
            appendToProd(prod, "\n");
            $$ = prod;
           }
;

fargs:
     L_BRACE R_BRACE {
        printf("function args \n");
        $$ = createProd("()");
     }
;

type:
     type TIMES  { $$ = $1;} 
    | VOID  {$$ = $1;}
    | I8    {$$ = $1;}
    | I16   {$$ = $1;}
    | I32   {$$ = $1;}
    | I64   {$$ = $1;}
    | U8    {$$ = $1;}
    | U16   {$$ = $1;}
    | U32   {$$ = $1;}
    | U64   {$$ = $1;}
    | F32   {$$ = $1;}
    | F64   {$$ = $1;}
    | BOOL  {$$ = $1;}
;

function:
     functionS R_GBRACE {
            Production *res = $1;
            appendToProd(res, "}");
            $$ = res;
        }
;

functionS:
      functiondef L_GBRACE {
        Production *res = $1;
        appendToProd(res,"{\n");
        $$ = res;
      }
      | functionS statement {
            Production *res = $1;
            appendTo(res, $2);
            appendToProd(res, "\n");
            $$ = res;
        }
;

areturn:
       RETURN expression SEMICOLON {
        Production *res = createProd("return ");
        appendTo(res, $2);
        appendToProd(res, ";");
        $$ = res;
       }
;

assignment:
          ID COLON type EQUAL expression SEMICOLON {
                Production *res = $3;
                appendStr(&res->str, $1->str);
                appendStr(&res->str, " = ");
                appendStr(&res->str, $5->str);
                appendStr(&res->str, "; \n");
                res->type = $3->str;
                res->value = $5->str;
                $$ = res;
            }

expression:
          fcall { $$ = $1;}
          | NUL { $$ = createProd("NULL");}
          | NUMBER {$$=$1;}
          | FLOAT {$$=$1;}
          | STRING {$$=$1;}
          | ID {$$=$1;}
          | L_BRACE expression R_BRACE {
                Production *res = createProd("(");
                appendTo(res, $2);
                appendToProd(res, ")");
                $$ = res;
            }
          | expression PLUS expression {
                appendToProd($1, " + ");
                appendTo($1, $3);
                $$ = $1;
            }
          | expression MINUS expression {
                appendToProd($1, " - ");
                appendTo($1, $3);
                $$ = $1;
            }
          | expression TIMES expression {
                appendToProd($1, " * ");
                appendTo($1, $3);
                $$ = $1;
            }
          | expression DIVIDED expression {
                appendToProd($1, " / ");
                appendTo($1, $3);
                $$ = $1;
            }
          | expression MODULO expression {
                appendToProd($1, " % ");
                appendTo($1, $3);
                $$ = $1;
            }  
          | MINUS expression {
                Production *res = createProd(" - ");
                appendTo(res, $2);
                $$ = res; 
            }
          | PLUS expression {
                Production *res = createProd(" + ");
                appendTo(res, $2);
                $$ = res; 
            }
;

statement: 
         expression SEMICOLON {
                appendToProd($1, ";");
                $$ = $1;
            }
         | areturn { $$ = $1; }
         | assignment { 
                Production *res = $1;
                appendStr(&res->str, res->type); 
                appendStr(&res->str, res->id);
                appendStr(&res->str, " = ");
                appendStr(&res->str, res->value);
                appendStr(&res->str, "; \n");
                $$ = $1;
            }
;



%%

#include"stdio.h"

int main()
{

    int compiling = 1;
    //search for all files

    //create stdfile in target dir

    FILE *input = fopen("/Users/pear/Desktop/projects/pearlang/example/pearsrc/main.pear", "r");
    if(input == NULL)
    {
        printf("couldnt open file \n");
        return 0;
    }

    printf("starting compilation \n");

    while(compiling)
    {
        yyin = input;

        do 
        {
            yyparse();
        }while(!feof(yyin));

        //create h and c file and fill
        compiling = 0;
    }

    printf("finished compiling \n");

    return 0;
}

void yyerror(const char* s)
{
    printf("hello");
    fprintf(stderr, "parse error: %s \n", s);
    printf("error sis: %s", s);
    close(0);
}
