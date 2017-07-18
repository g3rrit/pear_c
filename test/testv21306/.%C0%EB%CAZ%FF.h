#ifndef ÀëÊZÿ_H
#define ÀëÊZÿ_H
void main(); 
void bar(); 
void print(); 
typedef struct Foo { 
i32num; 
i32num2; 
i64num3; 
void (*print)(); 
} Foo; 
Foo* __new_Foo(); 
Foo __crt_Foo(); 

#endif