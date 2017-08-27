#include"main.h" 
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
#include"testl.h"
bool __TestArraySt_test(TestArraySt *this);
TestArraySt testArraySt={.arr={
false,true},.arr2={
true,false,false,false,false,false,false,false},.test=&__TestArraySt_test};
bool __TestFP_test(TestFP *this,bool (*fun)());
bool __TestThis_test(TestThis *this);
TestThis testThis={.test=&__TestThis_test};
bool __TestExS_test(TestExS *this);
char* __TestSingleton_getName(TestSingleton *this);
bool __TestSingleton_test(TestSingleton *this);
TestSingleton testSingleton={.name="tom",.getName=&__TestSingleton_getName,.test=&__TestSingleton_test};
bool __TestList_append(TestList *this,TestList** his,void* data);
int32_t __TestList_print(TestList *this,TestList** his);
bool __TestStruct_testS(TestStruct *this);
bool testLocal();
int main()
{
printf("start");
printf("starting test!\n");
checkTest("test this",testThis.test(&testThis));
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
mlist->append(mlist,&mlist,"test");
mlist->append(mlist,&mlist,"list");
mlist->append(mlist,&mlist,"working");
checkTest("list",mlist->print(mlist,&mlist)==4);
free(mlist);
checkTest("lib",testLib());
checkTest("pointer",testPointer());
checkTest("singleton",testSingleton.test(&testSingleton));
checkTest("functionPointer",testFuncPointer(&testFuncPointerFunc,(30!=3)));
struct TestStructTag testStructTag = __crt_TestStructTag();
checkTest("struct tag",testStructTag.res);
checkTest("double arr",testExpressions());
TestIDType testidtype;
testidtype=__crt_TestIDType();
checkTest("id as type",testidtype.res);
checkTest("array access",testArray());
checkTest("function pointer",testFunctionPointer());
checkTest("array init",testArrayInit());
checkTest("array in struct",testArraySt.test(&testArraySt));
return 0;
}TestArrayStr* __new_TestArrayStr()
{ 
TestArrayStr *this = malloc(sizeof(TestArrayStr));
*((char**)this->arr+0) =  
"one";
*((char**)this->arr+1) = "two";
*((char**)this->arr+2) = getCharta(getCharta("me","se"),getCharta("lol",getCharta("he","me")));
*((char**)this->arr+3) = getCharta("well","no") ;
*((char**)this->arr2+0) =  
"lel";
*((char**)this->arr2+1) = "test" ;
return this;
} 
TestArrayStr __crt_TestArrayStr()
{ 
TestArrayStr this;
*((char**)this.arr+0) =  
"one";
*((char**)this.arr+1) = "two";
*((char**)this.arr+2) = getCharta(getCharta("me","se"),getCharta("lol",getCharta("he","me")));
*((char**)this.arr+3) = getCharta("well","no") ;
*((char**)this.arr2+0) =  
"lel";
*((char**)this.arr2+1) = "test" ;
return this;
} 
char* getCharta(char* i,char* l)
{
char*temp="hello";
return temp;
}bool __TestArraySt_test(TestArraySt *this)
{
TestArrayStr* temparr = __new_TestArrayStr();
if(strcmp(*((char**)temparr->arr+2),"hello")!=0)return false;
if(strcmp(temparr->arr[0][0],"one")!=0)return false;
if(this->arr[1]&&this->arr2[0][0][0])return true;
return false;
}TestArraySt* __new_TestArraySt()
{ 
TestArraySt *this = malloc(sizeof(TestArraySt));
*((bool*)this->arr+0) =  
false;
*((bool*)this->arr+1) = true ;
*((bool*)this->arr2+0) =  
true;
*((bool*)this->arr2+1) = false;
*((bool*)this->arr2+2) = false;
*((bool*)this->arr2+3) = false;
*((bool*)this->arr2+4) = false;
*((bool*)this->arr2+5) = false;
*((bool*)this->arr2+6) = false;
*((bool*)this->arr2+7) = false ;
this->test = &__TestArraySt_test; 
return this;
} 
TestArraySt __crt_TestArraySt()
{ 
TestArraySt this;
*((bool*)this.arr+0) =  
false;
*((bool*)this.arr+1) = true ;
*((bool*)this.arr2+0) =  
true;
*((bool*)this.arr2+1) = false;
*((bool*)this.arr2+2) = false;
*((bool*)this.arr2+3) = false;
*((bool*)this.arr2+4) = false;
*((bool*)this.arr2+5) = false;
*((bool*)this.arr2+6) = false;
*((bool*)this.arr2+7) = false ;
this.test = &__TestArraySt_test; 
return this;
} 
EmptyS* __new_EmptyS()
{ 
EmptyS *this = malloc(sizeof(EmptyS));
return this;
} 
EmptyS __crt_EmptyS()
{ 
EmptyS this;
return this;
} 
void emptyfun()
{
}void emptyblock()
{
if(true){
}else if(true){
}else{
}
for(int i = 0;i<2;i++){
}
while(false){
}
}bool testArrayInit()
{
char* tempArr[] = {
"test","working"};
char* arr[] = {
"working"};
void* tempArr2[3] = {
};
int tempExA[] = {
3,7,8,getatest(3)*2};
int tempAA[][2] = {
{
2,2},{
3,3},{
getatest(2),4}};
int tempAB[2][2][2] = {
{
{
2,2},{
3,3}},{
{
4,4},{
5,5}}};
int tempAC[2][2][2][2][2][2];
if(strcmp(arr[0],tempArr[1])==0){
if(tempExA[3]==18){
if(tempAA[2][0]==4)return true;
}
}
return false;
}int getatest(int x)
{
return x*x;
}bool testFunctionPointer()
{
TestFP temp = __crt_TestFP();
temp.fun=&testfpt;
return temp.test(&temp,temp.fun);
}bool __TestFP_test(TestFP *this,bool (*fun)())
{
bool (*tfun)() = this->fun;
return tfun()&&fun();
}TestFP* __new_TestFP()
{ 
TestFP *this = malloc(sizeof(TestFP));
this->test = &__TestFP_test; 
return this;
} 
TestFP __crt_TestFP()
{ 
TestFP this;
this.test = &__TestFP_test; 
return this;
} 
bool testfpt()
{
return true;
}bool __TestThis_test(TestThis *this)
{
return true;
}TestThis* __new_TestThis()
{ 
TestThis *this = malloc(sizeof(TestThis));
this->test = &__TestThis_test; 
return this;
} 
TestThis __crt_TestThis()
{ 
TestThis this;
this.test = &__TestThis_test; 
return this;
} 
bool testArray()
{
int* tempS = malloc(sizeof(int)*10);
TestArrayS testnum = __crt_TestArrayS();
tempS[testnum.num]=5;
char ttestArr[10];
char tttestArr[] = "fssf";
bool res = true;
for(int i = 0;i<10;i++){
tempS[i]=i;
}
for(int i = 0;i<10;i++){
if(tempS[i]!=i)res=false;
}
return res;
}TestArrayS* __new_TestArrayS()
{ 
TestArrayS *this = malloc(sizeof(TestArrayS));
this->num = 6; 
return this;
} 
TestArrayS __crt_TestArrayS()
{ 
TestArrayS this;
this.num = 6; 
return this;
} 
TestIDType* __new_TestIDType()
{ 
TestIDType *this = malloc(sizeof(TestIDType));
this->res = true; 
return this;
} 
TestIDType __crt_TestIDType()
{ 
TestIDType this;
this.res = true; 
return this;
} 
bool testExpressions()
{
TestExS* testExS = __new_TestExS();
testExS->start=__new_TestExS();
int32_t num = 0;
num+=10;
testExS->start->num+=10;
if(testExS->start->start){
return false;
}
bool res = testExS->start->test(testExS->start);
free(testExS->start);
free(testExS);
return res;
}bool __TestExS_test(TestExS *this)
{
return true;
}TestExS* __new_TestExS()
{ 
TestExS *this = malloc(sizeof(TestExS));
this->start = NULL; 
this->num = 0; 
this->test = &__TestExS_test; 
return this;
} 
TestExS __crt_TestExS()
{ 
TestExS this;
this.start = NULL; 
this.num = 0; 
this.test = &__TestExS_test; 
return this;
} 
TestStructTag* __new_TestStructTag()
{ 
TestStructTag *this = malloc(sizeof(TestStructTag));
this->res = true; 
return this;
} 
TestStructTag __crt_TestStructTag()
{ 
TestStructTag this;
this.res = true; 
return this;
} 
void checkTest(char* name,bool res)
{
if(res){
printf("test: %s succeeded! \n",name);
}else{
printf("test: %s failed! \n",name);
}
}bool testFuncPointer(bool (*testFuncP)(bool (*res)(bool res2)),bool res)
{
return (testFuncP(&testFuncPointerRes)&&res);
}bool testFuncPointerFunc(bool (*res)(bool res2))
{
return (res(10==10)&&true);
}bool testFuncPointerRes(bool res2)
{
return res2;
}char* __TestSingleton_getName(TestSingleton *this)
{
return this->name;
}bool __TestSingleton_test(TestSingleton *this)
{
if(strcmp(this->getName(this),"tom")==0)return true;
return false;
}TestSingleton* __new_TestSingleton()
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
bool __TestList_append(TestList *this,TestList** his,void* data)
{
while(*his){
his=&((*his)->next);
}
*his=__new_TestList();
(*his)->data=data;
return true;
}int32_t __TestList_print(TestList *this,TestList** his)
{
int32_t count = 0;
while(*his){
printf("element: %i = %s\n",count,(char*)(*his)->data);
his=&((*his)->next);
count++;
}
return count;
}TestList* __new_TestList()
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
}
}bool __TestStruct_testS(TestStruct *this)
{
return this->res;
}TestStruct* __new_TestStruct()
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
return true;
}bool testArgs(int32_t num,bool res,char* txt)
{
if(num!=15)res=false;
if(strcmp("test",txt)!=0)res=false;
return res;
}bool testCondition()
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
return res;
}bool testloop()
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
return res;
}