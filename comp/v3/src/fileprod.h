#ifndef FILEPROD_H
#define FILEPROD_H

typedef struct Func
{
    char *type;
    char *def;
    char *body;
    char *id;
    char *idpre;
}Func;

typedef struct Struc
{
    char *id;
    struct Sassign *sassign;
}Struc;

typedef struct Assign
{
    char *type;
    char *id;
    char *def;
    char *value;
}Assign;

typedef struct Sassign
{
    struct Sassign *prev;
    struct Sassign *next;
    Assign *assign;
}Sassign;

void appendAssignStruct(Struc *struc, Assign *assign);

void printStruct(Struc *struc);

char *createStrAssign(Assign *assign);

char *createStr(char *str);

Struc *createStruct();

void appendStr(char **str, int size, char *arr[]);

void appendStrF(char **str, int size, char *arr[]);

#endif
