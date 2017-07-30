#ifndef GLOBALS_H
#define GLOBALS_H

#include"stdlib.h"
#include"stdbool.h"

typedef struct GlobalS GlobalS;
struct GlobalS 
{
    int indentlvl;
    //STRUCTURE
    bool inStruct;
    char *structName;

    //FUNCTION
    bool inFunc;     
    char *funcName;
    char *lastFuncName;

    bool localS;
    bool lastLocal;

    bool exit;
};

void initGlobalS();

GlobalS *globalS;

void gsEnterStruct(char *sname, bool local);
void gsExitStruct();

void gsEnterFunc(char *fname);
void gsExitFunc();

void gsExitFuncDec();

void gsEnterBlock();
void gsExitBlock();

void freeGlobalS();

#endif
