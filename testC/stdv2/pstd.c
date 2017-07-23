#include"pstd.h"

// INIT AND DEINIT FUN

void __INIT()
{
}

void __DEINIT()
{
}

// -----

// LIST

void __List_append(List *this, void *data)
{
    List **tlist = &this;

    while(*tlist)
    {
        tlist = &((*tlist)->next);
    }

    *tlist = malloc(sizeof(List));
    (*tlist)->next = NULL;
    (*tlist)->data = data;
}


