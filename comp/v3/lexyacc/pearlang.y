%{
#include<stdio.h>
#include<stdlib.h>
#include"fileprod.h"
#include"filealloc.h"
#include"string.h"
#include"dir.h"
#include"globals.h"
#include"stdbool.h"

#define YYDEBUG 1

extern int yylex();
extern int yyparse();
extern FILE *yyin;

void yyerror(const char* s);
%}

%union {
    char *str;
    Func *func;
    Assign *assign;
    Sassign *sassign;
    Struc *struc;
}

%token<str> ID              /*identifier*/
%token<str> NUMBER
%token<str> FLOAT
%token<str> STRING
%token<str> AR                   /*arrow sign ->*/
%token<str> COLON
%token<str> SEMICOLON
%token<str> COMMA
%token<str> DOT
%token<str> L_BRACE R_BRACE      /* ( ) */ 
%token<str> L_GBRACE R_GBRACE    /* { } */
%token<str> EQUAL                /* = */
%token<str> ADDRESS

%token<str> TIMES
%token<str> PLUS
%token<str> MINUS
%token<str> DIVIDED
%token<str> MODULO
%token<str> HASH
%token<str> QUOTATION

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

%type<str> statement expression areturn type fcall s_fcall preproc include_s block_s block loop conditionalOp condition allotment
%type<func> s_func func funcdef s_funcdef
%type<struc> s_struct struct
%type<assign> assignment


%start program


%%

program: 
       program line 
       | line
       | program program
;

preproc:
       include_s {
            appendStrF(&(activeFT.htdef), 1, &$1);
        }
       | LOCAL include_s {
            appendStrF(&activeFT.stdef, 1, &$2);
            free($1);
        }
;

include_s:
       INCLUDE STRING {
            printf("include_s");
            char *incC = $2;
            //free(&incC[strlen(incC)]);
            incC[strlen(incC) - 1] = 0;
            char *arr[] = { incC, createStr(".h\"\n")};
            appendStrF(&$1, 2, arr);
            $$ = $1;
        }
;


s_fcall:
     ID L_BRACE {
            printf("fcall \n");
            appendStrF(&$1,1,&$2);
            $$ = $1;
        }
     | s_fcall expression {
            printf("fcall \n");
            appendStrF(&$1, 1,&$2);
            $$ = $1;
        }
     | s_fcall COMMA expression {
            printf("fcall \n");
            char *arr[] = { $2, $3};
            appendStrF(&$1,2,arr);
            $$ = $1;
        }
;

fcall:
     s_fcall R_BRACE {
            printf("fcall \n");
            appendStrF(&$1,1,&$2);
            $$ = $1;
        }
;

    /* FUNCTION */

s_funcdef:
       ID COLON L_BRACE {
            printf("s_funcdef \n");
            gsEnterFunc(createStr($1));
            Func *func = malloc(sizeof(Func));
            if(globalS->inStruct)
            {
                char *arr[] = { createStr(globalS->structName), createStr("_")};
                func->idpre = createStr("__");
                appendStrF(&func->idpre, 2, arr);
            }
            else
            {
                func->idpre = createStr("");
            }
            func->id = $1;
            func->def = $3;
            $$ = func;
            free($2);
        }
       | s_funcdef ID COLON type {
            printf("s_funcdef \n");
            char *arr[] = { $4, createStr(" "), $2};
            appendStrF(&($1->def),3, arr);
            $$ = $1;
            free($3);
        }
       | s_funcdef COMMA ID COLON type {
            printf("s_funcdef \n");
            char *arr[] = { $2, $5, createStr(" "), $3};
            appendStrF(&($1->def), 4, arr);
            $$ = $1;
            free($4);
        }
;

funcdef:
       s_funcdef R_BRACE AR type {
            printf("funcdef \n");
            appendStrF(&($1->def),1,&$2);
            $1->type = $4;
            $$ = $1;
            free($3);
        }
;

s_func:
      funcdef L_GBRACE {
            printf("s_func \n");
            $1->body = $2;
            $$ = $1;
        }
      | s_func statement {
            printf("s_func \n");
            char *snl = "\n";
            appendStr(&($1->body),1,&snl);
            appendStrF(&($1->body), 1,&$2);
            $$ = $1;
        }
;

