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
    Decl *decl;
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

%token<str> BITOR

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

%type<str> statement expression areturn type fcall s_fcall preproc include_s block_s block loop conditionalOp condition allotment typecast access s_expression array array_s
%type<func> func funcdecl s_funcdecl 
%type<decl> declaration
%type<struc> s_struct struct
%type<assign> assignment

%right access_p
%right PLUS MINUS TIMES DIVIDED MODULO

%left EQUAL


%start program


%%

program: 
       program line { printf("program\n"); }
       | line { printf("program\n"); }
;

declaration:
           ID COLON type { 
                            printf("declaration\n"); 
                            Decl *res = malloc(sizeof(Decl));
                            res->fun = false;
                            res->id = $1;
                            res->type = $3;
                            res->def = createStr($3);
                            char *arr[] = { createStr(" "), createStr($1) };
                            appendStrF(&(res->def),2, arr);
                            $$ = res;
                            free($2);
                        }
           | ID L_ABRACE R_ABRACE COLON type { 
                                                printf("declaration\n"); 
                                                Decl *res = malloc(sizeof(Decl));
                                                res->fun = false;
                                                res->id = createStr($1);
                                                res->type = $5;
                                                char *iarr[] = { createStr($2), createStr($3) };
                                                appendStrF(&(res->id),2,iarr);
                                                res->def = createStr($5);
                                                char *arr[] = { createStr(" "), $1, $2, $3 };
                                                appendStrF(&(res->def),4, arr);
                                                $$ = res;
                                                free($4);
                                            }

           | ID L_ABRACE expression R_ABRACE COLON type { 
                                                            printf("declaration\n"); 
                                                            Decl *res = malloc(sizeof(Decl));
                                                            res->fun = false;
                                                            res->id = createStr($1);   
                                                            res->type = $6;
                                                            char *iarr[] = { createStr($2), createStr($3), createStr($4) };
                                                            appendStrF(&(res->id),3,iarr);
                                                            res->def = createStr($6);
                                                            char *arr[] = { createStr(" "), $1, $2, $3, $4 };
                                                            appendStrF(&(res->def),5, arr);
                                                            $$ = res;
                                                            free($5);
                                                        }
           | access L_ABRACE expression R_ABRACE COLON type { 
                                                            printf("declaration\n"); 
                                                            Decl *res = malloc(sizeof(Decl));
                                                            res->fun = false;
                                                            res->id = createStr($1);   
                                                            res->type = $6;
                                                            char *iarr[] = { createStr($2), createStr($3), createStr($4) };
                                                            appendStrF(&(res->id),3,iarr);
                                                            res->def = createStr($6);
                                                            char *arr[] = { createStr(" "), $1, $2, $3, $4 };
                                                            appendStrF(&(res->def),5, arr);
                                                            $$ = res;
                                                            free($5);
                                                        }
           | funcdecl { 
                        printf("declaration\n"); 
                        //addFuncDeclToFile($1); 
                        Decl *res = malloc(sizeof(Decl));
                        res->fun = true;
                        res->id = $1->id;
                        res->type = $1->type;
                        res->def = createStr($1->type);
                        char *funcdef = createStr($1->def);

                        //TODO experimental
                        if(globalS->inStruct && globalS->indentlvl <= 2)
                        {
                            char *resdef = createStr("(");
                            char *resdefo;
                            if(strchr($1->def,',') == NULL)
                            {
                                resdefo = (strchr($1->def, ')'));    
                            }
                            else
                            {
                                resdefo = &(strchr($1->def, ','))[1];
                            }
                            appendStr(&resdef,1,&resdefo);
                            free(funcdef);
                            funcdef = resdef;
                        }
                        //

                        char *arr[] = { createStr(" (*"), createStr(res->id), createStr(")"), funcdef };
                        appendStrF(&(res->def),4,arr);

                        /*
                        res->def = createStr("__");
                        char *resapp = createStr("_");
                        if(globalS->inFunc)
                            appendStr(&(res->def),1, &(globalS->lastFuncName));
                        appendStrF(&(res->def),1,&resapp);
                        char *arr[] = { $1->id, " ", $1->id};
                        appendStr(&(res->def),3, arr);
                        */
                        $$ = res;
                        gsExitFuncDec();
                        //TODO free func
                    }
;

