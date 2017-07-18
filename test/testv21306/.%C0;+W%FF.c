#include"À;+Wÿ.h" 
void main()
{printf("test");bar();i32num = 10; 
returnNULL;}void bar()
{Foo*foo = __new_Foo(); 
foo->print();free(foo);Foofoo2 = __crt_Foo(); 
foo2.print();}void print()
{printf("lol");}Foo* __new_Foo()
{ 
Foo *this = malloc(sizeof(Foo));
this->num = 10; 
this->num2 = 50; 
this->num3 = 40; 
this->print = &print; 
return this;
} 
Foo __crt_Foo()
{ 
Foo this;
this.num = 10; 
this.num2 = 50; 
this.num3 = 40; 
this.print = &print; 
return this;
} 
