#ifndef main_H
#define main_H
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
typedef struct TestStructTag TestStructTag;
typedef struct TestSingleton TestSingleton;
TestSingleton testSingleton;
typedef struct TestList TestList;
typedef struct TestStruct TestStruct;
int main();
struct TestStructTag {
bool res; 
};
TestStructTag* __new_TestStructTag();
TestStructTag __crt_TestStructTag();
void checkTest(char* name,bool res);
typedef bool (*__testFuncPointer_res)(bool res2);
typedef bool (*__testFuncPointer_testFuncP)(__testFuncPointer_res res);
bool testFuncPointer(__testFuncPointer_testFuncP testFuncP,bool res);
typedef bool (*__testFuncPointerFunc_res)(bool res2);
bool testFuncPointerFunc(__testFuncPointerFunc_res res);
bool testFuncPointerRes(bool res2);
struct TestSingleton {
char* name; 
char* (*getName)(TestSingleton* this); 
bool (*test)(TestSingleton* this); 
};
TestSingleton* __new_TestSingleton();
TestSingleton __crt_TestSingleton();
struct TestList {
void* data; 
TestList* next; 
TestList** prev; 
bool (*append)(TestList** this,void* data); 
int32_t (*print)(TestList** this); 
};
TestList* __new_TestList();
TestList __crt_TestList();
bool testPointer();
struct TestStruct {
bool res; 
bool (*testS)(TestStruct* this); 
};
TestStruct* __new_TestStruct();
TestStruct __crt_TestStruct();
bool testArgs(int32_t num,bool res,char* txt);
bool testCondition();
bool testloop();
#endif