preproc:
       include_s { 
                    printf("preproc\n"); 
                    appendStrF(&(activeFT.htdef),1, &$1);
                } 
       | LOCAL include_s { 
                            printf("preproc\n"); 
                            appendStrF(&(activeFT.stdef),1,&$2);
                            free($1);
                        } 
;

include_s:
       INCLUDE STRING { 
                        printf("include_s\n"); 
                        char *incC = $2;
                        incC[strlen(incC) - 1] = 0;
                        char *arr[] = { $1, incC, createStr(".h\"\n") };
                        char *res = createStr("#");
                        appendStrF(&res,3,arr);
                        $$ = res;
                    } 
;


s_fcall:
     ID L_BRACE { 
                    printf("s_fcall\n"); 
                    appendStrF(&$1,1,&$2);
                    $$ = $1;
                } 
     | access L_BRACE { 
                        printf("s_fcall\n"); 
                        appendStrF(&$1,1,&$2);
                        char *acc = createStr($1);
                        char *va = strrchr(acc,'.');
                        char *po = strrchr(acc,'-');
                        printf("acc: %s\n", acc);
                        int len = 0;
                        if(po != NULL && va != NULL)
                            len = strlen(po) - strlen(va); 

                        if(po == NULL && va == NULL)
                        {
                            printf("normal fcall\n");
                        }
                        else if(po == NULL || (va != NULL && po == NULL) || len > 0)
                        {
                            printf("value\n");
                            printf("acc: %s\n", acc);
                            *va = '\0';                             
                            char *arr[] = { createStr("&"), acc , createStr(",") };
                            appendStrF(&$1,3,arr);
                        }   
                        else
                        {
                            printf("pointer\n");
                            printf("acc: %s\n", acc);
                            *po = '\0';
                            char *arr[] = { acc, createStr(",") };
                            appendStrF(&$1,2,arr);
                        }
                        $$ = $1;
                    } 
     | s_fcall expression { 
                            printf("s_fcall\n"); 
                            appendStrF(&$1,1,&$2);
                            $$ = $1;           
                        } 
     | s_fcall COMMA expression { 
                                    printf("s_fcall\n"); 
                                    char *arr[] = { $2, $3};
                                    appendStrF(&$1,2,arr);
                                    $$ = $1;
                                } 
;

fcall:
     s_fcall R_BRACE { 
                        printf("fcall\n"); 
                        printf("lastc: %s\n", &$1[strlen($1)-1]);
                        if($1[strlen($1)-1] == ',')
                        {
                            $1[strlen($1)-1] = ')';
                            free($2);
                        }
                        else
                        {
                            appendStrF(&$1,1,&$2);
                        }
                        $$ = $1;
                    } 
;

    /* FUNCTION */

s_funcdecl:
       ID COLON L_BRACE { 
                            printf("s_funcdecl\n"); 
                            gsEnterFunc(createStr($1));
                            Func *func = malloc(sizeof(Func));
                            func->def = $3;
                            if(globalS->inStruct && (globalS->indentlvl <= 2))
                            {
                                char *arr[] = { createStr(globalS->structName), createStr("_")};
                                func->idpre = createStr("__");
                                appendStrF(&func->idpre, 2, arr);

                                //add this : struct to func
                                char *arr1[] = { createStr(globalS->structName), createStr(" *this,") };
                                appendStrF(&(func->def), 2, arr1);
                            }
                            else
                            {
                                func->idpre = createStr("");
                            }
                            func->id = $1;
                            $$ = func;
                            free($2);
                        } 
       | s_funcdecl declaration { 
                                    printf("s_funcdecl\n"); 
                                    appendStrF(&($1->def),1, &($2->def));
                                    $$ = $1;
                                } 
       | s_funcdecl COMMA declaration { 
                                        printf("s_funcdecl\n");     
                                        char *arr[] = { $2, $3->def};
                                        appendStrF(&($1->def), 2, arr);
                                        $$ = $1;
                                    } 
;

funcdecl:
       s_funcdecl R_BRACE AR type { 
                                    printf("funcdecl\n"); 
                                    if($1->def[strlen($1->def)-1] == ',')
                                    {
                                        $1->def[strlen($1->def)-1] = ')';
                                        free($2);
                                    }
                                    else
                                    {
                                        appendStrF(&($1->def),1,&$2);
                                    }
                                    $1->type = $4;
                                    $$ = $1;
                                    free($3);
                                } 
;

