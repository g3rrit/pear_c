#include"std.h"
#include"head.h"

Foo foo = { .num = 10, .bar = &__Foo_bar};

void __Foo_bar()
{
    printf("lol this working \n");
}

void __Foo_init(Foo *foo)
{
    foo->num = 10;
    foo->bar = &__Foo_bar;
}
