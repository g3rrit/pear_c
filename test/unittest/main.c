#include"main.h" 
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
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
return 0;}
void checkTest(char* name,bool res)
{
if(res){
printf("test: %s succeeded! \n",name);
}else{
printf("test: %s failed! \n",name);
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
