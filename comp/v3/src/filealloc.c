#include"filealloc.h"
#include"dir.h"

ActiveFT activeFT = { .htdef = 0, .hdef = 0, .hbody = 0, .stdef = 0, .sdef = 0, .sbody = 0};

void initFiles(char *name, char *nameH)
{
    if(activeFT.htdef)
        free(activeFT.htdef);

    if(activeFT.hdef)
        free(activeFT.hdef);

    if(activeFT.hbody)
        free(activeFT.hbody); 

    if(activeFT.stdef)
        free(activeFT.stdef);

    if(activeFT.sdef)
        free(activeFT.sdef);
    
    if(activeFT.sbody)
        free(activeFT.sbody);
    
    activeFT.htdef = createStr("#ifndef ");
    appendStr(&activeFT.htdef, 1, &nameH);
    char *snl = "\n";
    appendStr(&activeFT.htdef, 1, &snl);
    char *sdef = "#define ";
    appendStr(&activeFT.htdef, 1, &sdef);
    appendStr(&activeFT.htdef, 1, &nameH);
    appendStr(&activeFT.htdef, 1, &snl);

    char *stdint = "#include\"stdlib.h\"\n#include\"stdint.h\"\n#include\"stdbool.h\"\n";
    appendStr(&activeFT.htdef,1, &stdint);

    activeFT.stdef = createStr("#include\"");
    appendStr(&activeFT.stdef,1,&name);
    char *sqnl = "\" \n";
    appendStr(&activeFT.stdef,1,&sqnl);
    appendStr(&activeFT.stdef,1,&stdint);

    activeFT.hdef = createStr("");
    activeFT.sdef = createStr("");
    activeFT.sbody = createStr("");
    activeFT.hbody = createStr("");
}

void finishFiles()
{
    //add endif to head
    char *sendif = "#endif";
    appendStr(&activeFT.hbody, 1,&sendif);

    writeToHead(activeFT.htdef);
    writeToHead(activeFT.hdef);
    writeToHead(activeFT.hbody);
    writeToSource(activeFT.stdef);
    writeToSource(activeFT.sdef);
    writeToSource(activeFT.sbody); 

    printf("writing:\n head: \n %s %s %s \n source: \n %s %s %s \n", activeFT.htdef, activeFT.hdef, activeFT.hbody, activeFT.stdef, activeFT.sdef, activeFT.sbody);
    free(activeFT.hbody);
    free(activeFT.hdef);
    free(activeFT.htdef);
    free(activeFT.sbody);
    free(activeFT.sdef);
    free(activeFT.stdef);
       
    activeFT.hbody = 0;
    activeFT.hdef = 0;
    activeFT.htdef = 0;
    activeFT.sbody = 0;
    activeFT.sdef = 0;
    activeFT.stdef = 0;
}

void addFuncToFile(Func *func, int local)
{
    char **headRes;
    if(local)
    {
        headRes = &activeFT.sdef;
    }
    else
    {
        headRes = &activeFT.hdef;
    }

    //to head if not local
    appendStr(headRes,1, &(func->type));
    char *sf = " ";
    appendStr(headRes,1,&sf);
    appendStr(headRes,1,&(func->idpre));
    appendStr(headRes,1,&(func->id));
    appendStr(headRes,1,&(func->def));
    char *ssnl = ";\n";
    appendStr(headRes,1,&ssnl);    

    //to source
    char *arr[] = { func->type, " ", func->idpre, func->id, func->def, "\n", func->body};
    appendStr(&activeFT.sbody,7,arr);
}

void addStructToFile(Struc *struc, int local)
{
    char **headRes;
    char **headDecRes;
    if(local)
    {
        headDecRes = &activeFT.stdef;
        headRes = &activeFT.sdef;     
    }
    else
    {
        headDecRes = &activeFT.htdef;
        headRes = &activeFT.hdef;
    }

    //to head
    char *arr[] = { "typedef struct ", struc->id, " ", struc->id, ";\n"};
    appendStr(headDecRes,5,arr);

    char *sarr[] = { "struct ", struc->id, " {\n"};
    appendStr(headRes, 3, sarr);

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
    //appendStr(&activeFT.hbody,1, &snlb);
    char *sbnls = "};\n";
    //char *arr4[] = { "} ", struc->id, "; \n"};
    appendStr(headRes, 1, &sbnls);

    //create new func
    Func *func = malloc(sizeof(Func));
    func->idpre = createStr("");
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
    func2->idpre = createStr("");
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

void addSingleToFile(Struc *struc, char *id, int local)
{
    if(!local)
    {
        char *arr[] = { struc->id, " ", id, ";\n"}; 
        appendStr(&(activeFT.stdef), 4, arr);
    }
    else
    {
        char *arr[] = { struc->id, " ", id, ";\n"}; 
        appendStr(&(activeFT.htdef), 4, arr);
    }

    char *arr[] = { struc->id, " ", id, "={"};
    appendStr(&(activeFT.sdef),4,arr);

    Sassign **sassign = &(struc->sassign);

    while(*sassign)
    {
        Assign *assign = (*sassign)->assign;
        if((*sassign)->next)
        {
            char *arr2[] = { ".", assign->id, "=", assign->value,","};
            appendStr(&(activeFT.sdef), 5, arr2);
        }
        else
        {
            char *arr2[] = { ".", assign->id, "=", assign->value,"};\n"};
            appendStr(&(activeFT.sdef), 5, arr2);
        }
        sassign = &((*sassign)->next);
    }
}


