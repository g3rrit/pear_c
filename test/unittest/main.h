#ifndef main_H
#define main_H
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
#include"testl.h"
typedef struct TestSingleton TestSingleton;
typedef struct TestList TestList;
typedef struct TestStruct TestStruct;
int main();
void checkTest(char* name,bool res);
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