func:
    funcdecl block { 
                        printf("func\n"); 
                        $1->body = $2;
                        $$ = $1;
                        if(globalS->inStruct)
                        {
                            addFuncToFile($1,1);
                        }
                        else
                        {
                            addFuncToFile($1,0);
                        }
                        gsExitFunc();
                    } 
    | LOCAL funcdecl block { 
                                printf("func\n"); 
                                $2->body = $3;
                                $$ = $2;
                                addFuncToFile($2,1);
                                gsExitFunc();
                            } 
;        

    /* FUNCTION */

    /* STRUCT */

s_struct:
        ID COLON STRUCT L_GBRACE { 
                                    printf("s_struct\n"); 
                                    gsEnterStruct(createStr($1), false);
                                    Struc *struc = createStruct(); 
                                    struc->id = $1;
                                    $$ = struc;
                                    free($2);
                                } 
        | LOCAL ID COLON STRUCT L_GBRACE { 
                                            printf("s_struct\n"); 
                                            gsEnterStruct(createStr($1), true);
                                            Struc *struc = createStruct(); 
                                            struc->id = $2;
                                            $$ = struc;
                                            free($2);
                                        } 
        | s_struct assignment SEMICOLON { 
                                            printf("s_struct\n"); 
                                            appendAssignStruct($1,$2); 
                                            $$ = $1;
                                            free($3);
                                        } 
        | s_struct func { 
                            printf("s_struct\n"); 
                            Assign *assign = malloc(sizeof(Assign));
                            assign->id = $2->id; 
                            assign->type = $2->type;
                            assign->def = createStr($2->type);
                            char *arr[] = { " (*", createStr($2->id), ")", createStr($2->def)};
                            appendStr(&assign->def,4,arr);
                            char *val = createStr("&");
                            appendStr(&val, 1, &($2->idpre));
                            appendStr(&val, 1, &($2->id));
                            assign->value = val;
                            assign->init = true;
                            appendAssignStruct($1,assign);
                            $$ = $1;
                        } 
;

struct:
      s_struct R_GBRACE { 
                            printf("struct\n"); 
                            if(globalS->localS)
                            {
                                addStructToFile($1,1);
                            }
                            else
                            {
                                addStructToFile($1,0);
                            }
                            $$ = $1;
                            gsExitStruct();
                        } 
      | struct COLON ID { 
                            printf("struct\n"); 
                            addSingleToFile($1,$3,globalS->lastLocal);
                            free($2);
                        } 
;

block_s:
       L_GBRACE {  
                    printf("block_s\n"); 
                    $$ = createStr("{\n");
                    free($1);
                }
       | block_s statement { 
                                printf("block_s\n"); 
                                printf("sta: %s\n", $2);
                                char *arr[] = { $2, createStr("\n")};
                                appendStrF(&$1,2,arr);
                                $$ = $1; 
                            }
;

block:
     block_s R_GBRACE { 
                        printf("block\n"); 
                        appendStrF(&$1, 1, &$2);
                        $$ = $1;
                    } 
;

    /* BLOCK */

    /* LOOPS */

loop:
    FOR L_BRACE expression SEMICOLON expression SEMICOLON expression R_BRACE block { 
                                                                                        printf("loop\n"); 
                                                                                        char *arr[] = { $2,$3,$4,$5,$6,$7,$8,$9 };
                                                                                        appendStrF(&$1,8,arr);
                                                                                        $$ = $1; 
                                                                                    } 
    | WHILE L_BRACE expression R_BRACE block { 
                                                printf("loop\n"); 
                                                char *arr[] = { $2,$3,$4,$5 };
                                                appendStrF(&$1,4,arr);
                                                $$ = $1;
                                            } 
;

condition:
         IF L_BRACE expression R_BRACE block { 
                                                printf("condition\n"); 
                                                char *arr[] = { $2, $3, $4, $5};
                                                appendStrF(&$1, 4, arr);
                                                $$ = $1;
                                            } 
         | condition ELSE condition { 
                                        printf("condition\n"); 
                                        char *arr[] = { $2, createStr(" "), $3};
                                        appendStrF(&$1, 3, arr);
                                        $$ = $1;
                                    } 
         | condition ELSE block { 
                                    printf("condition\n"); 
                                    char *arr[] = { $2, $3 };
                                    appendStrF(&$1, 2, arr);
                                    $$ = $1;
                                } 
         | IF L_BRACE expression R_BRACE statement { 
                                                        printf("condition\n"); 
                                                        char *arr[] = { $2, $3, $4, $5};
                                                        appendStrF(&$1, 4, arr);
                                                        $$ = $1;
                                                    } 
