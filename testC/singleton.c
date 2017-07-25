#include"singleton.h"

Foo foo = { .name="tom", .num=10};

int main()
{
    printf("name: %s, num: %i \n", foo.name, foo.num);
    return 0;
}
