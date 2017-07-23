#ifndef main_H
#define main_H
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
#include"testl.h"
typedef struct TestStruct TestStruct;
int main();
void checkTest(char* name,bool res);
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