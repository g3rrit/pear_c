#ifndef HEAD_H
#define HEAD_H

typedef struct Foo
{
    int num;
    void (*print)();
}Foo;

void print();

Foo foo;

void init__Foo(Foo *this);

Foo create__Foo();

void appendStr(char **str, size_t size, char * app[]);

#endif
