#include"fileproduction.h"
#include"string.h"

Production *createProd(char *str)
{
    Production *prod = calloc(1,sizeof(Production));
    prod->str = malloc(sizeof(char) * (strlen(str) + 1));
    strcpy(prod->str, str);

    prod->inHeap = 0;

    return prod;
}

void appendTo(Production *prod, Production *app)
{
    printf("appending: %s to: %s \n", app->str, prod->str);
    
    char *res = malloc(sizeof(char) * (strlen(prod->str) + strlen(app->str) + 1));

    strcpy(res, prod->str);
    strcat(res, app->str);

    free(prod->str);
    free(app->str);
    free(app);

    prod->str = res;

    printf("prod->str: %s \n", prod->str);
}

void appendToProd(Production *prod, char *str)
{
    appendTo(prod, createProd(str));
}

void finishProd(Production *prod)
{
    //finish production and write to file
    //
    printf("finished production: \n %s", prod->str);

    freeProd(prod);
}

void appendStr(char **str, char *app)
{
    printf("appending: \n %s to: \n %s", *str, app);
        
    size_t str1len = 0;
    size_t str2len = 0;

    if(strlen(*str))
        str1len = strlen(*str);
    if(strlen(app))
        str2len = strlen(app);

    if(str1len + str2len <= 0)
        return;

    char *res = malloc(sizeof(char) * (str1len + str2len + 1));

    strcpy(res, *str);
    strcat(res, app);

    free(*str);

    *str = res;
}

void appendStrFree(char **str, char *app)
{
    appendStr(str,app);

    free(app);
}

void freeProd(Production *prod)
{
    free(prod->str);
    free(prod);
}

void f_cfunction(Production *prod)
{
    //add to head;
    printf("to head: \n");
    printf("%s %s %s ;", prod->type, prod->id, prod->fargs);

    printf("to c: \n");
    printf("%s %s %s \n", prod->type, prod->id, prod->fargs);
    printf("{ \n %s \n }", prod->body);

    printf("end");
}

void f_struct(Production *prod)
{
    printf("STRUCT \n");

    printf("to head: \n");
    printf("typedef struct %s { \n",prod->type);
    printf(" %s \n } %s ; \n", prod->sbody, prod->type);

    printf("void init__%s(%s *this);", prod->type, prod->type);

    printf("to c: \n");
    printf("void init__%s(%s *this){ \n", prod->type, prod->type);  
    printf("%s \n }", prod->initbody);
}

void f_singleton(Production *prod)
{
    printf("to head: \n");
    printf("typedef struct %s { \n", prod->type);
    printf(" %s \n } %s ; \n", prod->sbody, prod->type);
    
}

