#include"main.h" 
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
TestSingleton testSingleton;
char* __TestSingleton_getName(TestSingleton* this);
bool __TestSingleton_test(TestSingleton* this);
TestSingleton testSingleton={.name="tom",.getName=&__TestSingleton_getName,.test=&__TestSingleton_test};
bool __TestList_append(TestList** this,void* data);
int32_t __TestList_print(TestList** this);
bool __TestStruct_testS(TestStruct* this);
bool testLocal();
int main()
{
printf("starting test!\n");
checkTest("loop",testloop());
TestStruct tStruct = __crt_TestStruct();
TestStruct* tStructp = __new_TestStruct();
checkTest("struct",tStruct.testS(&tStruct)&&tStructp->testS(tStructp));
free(tStructp);
checkTest("condition",testCondition());
checkTest("args",testArgs(15,true,"test"));
checkTest("local",testLocal());
TestList* mlist = __new_TestList();
mlist->data="my";
mlist->append(&mlist,"test");
mlist->append(&mlist,"list");
mlist->append(&mlist,"working");
checkTest("list",mlist->print(&mlist)==4);
free(mlist);
checkTest("lib",testLib());
checkTest("pointer",testPointer());
checkTest("singleton",testSingleton.test(&testSingleton));
return 0;}
void checkTest(char* name,bool res)
{
if(res){
printf("test: %s succeeded! \n",name);
}else{
printf("test: %s failed! \n",name);
}}
char* __TestSingleton_getName(TestSingleton* this)
{
return this->name;}
bool __TestSingleton_test(TestSingleton* this)
{
if(strcmp(this->getName(this),"tom")==0)return true;
return false;}
TestSingleton* __new_TestSingleton()
{ 
TestSingleton *this = malloc(sizeof(TestSingleton));
this->name = "tom"; 
this->getName = &__TestSingleton_getName; 
this->test = &__TestSingleton_test; 
return this;
} 
TestSingleton __crt_TestSingleton()
{ 
TestSingleton this;
this.name = "tom"; 
this.getName = &__TestSingleton_getName; 
this.test = &__TestSingleton_test; 
return this;
} 
bool __TestList_append(TestList** this,void* data)
{
while(*this){
this=&((*this)->next);
}
*this=__new_TestList();
(*this)->data=data;
return true;}
int32_t __TestList_print(TestList** this)
{
int32_t count = 0;
while(*this){
printf("element: %i = %s\n",count,(char*)(*this)->data);
this=&((*this)->next);
count++;
}
return count;}
TestList* __new_TestList()
{ 
TestList *this = malloc(sizeof(TestList));
this->data = NULL; 
this->next = NULL; 
this->prev = NULL; 
this->append = &__TestList_append; 
this->print = &__TestList_print; 
return this;
} 
TestList __crt_TestList()
{ 
TestList this;
this.data = NULL; 
this.next = NULL; 
this.prev = NULL; 
this.append = &__TestList_append; 
this.print = &__TestList_print; 
return this;
} 
bool testPointer()
{
char* testp = "hello";
char** testp1 = &testp;
char** res = malloc(sizeof(char*));
*res=malloc(sizeof(char)*6);
strcpy(*res,"hello");
if(strcmp(*res,*testp1)==0){
free(*res);
free(res);
return true;
}else{
free(*res);
free(res);
return false;
}}
bool __TestStruct_testS(TestStruct* this)
{
return this->res;}
TestStruct* __new_TestStruct()
{ 
TestStruct *this = malloc(sizeof(TestStruct));
this->res = true; 
this->testS = &__TestStruct_testS; 
return this;
} 
TestStruct __crt_TestStruct()
{ 
TestStruct this;
this.res = true; 
this.testS = &__TestStruct_testS; 
return this;
} 
bool testLocal()
{
return true;}
bool testArgs(int32_t num,bool res,char* txt)
{
if(num!=15)res=false;
if(strcmp("test",txt)!=0)res=false;
return res;}
bool testCondition()
{
bool res = true;
if(true||false){
res=true;
}else if(true){
res=false;
}else{
res=false;
}
int32_t tnum = NULL;
while(!tnum){
tnum=10;
}
if(tnum!=10)res=false;
return res;}
bool testloop()
{
bool res = true;
int32_t count = 0;
for(int32_t i = 0;i<15;i++){
count++;
}
if(count!=15)res=false;
for(int32_t i = 15;i>0;i--){
count--;
}
if(count!=0)res=false;
while(count<(15-5)){
count++;
}
if(count!=10)res=false;
return res;}