;

conditionalOp:
             GREATER { printf("conditionalOp\n"); $$=$1;} 
             | LESS { printf("conditionalOp\n"); $$=$1;} 
             | GREQ { printf("conditionalOp\n"); $$=$1;} 
             | LEEQ { printf("conditionalOp\n"); $$=$1;} 
             | AND { printf("conditionalOp\n"); $$=$1;} 
             | OR { printf("conditionalOp\n"); $$=$1;} 
             | SAME { printf("conditionalOp\n"); $$=$1;} 
             | NOTEQ { printf("conditionalOp\n"); $$=$1;} 
;

areturn:
       RETURN expression SEMICOLON { 
                                        printf("areturn\n"); 
                                        char *arr[] = {createStr(" "),$2,$3};
                                        appendStrF(&$1,3,arr);
                                        $$ = $1;
                                    } 
       | RETURN SEMICOLON { 
                            printf("areturn\n"); 
                            appendStr(&$1, 1, &$2);
                            $$ = $1;  
                        } 
;

allotment:
         ID EQUAL expression { 
                                printf("allotment\n"); 
                                char *arr[] = { $2, $3 };
                                appendStrF(&$1,2,arr);
                                $$ = $1;
                            }
         | access EQUAL expression { 
                                        printf("allotment\n"); 
                                        char *arr[]  = { $2, $3 };
                                        appendStrF(&$1,2,arr);
                                        $$ = $1;
                                    }
         | s_expression EQUAL expression {
                                            printf("allotment\n");
                                            char *arr[]  = { $2, $3 };
                                            appendStrF(&$1,2,arr);
                                            $$ = $1;
                                        }
;

assignment:
          declaration EQUAL expression { 
                                            printf("assignment\n"); 
                                            Assign *assign = malloc(sizeof(Assign));
                                            assign->id = $1->id;
                                            assign->type = $1->type;
                                            assign->def = $1->def;
                                            assign->value = $3;
                                            assign->init = true;
                                            $$ = assign;
                                            free($2);
                                        } 
          | declaration { 
                            printf("assignment\n"); 
                            Assign *assign = malloc(sizeof(Assign));
                            assign->id = $1->id;
                            assign->type = $1->type;
                            assign->def = $1->def;
                            assign->value = createStr("NULL");
                            assign->init = false;
                            $$ = assign;
                        } 
;

statement: 
         expression SEMICOLON { 
                                printf("statement\n"); 
                                appendStr(&$1,1,&$2);
                                $$ = $1;
                            } 
         | areturn { printf("statement\n"); $$=$1;} 
         | CONTINUE SEMICOLON { 
                                printf("statement\n"); 
                                appendStr(&$1,1,&$2);
                                $$ = $1;
                            }   
         | BREAK SEMICOLON { 
                                printf("statement\n");  
                                appendStr(&$1,1,&$2);
                                $$ = $1;
                            } 
         | loop { printf("statement\n"); $$=$1;} 
         | condition { printf("statement\n"); $$=$1;} 
         | func { printf("statement\n"); }    
         | struct { printf("statement\n"); } 
;

