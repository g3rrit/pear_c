#ifndef main_H
#define main_H
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
#include"pstd.h"
typedef struct TestU TestU;
int main();
struct TestU {
Map* fmap; 
int count; 
char* id; 
bool (*update)(TestU *this,char* tst); 
};
TestU* __new_TestU();
TestU __crt_TestU();
bool testufor(TestU* testu);
bool eventf1(char* clos,char* data);
bool eventf2(char* clos,char* data);
bool eventf3(char* clos,char* data);
bool printNames(void* data);
#endif