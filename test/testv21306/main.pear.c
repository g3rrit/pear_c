#include"main.pear.h" 
#include"stdint.h"
#include"stdio.h"
int main()
{

printf("test");
bar();
int32_t num = 10; 

return 0;}
void bar()
{

Foo* foo = __new_Foo(); 

foo->print();
free(foo);
Foo foo2 = __crt_Foo(); 

foo2.print();}
void print()
{

printf("lol");}
Foo* __new_Foo()
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
