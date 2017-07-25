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

    bool localS;
    bool lastLocal;
};

void initGlobalS();

GlobalS *globalS;

void gsEnterStruct(char *sname, bool local);
void gsExitStruct();

void gsEnterFunc(char *fname);
void gsExitFunc();

void gsEnterBlock();
void gsExitBlock();

void freeGlobalS();

#endif