access:
      ID AR ID { 
                    printf("access\n"); 
                    char *arr[] = { $2, $3};
                    appendStrF(&$1, 2, arr);
                    $$ = $1;
                } 
      | access AR ID { 
                        printf("access\n"); 
                        char *arr[] = { $2, $3};
                        appendStrF(&$1, 2, arr);
                        $$ = $1;
                    }
      | ID AR access { 
                        printf("access\n"); 
                        char *arr[] = { $2, $3};
                        appendStrF(&$1, 2, arr);
                        $$ = $1;
                    }
      | access AR access { 
                            printf("access\n"); 
                            char *arr[] = { $2, $3};
                            appendStrF(&$1, 2, arr);
                            $$ = $1;
                        }
      | ID DOT ID { 
                    printf("access\n"); 
                    char *arr[] = { $2, $3};
                    appendStrF(&$1, 2, arr);
                    $$ = $1;
                }
      | access DOT ID { 
                        printf("access\n"); 
                        char *arr[] = { $2, $3};
                        appendStrF(&$1, 2, arr);
                        $$ = $1;
                    }
      | ID DOT access { 
                        printf("access\n"); 
                        char *arr[] = { $2, $3};
                        appendStrF(&$1, 2, arr);
                        $$ = $1;
                    }
      | access DOT access { 
                            printf("access\n"); 
                            char *arr[] = { $2, $3};
                            appendStrF(&$1, 2, arr);
                            $$ = $1;
                        }
      | ADDRESS ID { 
                        printf("access\n"); 
                        appendStrF(&$1,1,&$2);
                        $$ = $1;
                    }
      | ADDRESS access { 
                            printf("access\n"); 
                            appendStrF(&$1,1,&$2);
                            $$ = $1;
                        }
      | TIMES ID { 
                    printf("access\n"); 
                    appendStrF(&$1,1,&$2);
                    $$ = $1;
                }
      | TIMES access { 
                        printf("access\n"); 
                        appendStrF(&$1,1,&$2);
                        $$ = $1;
                    }
      | L_BRACE ID R_BRACE { 
                                printf("access\n"); 
                                char *arr[] = { $2, $3};
                                appendStrF(&$1, 2, arr);
                                $$ = $1;
                            }
      | L_BRACE access R_BRACE { 
                                    printf("access\n"); 
                                    char *arr[] = { $2, $3};
                                    appendStrF(&$1, 2, arr);
                                    $$ = $1;
                                }    
      | ID L_ABRACE R_ABRACE { 
                                printf("access\n"); 
                                char *arr[] = { $2, $3};
                                appendStrF(&$1, 2, arr);
                                $$ = $1;
                            }
      | access L_ABRACE R_ABRACE { 
                                    printf("access\n"); 
                                    char *arr[] = { $2, $3};
                                    appendStrF(&$1, 2, arr);
                                    $$ = $1;
                                }
      | ID L_ABRACE expression R_ABRACE { 
                                            printf("access\n"); 
                                            char *arr[] = { $2, $3, $4};
                                            appendStrF(&$1, 3, arr);
                                            $$ = $1;
                                        } 
      | access L_ABRACE expression R_ABRACE { 
                                                printf("access\n"); 
                                                char *arr[] = { $2, $3, $4};
                                                appendStrF(&$1, 3, arr);
                                                $$ = $1;
                                            }
;

expression:
          fcall { printf("expression\n"); $$=$1;} 
          | NUL { printf("expression\n"); $$=$1;} 
          | NUMBER { printf("expression\n"); $$=$1;} 
          | FLOAT { printf("expression\n"); $$=$1;} 
          | STRING { printf("expression\n"); $$=$1;} 
          | ID { printf("expression\n"); $$=$1;} 
          | TRUE { printf("expression\n"); $$=$1;} 
          | FALSE { printf("expression\n"); $$=$1;} 
          | access { printf("expression\n"); $$=$1;} 
          | assignment { printf("expression\n"); $$=createStrAssign($1);}
          | allotment { printf("expression\n"); $$=$1;}
          | array { printf("array\n"); $$=$1;}
          | SIZEOF L_BRACE type R_BRACE { 
                                            printf("expression\n"); 
                                            char *arr[] = { $2,$3,$4};
                                            appendStr(&$1,3,arr);
                                            $$ = $1;
                                        } 
          | NEW ID L_BRACE R_BRACE { 
                                        printf("expression\n"); 
                                        char *res = createStr("__");
                                        char *arr[] = { $1, createStr("_"), $2, createStr("()")};
                                        appendStrF(&res, 4, arr);
                                        $$ = res;
                                        free($3);
                                        free($4);
                                    } 
          | CRT ID L_BRACE R_BRACE { 
                                        printf("expression\n"); 
                                        char *res = createStr("__");
                                        char *arr[] = { $1, createStr("_"), $2, createStr("()")};
                                        appendStrF(&res, 4, arr);
                                        $$ = res;
                                        free($3);
                                        free($4);
                                    } 
          | typecast expression { 
                                    printf("expression\n"); 
                                    appendStrF(&$1,1,&$2);
                                    $$ = $1;
                                } 
          | s_expression expression { 
                                        printf("expression\n"); 
                                        appendStrF(&$1,1,&$2);
                                        $$ = $1;
                                    }
          | s_expression PLUS { 
                                printf("expression\n"); 
                                appendStrF(&$1,1,&$2);
                                $$ = $1;
                            } 
          | s_expression MINUS { 
                                    printf("expression\n"); 
                                    appendStrF(&$1,1,&$2);
                                    $$ = $1;
                                } 
          | TIMES expression {
                                printf("expression\n"); 
                                appendStrF(&$1,1,&$2);
                                $$ = $1;
                            }
          | ADDRESS expression {
                                    printf("expression\n"); 
                                    appendStrF(&$1,1,&$2);
                                    $$ = $1;
                                }
          | MINUS expression { 
                                printf("expression\n"); 
                                appendStrF(&$1,1,&$2);
                                $$ = $1;
                            } 
          | PLUS expression { 
                                printf("expression\n"); 
                                appendStrF(&$1,1,&$2);
                                $$ = $1;
                            } 
          | NOT expression { 
                                printf("expression\n"); 
                                appendStrF(&$1,1,&$2);
                                $$ = $1;
                            } 
          | L_BRACE expression R_BRACE { 
                                            printf("expression\n"); 
                                            char *arr[] = { $2, $3};
                                            appendStrF(&$1, 2, arr);
                                            $$ = $1;
                                        } 
