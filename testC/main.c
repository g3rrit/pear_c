#include"stdio.h"
#include"head.h"

Foo foo;

int main()
{

    char *str = malloc(sizeof(char) * 6);

    char *str1 = malloc(sizeof(char) * 6);

    char *str2 = malloc(sizeof(char) * 6);

    char *str3 = malloc(sizeof(char) * 6);

    strcpy(str, "lllll");

    strcpy(str1, "eeeee");
    strcpy(str2, "rrrrr");
    strcpy(str3, "ttttt");

    char * arr[] = { str1,str2,str3};

    size_t size = sizeof(arr)/sizeof(*arr);

    printf("sizeof array %i \n", size);

    appendStr(&str, 3, arr);

    printf("finished str: %s \n", str);

    Foo *foo = malloc(sizeof(Foo));
    foo->print = &print;
    foo->print();

    return 0;
}

Foo create__Foo()
{
    Foo __foo;

    foo.num = 10;

    return foo;
}

void appendStr(char **str,size_t size, char * app[])
{
    if(!app[0])
    {
        printf("app is empty \n");
    }

    printf("n in app: %i \n", size);

    for(int i = 0; i < size; i++)
    {
        printf("arr: %i \n", i);
        
        printf("%s \n", app[i]);
    }

}


void print()
{
    printf("testerionooooooooo\n");
}
