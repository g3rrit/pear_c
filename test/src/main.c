#include"std.h"
#include"head.h"

int main()
{
    printf("Hello World");

    foo.bar();

    Foo *foo2 = malloc(sizeof(Foo));
    __Foo_init(foo2);

    foo2->bar();

    free(foo2);

    return 0;
}