;

s_expression:
            expression PLUS { 
                                printf("s_expression\n"); 
                                appendStrF(&$1,1,&$2);
                                $$ = $1;
                            }
            | expression MINUS { 
                                    printf("s_expression\n"); 
                                    appendStrF(&$1,1,&$2);
                                    $$ = $1;
                                }
            | expression TIMES { 
                                    printf("s_expression\n"); 
                                    appendStrF(&$1,1,&$2);
                                    $$ = $1;
                                }
            | expression DIVIDED { 
                                    printf("s_expression\n"); 
                                    appendStrF(&$1,1,&$2);
                                    $$ = $1;
                                }
            | expression BITOR { 
                                    printf("s_expression\n"); 
                                    appendStrF(&$1,1,&$2);
                                    $$ = $1;
                                }

            | expression MODULO { 
                                    printf("s_expression\n"); 
                                    appendStrF(&$1,1,&$2);
                                    $$ = $1;
                                }
            | expression conditionalOp { 
                                            printf("s_expression\n"); 
                                            appendStrF(&$1,1,&$2);
                                            $$ = $1;
                                        }
;

array:
     array_s R_GBRACE {
                            printf("array\n");
                            appendStrF(&$1,1,&$2);
                            $$ = $1;
                    }
     | block_s R_GBRACE {
                            printf("array\n");
                            appendStrF(&$1,1,&$2);
                            $$ = $1;
                        } 
;

array_s:
       block_s expression {
                                    printf("array_s\n");
                                    appendStrF(&$1,1,&$2);
                                    $$ = $1;
                                }
       | array_s expression {
                                printf("array_s\n");
                                appendStrF(&$1,1,&$2);
                                $$ = $1;
                            } 
       | array_s COMMA {
                            printf("array_s\n");
                            appendStrF(&$1,1,&$2);
                            $$ = $1;
                        }
;

type:
    VOID { printf("type\n"); $$=$1;}  
    | I8 { printf("type\n"); $$=$1;}    
    | I16 { printf("type\n"); $$=$1;}    
    | I32 { printf("type\n"); $$=$1;}    
    | I64 { printf("type\n"); $$=$1;}    
    | U8 { printf("type\n"); $$=$1;}  
    | U16 { printf("type\n"); $$=$1;}  
    | U32 { printf("type\n"); $$=$1;}  
    | U64 { printf("type\n"); $$=$1;}  
    | F32 { printf("type\n"); $$=$1;}   
    | F64 { printf("type\n"); $$=$1;}   
    | BOOL { printf("type\n"); $$=$1;}  
    | INT { printf("type\n"); $$=$1;}   
    | ID { printf("typen\n"); $$=$1;}    
    | type TIMES { 
                    printf("type\n"); 
                    appendStrF(&$1, 1, &$2);
                    $$ = $1;
                }   
    | STRUCT type { 
                    printf("type\n"); 
                    char *arr[] = { createStr(" "), $2};
                    appendStr(&$1,2, arr);
                    $$ = $1;
                } 
    | ID TIMES { 
                    printf("type\n"); 
                    appendStrF(&$1, 1, &$2);
                    $$ = $1;
                } 
;

typecast:
        L_BRACE type R_BRACE { 
                                printf("typecast\n"); 
                                char *arr[] = { $2,$3};
                                appendStrF(&$1,2,arr);
                                $$ = $1;   
                            } 
;

line: 
    statement { printf("line\n"); } 
    | preproc { printf("line\n"); } 
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
