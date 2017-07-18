#ifndef FILEPRODUCTION_H
#define FILEPRODUCTION_H

typedef struct Production
{
    char *str;
    //opt type
    int inHeap;
    char *id;
    char *type;
    char *fargs;
    char *body;
    char *sbody;
    char *initbody;
    char *value;
    int isStruct;
}Production;

Production *createProd(char *str);

void appendTo(Production *prod, Production *app);

void appendToProd(Production *prod, char *str);

void appendStr(char **str, char *app);

void finishProd(Production *prod);

void freeProd(Production *prod);

void f_cfunction(Production *prod);

void f_struct(Production *prod);

void f_singleton(Production *prod);

#endif
