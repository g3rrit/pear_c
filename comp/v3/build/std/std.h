#ifndef std_H
#define std_H
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
#include"stdio.h"
#include"stdbool.h"
#include"stdint.h"
#include"stdlib.h"
#include"string.h"
typedef struct List List;
typedef struct ListNode ListNode;
typedef struct Map Map;
typedef struct MapNode MapNode;
struct List {
ListNode* start; 
void* (*append)(List* this,void* data); 
void* (*get)(List* this,int32_t i); 
void* (*remove)(List* this,int32_t i); 
void (*delete)(List* this); 
};
List* __new_List();
List __crt_List();
struct ListNode {
void* data; 
ListNode* next; 
};
ListNode* __new_ListNode();
ListNode __crt_ListNode();
struct Map {
MapNode* start; 
void* (*append)(Map* this,char* key,void* data); 
void* (*get)(Map* this,char* key); 
void* (*remove)(Map* this,char* key); 
void (*delete)(Map* this); 
};
Map* __new_Map();
Map __crt_Map();
struct MapNode {
void* data; 
char* key; 
MapNode* next; 
};
MapNode* __new_MapNode();
MapNode __crt_MapNode();
#endif