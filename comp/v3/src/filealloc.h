#ifndef FILEALLOC_H
#define FILEALLOC_H

#include"fileprod.h"

typedef struct ActiveFT ActiveFT;
struct ActiveFT
{
    //head
    char *htdef;
    char *hdef;
    char *hbody;

    //source
    char *stdef;
    char *sdef;
    char *sbody;
};
ActiveFT activeFT;

void initFiles(char*, char*);

void finishFiles();

void addFuncToFile(Func *func, int local);

void addStructToFile(Struc *struc, int local);

void addSingleToFile(Struc *struc, char *id, int local);

#endif
