#include"globals.h"
#include"fileprod.h"

GlobalS *globalS = 0;

void initGlobalS()
{
    globalS = malloc(sizeof(GlobalS));
    globalS->indentlvl = 0;
    globalS->inFunc = false;     
    globalS->funcName = 0;
    globalS->lastFuncName = 0;
    globalS->inStruct = false;
    globalS->structName = 0;
    globalS->localS = false;
    globalS->lastLocal = false;
    globalS->exit = false;
}

void gsEnterStruct(char *sname, bool local)
{
    globalS->indentlvl++;
    globalS->inStruct = true;
    globalS->structName = sname;
    globalS->localS = local;
    globalS->lastLocal = local;
}

void gsExitStruct()
{
    globalS->indentlvl--;
    globalS->inStruct = false;
    free(globalS->structName);
    globalS->structName = 0;
    globalS->localS = false;
}

void gsEnterFunc(char *fname)
{
    if(!(globalS->lastFuncName))
        globalS->lastFuncName = globalS->funcName;
    globalS->indentlvl++;
    globalS->funcName = fname;
    globalS->inFunc = true;
}

void gsExitFunc()
{
    globalS->indentlvl--;
    globalS->inFunc = false;
    if(globalS->funcName)
        free(globalS->funcName);
    globalS->funcName = 0;
    if(globalS->lastFuncName)
        free(globalS->lastFuncName);
    globalS->lastFuncName = 0;
}

void gsExitFuncDec()
{
    if(globalS->funcName)
        free(globalS->funcName);
    globalS->funcName = createStr(globalS->lastFuncName); 
    globalS->indentlvl--;
}

void gsEnterBlock()
{
    globalS->indentlvl++;
}

void gsExitBlock()
{
    globalS->indentlvl--;
}

void freeGlobalS()
{
    if(globalS->structName)
        free(globalS->structName);
    if(globalS->funcName)
        free(globalS->funcName);
    if(globalS->lastFuncName)
        free(globalS->lastFuncName);

    free(globalS);
}



