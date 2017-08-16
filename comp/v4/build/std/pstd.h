#ifndef pstd_H
#define pstd_H
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
typedef struct EventList EventList;
EventList event;
typedef struct EventData EventData;
struct List {
ListNode* start; 
int32_t size; 
void* (*add)(List *this,void* data); 
void* (*get)(List *this,int32_t i); 
void* (*remove)(List *this,int32_t i); 
bool (*forEach)(List *this,bool (*fun)(void* data)); 
void (*delete)(List *this); 
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
int32_t size; 
void* (*add)(Map *this,char* key,void* data); 
void* (*get)(Map *this,char* key); 
void* (*remove)(Map *this,char* key); 
bool (*forEach)(Map *this,bool (*fun)(void* data)); 
void (*delete)(Map *this); 
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
struct EventList {
Map* map; 
void (*add)(EventList *this,char* name,char* id,bool (*fun)(void* clos,void* data),void* clos); 
bool (*dispatch)(EventList *this,char* name,void* data); 
void (*remove)(EventList *this,char* name); 
void (*removeID)(EventList *this,char* name,char* id); 
void (*delete)(EventList *this); 
};
EventList* __new_EventList();
EventList __crt_EventList();
struct EventData {
bool (*fun)(void* clos,void* data); 
void* clos; 
};
EventData* __new_EventData();
EventData __crt_EventData();
bool __eventDispatchForEach(EventData* eventData,void* data);
bool __eventDeleteMapForEach(EventData* eventData);
bool __eventDeleteForEach(void* data);
#endif