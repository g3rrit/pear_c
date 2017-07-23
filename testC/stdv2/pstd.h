#ifndef PSTD_H
#define PSTD_H

#include"stdbool.h"
#include"stdlib.h"

void __INIT();

void __DEINIT();

typedef struct List List;
struct List
{

}

typedef struct ListE ListE;

struct ListE
{
    void *data;
    List *next;
}

#endif
