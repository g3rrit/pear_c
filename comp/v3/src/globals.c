#include"globals.h"

GlobalS *globalS = 0;

void initGlobalS()
{
    globalS = malloc(sizeof(GlobalS));
    globalS->indentlvl = 0;
    globalS->inFunc = false;     
    globalS->funcName = 0;
    globalS->inStruct = false;
    globalS->structName = 0;
    globalS->localS = false;
}

void gsEnterStruct(char *sname, bool local)
{
    globalS->indentlvl++;
    globalS->inStruct = true;
    globalS->structName = sname;
    globalS->localS = local;
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
    globalS->indentlvl++;
    globalS->funcName = fname;
    globalS->inFunc = true;
}

void gsExitFunc()
{
    globalS->indentlvl--;
    globalS->inFunc = false;
    free(globalS->funcName);
    globalS->funcName = 0;
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

    free(globalS);
}



