#include"fileprod.h"
#include"string.h"
#include"dir.h"

char *createStrAssign(Assign *assign)
{
    char *res = assign->def;
    char *arr[] = { createStr(" = "), assign->value, createStr("; \n")};
    appendStrF(&res,3,arr);
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
    
    printf("str: \n %s \n", *str);
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

char *activeHeadT = 0;
char *activeSource = 0;
char *activeSourceDecT = 0;

void initFiles(char *name, char *nameH)
{
    if(activeHeadT)
        free(activeHeadT); 
    
    if(activeSourceT)
        free(activeSourceT);

    if(activeSourceDecT)
        free(activeSourceDecT);

    activeHeadT = createStr("#ifndef ");
    appendStr(&activeHeadT, 1, &nameH);
    char *snl = "\n";
    appendStr(&activeHeadT, 1, &snl);
    char *sdef = "#define ";
    appendStr(&activeHeadT, 1, &sdef);
    appendStr(&activeHeadT, 1, &nameH);
    appendStr(&activeHeadT, 1, &snl);

    char *stdint = "#include\"stdint.h\"\n";
    appendStr(&activeHeadT,1, &stdint);

    activeSourceDecT = createStr("#include\"");
    appendStr(&activeSourceDecT,1,&name);
    char *sqnl = "\" \n";
    appendStr(&activeSourceDecT,1,&sqnl);
    appendStr(&activeSourceDecT,1,&stdint);

    activeSourceT = createStr("\n");
}

void finishFiles()
{
    //add endif to head
    char *sendif = "\n#endif";
    appendStr(&activeHeadT, 1,&sendif);

    writeToHead(activeHeadT);
    writeToSource(activeSourceDecT);
    writeToSource(activeSourceT); 

    printf("writing:\n head: \n %s \n source: \n %s %s \n", activeHeadT, activeSourceDecT, activeSourceT);
    free(activeHeadT);
    free(activeSourceT);
    free(activeSourceDecT);
       
    activeHeadT = 0;
    activeSourceT = 0;
    activeSourceDecT = 0;
}

void addFuncToFile(Func *func, int local)
{
    char **headRes;
    if(local)
    {
        headRes = &activeSourceDecT;
    }
    else
    {
        headRes = &activeHeadT;
    }

    //to head if not local
    appendStr(headRes,1, &(func->type));
    char *sf = " ";
    appendStr(headRes,1,&sf);
    appendStr(headRes,1,&(func->id));
    appendStr(headRes,1,&(func->def));
    char *ssnl = "; \n";
    appendStr(headRes,1,&ssnl);    

    //to source
    char *arr[] = { func->type, " ", func->id, func->def, "\n", func->body};
    appendStr(&activeSourceT,6,arr);
}

void addStructToFile(Struc *struc, int local)
{
    char **headRes;
    if(local)
    {
        headRes = &activeSourceDecT;     
    }
    else
    {
        headRes = &activeHeadT;
    }

    //to head
    char *arr[] = { "typedef struct ", struc->id, " { \n"};
    appendStr(headRes,3,arr);

    Sassign **sassign = &(struc->sassign);

    while(*sassign)
    {
        Assign *assign = (*sassign)->assign;
        char *arr2[] = { assign->def, "; \n"};
        appendStr(headRes, 2, arr2);

        //printf("ass def: %s value %s \n", (*sassign)->assign->def, (*sassign)->assign->value);
        sassign = &((*sassign)->next);
    }

    //char *snlb = "\n } ";
    //appendStr(&activeHeadT,1, &snlb);
    char *arr4[] = { "} ", struc->id, "; \n"};
    appendStr(headRes, 3, arr4);

    //create new func
    Func *func = malloc(sizeof(Func));
    func->id = createStr("__new_");
    appendStr(&(func->id),1,&(struc->id));
    func->type = createStr(struc->id);
    char *spoint = "*";
    appendStr(&(func->type),1,&spoint);
    func->def = createStr("()");

    func->body = createStr("{ \n");
    char *fbarr[] = { struc->id, " *this = malloc(sizeof(", struc->id, "));\n" };
    appendStr(&(func->body), 4, fbarr);

    sassign = &(struc->sassign);

    while(*sassign)
    {
        Assign *assign = (*sassign)->assign;
        
        char *arr2[] = { "this->", assign->id, " = ", assign->value, "; \n"};
        appendStr(&func->body, 5, arr2);

        sassign = &((*sassign)->next);
    }

    char *sret = "return this;\n";
    appendStr(&func->body,1,&sret);
       
    char *sbnl = "} \n";
    appendStr(&func->body,1,&sbnl);

    addFuncToFile(func,local);


    //create crt func
    Func *func2 = malloc(sizeof(Func));
    func2->id = createStr("__crt_");
    appendStr(&(func2->id),1,&(struc->id));
    func2->type = createStr(struc->id);
    func2->def = createStr("()");

    func2->body = createStr("{ \n");
    char *fcbarr[] = { struc->id, " this;\n" };
    appendStr(&(func2->body), 2, fcbarr);

    sassign = &(struc->sassign);

    while(*sassign)
    {
        Assign *assign = (*sassign)->assign;
        
        char *arr2[] = { "this.", assign->id, " = ", assign->value, "; \n"};
        appendStr(&func2->body, 5, arr2);

        sassign = &((*sassign)->next);
    }

    appendStr(&func2->body,1,&sret);
       
    appendStr(&func2->body,1,&sbnl);

    addFuncToFile(func2,local);
}



