#ifndef main_H
#define main_H
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
typedef struct TestArrayStr TestArrayStr;
typedef struct TestArraySt TestArraySt;
TestArraySt testArraySt;
typedef struct EmptyS EmptyS;
typedef struct TestFP TestFP;
typedef struct TestThis TestThis;
TestThis testThis;
typedef struct TestArrayS TestArrayS;
typedef struct TestIDType TestIDType;
typedef struct TestExS TestExS;
typedef struct TestStructTag TestStructTag;
typedef struct TestSingleton TestSingleton;
TestSingleton testSingleton;
typedef struct TestList TestList;
typedef struct TestStruct TestStruct;
int main();
struct TestArrayStr {
char* arr[2][2]; 
char* arr2[2]; 
};
TestArrayStr* __new_TestArrayStr();
TestArrayStr __crt_TestArrayStr();
char* getCharta(char* i,char* l);
struct TestArraySt {
bool arr[2]; 
bool arr2[2][2][2]; 
bool (*test)(TestArraySt *this); 
};
TestArraySt* __new_TestArraySt();
TestArraySt __crt_TestArraySt();
struct EmptyS {
};
EmptyS* __new_EmptyS();
EmptyS __crt_EmptyS();
void emptyfun();
void emptyblock();
bool testArrayInit();
int getatest(int x);
bool testFunctionPointer();
struct TestFP {
bool (*test)(TestFP *this,bool (*fun)()); 
bool (*fun)(); 
};
TestFP* __new_TestFP();
TestFP __crt_TestFP();
bool testfpt();
struct TestThis {
bool (*test)(TestThis *this); 
};
TestThis* __new_TestThis();
TestThis __crt_TestThis();
bool testArray();
struct TestArrayS {
int num; 
};
TestArrayS* __new_TestArrayS();
TestArrayS __crt_TestArrayS();
struct TestIDType {
bool res; 
};
TestIDType* __new_TestIDType();
TestIDType __crt_TestIDType();
bool testExpressions();
struct TestExS {
TestExS* start; 
int32_t num; 
bool (*test)(TestExS *this); 
};
TestExS* __new_TestExS();
TestExS __crt_TestExS();
struct TestStructTag {
bool res; 
};
TestStructTag* __new_TestStructTag();
TestStructTag __crt_TestStructTag();
void checkTest(char* name,bool res);
bool testFuncPointer(bool (*testFuncP)(bool (*res)(bool res2)),bool res);
bool testFuncPointerFunc(bool (*res)(bool res2));
bool testFuncPointerRes(bool res2);
struct TestSingleton {
char* name; 
char* (*getName)(TestSingleton *this); 
bool (*test)(TestSingleton *this); 
};
TestSingleton* __new_TestSingleton();
TestSingleton __crt_TestSingleton();
struct TestList {
void* data; 
TestList* next; 
TestList** prev; 
bool (*append)(TestList *this,TestList** his,void* data); 
int32_t (*print)(TestList *this,TestList** his); 
};
TestList* __new_TestList();
TestList __crt_TestList();
bool testPointer();
struct TestStruct {
bool res; 
bool (*testS)(TestStruct *this); 
};
TestStruct* __new_TestStruct();
TestStruct __crt_TestStruct();
bool testArgs(int32_t num,bool res,char* txt);
bool testCondition();
bool testloop();
#endif