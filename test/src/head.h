#ifndef HEAD_H
#define HEAD_H

#include"std.h"

typedef struct Foo
{
    i32 num;
    void (*bar)();
}Foo;

Foo foo;

void __Foo_bar();

void __Foo_init(Foo *foo);

#endif
