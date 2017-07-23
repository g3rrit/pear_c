#include"pstd.h"
#include"stdbool.h"
#include"stdlib.h"

typedef struct __Elist
{
    bool (*fun)();
    struct __Elist *next;
}__Elist;

typedef struct __EventList
{
    char *name;
    __Elist *elist;
    struct __EventList *next;
}__EventList;

void __appendFun(__Elist **elist, bool (*fun)());

__EventList *eventList = NULL;

void __appendEvent(char *name, bool (*fun)())
{
    __EventList **tempEList = &eventList;

    while(*tempEList)
    {
        if(!strcmp((*tempEList)->name, name))
                break;

        tempEList = &((*tempEList)->next);
    } 

    *tempEList = malloc(sizeof(__EventList));
    (*tempEList)->name = name;
    (*tempEList)->elist = NULL;
    (*tempEList)->next = NULL;
    __appendFun(&((*tempEList)->elist), fun);
}

void __appendFun(__Elist **elist, bool (*fun)())
{
    while(*elist)
    {
        elist = &((*elist)->next);        
    }

    *elist = malloc(sizeof(__Elist));
    (*elist)->next = NULL;
    (*elist)->fun = fun;
}

void __dispatchEvent(char *name)
{
    __EventList **tempEList = &eventList; 

    while(*tempEList)
    {
        if(!strcmp((*tempEList)->name, name))
            break;

        tempEList = &((*tempEList)->next);
    }

    __Elist **tempList = &(*tempEList)->elist;

    while(*tempList)
    {
        if(((*tempList)->fun)())
            break;

        tempList = &((*tempList)->next);
    }
}

bool test1()
{
    printf("test1\n");
    return false;
}

bool test2()
{
    printf("test2\n");
    return false;
}

bool test3()
{
    printf("test3\n");
    return true;
}

bool test4()
{
    printf("test4\n");
    return false;
}

bool test5()
{
    printf("test5\n");
    return false;
}


int main()
{
    printf("lol\n");

    __appendEvent("foo", &test1);
    printf("segfault\n");
    __appendEvent("foo", &test2);
    __appendEvent("foo", &test3);
    __appendEvent("foo", &test4);
    __appendEvent("foo", &test5);

    __dispatchEvent("foo");

    return 0;
}


