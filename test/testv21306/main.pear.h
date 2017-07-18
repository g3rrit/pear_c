#ifndef main_H
#define main_H
#include"stdint.h"
#include"stdio.h"
int main(); 
void bar(); 
void print(); 
typedef struct Foo { 
int32_t num; 
int32_t num2; 
long long num3; 
void (*print)(); 
} Foo; 
Foo* __new_Foo(); 
Foo __crt_Foo(); 

#endif