func:
    s_func R_GBRACE {
        printf("func \n");
        appendStrF(&($1->body),1,&$2);
        char *snl = "\n";
        appendStr(&($1->body),1,&snl);
        $$ = $1;
  
        printf("function finished: \n type: %s \n id: %s \n def:  %s \n body: \n %s \n", $1->type, $1->id, $1->def, $1->body);
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
    | LOCAL s_func R_GBRACE {
        printf("local func \n");
        appendStrF(&($2->body),1,&$3);
        char *snl = "\n";
        appendStr(&($2->body),1,&snl);
        $$ = $2;
  
        printf("function finished: \n type: %s \n id: %s \n def:  %s \n body: \n %s \n", $2->type, $2->id, $2->def, $2->body);
        addFuncToFile($2,1);
        gsExitFunc();
    }
;        

    /* FUNCTION */

    /* STRUCT */

s_struct:
        ID COLON STRUCT L_GBRACE {
            printf("s_struct \n");
            gsEnterStruct(createStr($1), false);
            Struc *struc = createStruct(); 
            struc->id = $1;
            $$ = struc;
            free($2);              
        }
        | LOCAL ID COLON STRUCT L_GBRACE {
            printf("s_struct \n");
            gsEnterStruct(createStr($1), true);
            Struc *struc = createStruct(); 
            struc->id = $2;
            $$ = struc;
            free($2);              
        }
        | s_struct assignment {
            printf("s_struct \n");
            appendAssignStruct($1,$2); 
            $$ = $1;

            printStruct($1);
        }
;

struct:
      s_struct R_GBRACE {
            printf("struct \n");
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
;

    /* STRUCT */

    /* BLOCK */

block_s:
     L_GBRACE { 
            $$ = createStr("{\n");
            free($1);
        }
     | block_s statement {
            char *arr[] = { $2, createStr("\n")};
            appendStrF(&$1,2,arr);
            $$ = $1;
        }
;

block:
     block_s R_GBRACE {
            appendStrF(&$1, 1, &$2);
            $$ = $1;
        }
;

    /* BLOCK */

    /* LOOPS */

loop:
    FOR L_BRACE assignment expression SEMICOLON expression R_BRACE block {
            char *arr[] = { $2, createStrAssign($3), $4, $5, $6, $7, $8 };           
            appendStrF(&$1,7, arr);
            $$ = $1;
        }
    | WHILE L_BRACE expression R_BRACE block {
            char *arr[] = { $2, $3, $4, $5};
            appendStrF(&$1, 4, arr);
            $$ = $1;
        }
;

condition:
         IF L_BRACE expression R_BRACE block {
                char *arr[] = { $2, $3, $4, $5};
                appendStrF(&$1, 4, arr);
                $$ = $1;
            }
         | condition ELSE condition {
                char *arr[] = { $2, createStr(" "), $3};
                appendStrF(&$1, 3, arr);
                $$ = $1;
            }
         | condition ELSE block {
                char *arr[] = { $2, $3 };
                appendStrF(&$1, 2, arr);
                $$ = $1;
            }
         | IF L_BRACE expression R_BRACE statement {
                char *arr[] = { $2, $3, $4, $5};
                appendStrF(&$1, 4, arr);
                $$ = $1;
            }
;

conditionalOp:
             GREATER {$$=$1;}
             | LESS {$$=$1;}
             | GREQ {$$=$1;}
             | LEEQ {$$=$1;}
             | AND {$$=$1;}
             | OR {$$=$1;}
             | SAME {$$=$1;}
             | NOTEQ {$$=$1;}
;

areturn:
       RETURN expression SEMICOLON {
            printf("areturn \n");
            char *arr[] = {createStr(" "),$2,$3};
            appendStrF(&$1,3,arr);
            $$ = $1;
       }
;

assignment:
          ID COLON type EQUAL expression SEMICOLON {
                printf("assignment \n");
                /*char *arr[] = {$1, $4, $5,$6};
                appendStrF(&$3,3,arr);
                $$ = $3;
                free($2);*/
                Assign *assign = malloc(sizeof(Assign));
                assign->id = $1;
                assign->type = createStr($3);
                assign->def = $3;
                char *arr[] = { " ", $1};
                appendStr(&(assign->def), 2,arr);
                assign->value = $5;
                $$ = assign;
                free($2);
                free($4);
                free($6);
            }
         | ID COLON ID EQUAL expression SEMICOLON {
                printf("assignment \n");
                Assign *assign = malloc(sizeof(Assign));
                assign->id = $1;
                assign->type = createStr($3);
                assign->def = $3;
                char *arr[] = { " ", $1};
                appendStr(&(assign->def), 2,arr);
                assign->value = $5;
                $$ = assign;
                free($2);
                free($4);
                free($6);
            }
          | ID COLON ID TIMES EQUAL expression SEMICOLON {
                printf("assignment \n");
                Assign *assign = malloc(sizeof(Assign));
                assign->id = $1;
                char *spoint = "*";
                appendStr(&$3,1,&spoint);
                assign->type = createStr($3);
                assign->def = $3;
                char *arr[] = { " " , $1};
                appendStr(&(assign->def), 2,arr);
                assign->value = $6;
                $$ = assign;
                free($2);
                free($4);
                free($5);
                free($7);
            }
          | ID COLON type SEMICOLON {
                printf("assignment \n");
                Assign *assign = malloc(sizeof(Assign));
                assign->id = $1;
                assign->type = createStr($3);
                assign->def = $3;
                char *arr[] = { " ", $1};
                appendStr(&(assign->def), 2, arr);
                assign->value = createStr("NULL");
                $$ = assign;
                free($2);
                free($4);
            }
          | func {
                Assign *assign = malloc(sizeof(Assign));
                assign->id = $1->id; 
                assign->type = $1->type;
                assign->def = createStr($1->type);
                char *arr[] = { " (*", createStr($1->id), ")", createStr($1->def)};
                appendStr(&assign->def,4,arr);
                char *val = createStr("&");
                appendStr(&val, 1, &($1->idpre));
                appendStr(&val, 1, &($1->id));
                assign->value = val;
                $$ = assign;
            }
;

allotment:
         ID EQUAL expression SEMICOLON {
                char *arr[] = { $2,$3,$4};
                appendStrF(&$1,3,arr);
                $$ = $1;
            }
;

statement: 
         expression SEMICOLON {
                appendStr(&$1,1,&$2);
                $$ = $1;
            }
         | areturn { $$ = $1;}
         | allotment {$$=$1;}
         | assignment { 
                char *res = createStrAssign($1);
                $$ = res;
            }
         | loop { $$ = $1;}
         | condition { $$ = $1;}
         | func {
                printf("function \n");
            }   
         | struct {
                printf("struct \n");
            }
;

expression:
          fcall { $$ = $1;}
          | NUL { $$ = $1;}
          | NUMBER {$$=$1;}
          | FLOAT {$$=$1;}
          | STRING {$$=$1;}
          | ID {$$=$1;}
          | TRUE {$$=$1;}
          | FALSE {$$=$1;}
          | NEW ID L_BRACE R_BRACE {
                char *res = createStr("__");
                char *arr[] = { $1, createStr("_"), $2, createStr("()")};
                appendStrF(&res, 4, arr);
                $$ = res;
                free($3);
                free($4);
            }
          | CRT ID L_BRACE R_BRACE {
                char *res = createStr("__");
                char *arr[] = { $1, createStr("_"), $2, createStr("()")};
                appendStrF(&res, 4, arr);
                $$ = res;
                free($3);
                free($4);
            }
          | ADDRESS expression {
                appendStrF(&$1,1,&$2);
                $$ = $1;
            }
          | expression DOT expression {
                char *arr[] = { $2, $3};
                appendStrF(&$1, 2, arr);
                $$ = $1;
            }  
          | expression AR expression {
                char *arr[] = { $2, $3};
                appendStrF(&$1, 2, arr);
                $$ = $1;
            }
          | L_BRACE expression R_BRACE {
                char *arr[] = { $2,$3};
                appendStrF(&$1,2,arr);
                $$ = $1; 
            }
          | expression PLUS expression {
                char *arr[] = { $2,$3};
                appendStrF(&$1,2,arr);
                $$ = $1;
            }
          | expression MINUS expression {
                char *arr[] = { $2,$3};
                appendStrF(&$1,2,arr);
                $$ = $1;
            }
          | expression TIMES expression {
                char *arr[] = { $2,$3};
                appendStrF(&$1,2,arr);
                $$ = $1;
            }
          | expression DIVIDED expression {
                char *arr[] = { $2,$3};
                appendStrF(&$1,2,arr);
                $$ = $1;
            }
          | expression MODULO expression {
                char *arr[] = { $2,$3};
                appendStrF(&$1,2,arr);
                $$ = $1;
            }  
          | MINUS expression {
                appendStrF(&$1,1,&$2);
                $$ = $1;
            }
          | PLUS expression {
                appendStrF(&$1,1,&$2);
                $$ = $1;
            }
          | NOT expression {
                appendStrF(&$1,1,&$2);
                $$ = $1;
            }
          | expression MINUS MINUS {
                char *arr[] = { $2,$3};
                appendStrF(&$1,2,arr);
                $$ = $1;
            }
          | expression PLUS PLUS {
                char *arr[] = { $2,$3};
                appendStrF(&$1,2,arr);
                $$ = $1;
            }
          | expression conditionalOp expression {
                char *arr[] = { $2,$3};
                appendStrF(&$1,2,arr);
                $$ = $1;
            }
;

type:
     type TIMES  { 
        appendStrF(&$1, 1, &$2);
        $$ = $1;
    } 
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
    | INT   {$$ = $1;}
    | ID    {$$ = $1;}
;

line: 
    statement {
        printf("statement \n");
    }
    | preproc {}
;


%%

#include"stdio.h"

int yydebug = 1;

void compileToOut(int argc, char **argv);

int doCommand(int i, char *argv[])
{
    if(strcmp("--o",argv[i]) == 0)
    {
        i++; 
        printf("output: %s\n",argv[i]); 
    } 
    return i;
}

int main(int argc, char *argv[])
{
    
    //filter commands from file with -- 
    int fileCount = 0;
    char *farr[argc];
    for(int i = 1; i < argc; i++)
    {
        if(strcmp("--", argv[i]) == 0)
        {
            i = doCommand(i, argv);
        }   
        else
        {
            farr[fileCount] = argv[i];
            printf("argv: %s\n", argv[i]);
            fileCount++;
        }
    } 

    char *gccarr[fileCount];

    int compiling = 1;
    //search for all files

    //create stdfile in target dir

    printf("starting compilation \n");

    int count = 0;
    while(compiling)
    {
        printf("farr0: %s\n",farr[count]);
        printf("farr0: %s\n",farr[0]);
        yyin = fopen(farr[count],"r");
        count++;
        if(count >= fileCount)
            compiling = 0;
        
        if(yyin == NULL)
        {
            printf("couldnt open files \n");
            continue;
        }   
        
        initGlobalS();

        char *shs = ".h";
        char *scs = ".c";
        char *shb = "_H";
        char *dotHs = createStr(farr[count - 1]);
        char *dotCs = createStr(farr[count - 1]);
        char *dotHb = createStr(farr[count - 1]);
        dotHb[strlen(dotHb) - 5] = 0;
        dotCs[strlen(dotCs) - 5] = 0;
        dotHs[strlen(dotHs) - 5] = 0;
        appendStr(&dotHs,1,&shs);   
        appendStr(&dotCs,1,&scs);
        appendStr(&dotHb,1,&shb);

        //gcc 
        gccarr[count - 1] = createStr(dotCs);

        //initFiles("test.h", "TEST_H");
        initFiles(dotHs,dotHb);
        //createC("/Users/pear/Desktop/projects/pearlang/example/output/", "test.c","test.h");
        createC("./",dotCs,dotHs);
        free(dotHs);
        free(dotCs);
        free(dotHb);

        do 
        {
            yyparse();
        }while(!feof(yyin));

        finishFiles();
        closeC();
        freeGlobalS();
    }

    printf("finished compiling \n");

    //compileToOut(fileCount, gccarr);

    printf("finished compiling to .out\n");

    return 0;
}

void compileToOut(int argc, char **argv)
{
    char *args = createStr("gcc ");
    char *sem = " ";
    for(int i = 0; i < argc; i++)
    {
        printf("%i %s", i, argv[i]);
        appendStr(&args,1,&sem);
        appendStrF(&args,1,&argv[i]);
    }
    printf("args: %s\n", args);
    if(system(args) == -1)
    {
        printf("error compiling to .out\n");
    }  
    else
    {
        printf("finished compiling to .out\n");
    }

    /*for(int i = 0; i < argc; i++)
    {
        printf("count: %i\n",i);
        free(argv[i]);
    }*/
}

void yyerror(const char* s)
{
    printf("hello");
    fprintf(stderr, "parse error: %s \n", s);
    printf("error sis: %s", s);
    close(0);
}
