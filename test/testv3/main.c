#include"main.h" 
#include"stdint.h"
#include"stdio.h"
typedef struct Foo { 
char* (*test)(); 
} Foo; 
Foo* __new_Foo(); 
Foo __crt_Foo(); 
void bar(); 

int main()
{

printf("working \n");
Foo foo = __crt_Foo(); 

printf("foo: %s \n",foo.test());
int32_t count = 0; 

while(count<10){
printf("count: %i\n",count);
if(count>=5){
printf("count bigger 5 \n");
}
count++;
}
return 0;}
char* test()
{

char* res = malloc(sizeof(char)*10); 

strcpy(res,"loltesg");
for(int i = 0; 
i<3;i++){
strcat(res,"l");
}
return res;}
Foo* __new_Foo()
{ 
Foo *this = malloc(sizeof(Foo));
this->test = &test; 
return this;
} 
Foo __crt_Foo()
{ 
Foo this;
this.test = &test; 
return this;
} 
void bar()
{

printf("this working? \n");}
