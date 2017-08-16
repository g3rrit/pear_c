#include"fileprod.h"
#include"string.h"
#include"dir.h"
#include"globals.h"

char *createStrDecl(Decl *decl)
{
    // why  __ ??
    /*char *res = createStr("__");
    char *resapp = createStr("_");
    if(globalS->inFunc)
        appendStr(&res,1, &(globalS->lastFuncName));
    appendStrF(&res,1,&resapp);
    char *arr[] = { decl->id, " ", decl->id};
    appendStr(&res, 3, arr);
    return res;*/
    return NULL;
}

char *createStrAssign(Assign *assign)
{
    char *res = assign->def;
    if(assign->init)
    {
        char *arr[] = { createStr(" = "), assign->value};
        appendStrF(&res,2,arr);
    }

    free(assign);
    return res;
}

char *createStr(char *str)
{
    char *res = malloc(sizeof(char) * (strlen(str) + 1));

    strcpy(res, str);

    return res;
}

void appendStr(char **str, int size, char *arr[])
{
    if(!*arr)
        return;

    int lenStr = strlen(*str);
    for(int i = 0; i < size; i++)
    {
        lenStr += strlen(arr[i]);
    }

    char *res = malloc(sizeof(char) * (lenStr + 1));
    strcpy(res, *str);
    free(*str);
    
    for(int i = 0; i < size; i++)
    {
        strcat(res, arr[i]); 
    }

    *str = res;
    
    //printf("str: \n %s \n", *str);
}

void appendStrF(char **str, int size, char *arr[])
{
    appendStr(str,size,arr);

    for(int i = 0; i < size; i++)
    {
        free(arr[i]);
    }
}

Struc *createStruct()
{
    Struc *struc = malloc(sizeof(Struc));
    struc->id = 0;
    struc->sassign = 0;

    return struc;
}

void appendAssignStruct(Struc *struc, Assign *assign)
{
    Sassign **sassign = &(struc->sassign);

    while(*sassign != 0)
    {
        sassign = &((*sassign)->next);
    }

    *sassign = malloc(sizeof(Sassign));
    (*sassign)->next = 0;
    (*sassign)->prev = 0;
    (*sassign)->assign = assign;
}

void printStruct(Struc *struc)
{
    printf("struct id: %s \n", struc->id);

    Sassign **sassign = &(struc->sassign);

    while(*sassign)
    {
        printf("ass def: %s value %s \n", (*sassign)->assign->def, (*sassign)->assign->value);
        sassign = &((*sassign)->next);
    }
}





