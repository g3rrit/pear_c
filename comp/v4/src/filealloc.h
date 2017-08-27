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

void addFuncDeclToFile(Func *func);

char *fsmallestCF(char *a, char *b, char *c, char *d);

char *fsmallestC(char *a, char *b);

char *fmatchingBrace(char *brace);

#endif
