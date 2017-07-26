
typedef int (*__func)();
typedef int (*__func)();

int foo();
void testFoo(__func func);

int main()
{
    testFoo(&foo);
    return 0;
}

int foo()
{
    printf("in foo\n");
    return 0;
}

void testFoo(__func func)
{
    func();
} 
