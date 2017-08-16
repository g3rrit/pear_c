#include"pstd.h" 
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
void* __List_add(List *this,void* data);
void* __List_get(List *this,int32_t i);
void* __List_remove(List *this,int32_t i);
bool __List_forEach(List *this,bool (*fun)(void* data));
void __List_delete(List *this);
void* __Map_add(Map *this,char* key,void* data);
void* __Map_get(Map *this,char* key);
void* __Map_remove(Map *this,char* key);
bool __Map_forEach(Map *this,bool (*fun)(void* data));
void __Map_delete(Map *this);
void __EventList_add(EventList *this,char* name,char* id,bool (*fun)(void* clos,void* data),void* clos);
bool __EventList_dispatch(EventList *this,char* name,void* data);
void __EventList_remove(EventList *this,char* name);
void __EventList_removeID(EventList *this,char* name,char* id);
void __EventList_delete(EventList *this);
EventList event={.map=NULL,.add=&__EventList_add,.dispatch=&__EventList_dispatch,.remove=&__EventList_remove,.removeID=&__EventList_removeID,.delete=&__EventList_delete};
void* __List_add(List *this,void* data)
{
ListNode** entry = &(this->start);
while(*entry){
entry=&((*entry)->next);
}
(*entry)=__new_ListNode();
(*entry)->data=data;
(*entry)->next=NULL;
this->size++;
return data;
}void* __List_get(List *this,int32_t i)
{
ListNode** entry = &(this->start);
int32_t count = 0;
if(count>=this->size)return NULL;
while((count<i)&&*entry){
entry=&((*entry)->next);
count++;
}
return (*entry)->data;
}void* __List_remove(List *this,int32_t i)
{
ListNode** entry = &(this->start);
int32_t count = 0;
if(count>=this->size)return NULL;
while((count<i)&&*entry){
entry=&((*entry)->next);
count++;
}
if((*entry)->next){
ListNode* fentry = *entry;
*entry=(*entry)->next;
free(fentry);
}else{
free(*entry);
*entry=NULL;
}
this->size--;
return (*entry)->data;
}bool __List_forEach(List *this,bool (*fun)(void* data))
{
ListNode* entry = (this->start);
while(entry){
ListNode* tempEntry = entry;
entry=((entry)->next);
if(!fun((tempEntry)->data))return false;
}
return true;
}void __List_delete(List *this)
{
ListNode** entry = &(this->start);
ListNode** fentry = entry;
while(*entry){
entry=&((*entry)->next);
free(*fentry);
fentry=entry;
}
}List* __new_List()
{ 
List *this = malloc(sizeof(List));
this->start = NULL; 
this->size = 0; 
this->add = &__List_add; 
this->get = &__List_get; 
this->remove = &__List_remove; 
this->forEach = &__List_forEach; 
this->delete = &__List_delete; 
return this;
} 
List __crt_List()
{ 
List this;
this.start = NULL; 
this.size = 0; 
this.add = &__List_add; 
this.get = &__List_get; 
this.remove = &__List_remove; 
this.forEach = &__List_forEach; 
this.delete = &__List_delete; 
return this;
} 
ListNode* __new_ListNode()
{ 
ListNode *this = malloc(sizeof(ListNode));
this->data = NULL; 
this->next = NULL; 
return this;
} 
ListNode __crt_ListNode()
{ 
ListNode this;
this.data = NULL; 
this.next = NULL; 
return this;
} 
void* __Map_add(Map *this,char* key,void* data)
{
MapNode** entry = &(this->start);
while(*entry){
entry=&((*entry)->next);
}
(*entry)=__new_MapNode();
(*entry)->key=key;
(*entry)->data=data;
(*entry)->next=NULL;
this->size++;
return data;
}void* __Map_get(Map *this,char* key)
{
MapNode** entry = &(this->start);
while(*entry){
if(strcmp((*entry)->key,key)==0)return (*entry)->data;
entry=&((*entry)->next);
}
return NULL;
}void* __Map_remove(Map *this,char* key)
{
MapNode** entry = &(this->start);
bool found = false;
while(*entry){
if(strcmp((*entry)->key,key)==0){
found=true;
break;
}
entry=&((*entry)->next);
}
if(!found)return NULL;
void* data = (*entry)->data;
if((*entry)->next){
MapNode* fentry = *entry;
*entry=(*entry)->next;
free(fentry);
}else{
free(*entry);
*entry=NULL;
}
this->size--;
return data;
}bool __Map_forEach(Map *this,bool (*fun)(void* data))
{
MapNode* entry = (this->start);
while(entry){
MapNode* tempEntry = entry;
entry=((entry)->next);
if(!fun((tempEntry)->data))return false;
}
return true;
}void __Map_delete(Map *this)
{
MapNode** entry = &(this->start);
MapNode** fentry = entry;
while(*entry){
entry=&((*entry)->next);
free(*fentry);
fentry=entry;
}
}Map* __new_Map()
{ 
Map *this = malloc(sizeof(Map));
this->start = NULL; 
this->size = 0; 
this->add = &__Map_add; 
this->get = &__Map_get; 
this->remove = &__Map_remove; 
this->forEach = &__Map_forEach; 
this->delete = &__Map_delete; 
return this;
} 
Map __crt_Map()
{ 
Map this;
this.start = NULL; 
this.size = 0; 
this.add = &__Map_add; 
this.get = &__Map_get; 
this.remove = &__Map_remove; 
this.forEach = &__Map_forEach; 
this.delete = &__Map_delete; 
return this;
} 
MapNode* __new_MapNode()
{ 
MapNode *this = malloc(sizeof(MapNode));
this->data = NULL; 
this->key = NULL; 
this->next = NULL; 
return this;
} 
MapNode __crt_MapNode()
{ 
MapNode this;
this.data = NULL; 
this.key = NULL; 
this.next = NULL; 
return this;
} 
void __EventList_add(EventList *this,char* name,char* id,bool (*fun)(void* clos,void* data),void* clos)
{
if(!event.map)event.map=__new_Map();
Map* tempMap = event.map->get(event.map,name);
if(!tempMap){
tempMap=__new_Map();
event.map->add(event.map,name,tempMap);
}
EventData* eventData = __new_EventData();
eventData->fun=fun;
eventData->clos=clos;
tempMap->add(tempMap,id,eventData);
}bool __EventList_dispatch(EventList *this,char* name,void* data)
{
if(!event.map)return true;
Map* tempMap = event.map->get(event.map,name);
if(!tempMap)return false;
MapNode* entry = (tempMap->start);
while(entry){
MapNode* tentry = entry;
entry=((entry)->next);
if(!__eventDispatchForEach((tentry)->data,data))return false;
}
return true;
}void __EventList_remove(EventList *this,char* name)
{
if(!event.map)return;
Map* tempMap = event.map->remove(event.map,name);
if(tempMap){
tempMap->forEach(tempMap,&__eventDeleteMapForEach);
tempMap->delete(tempMap);
free(tempMap);
}
}void __EventList_removeID(EventList *this,char* name,char* id)
{
if(!event.map)return;
Map* tempMap = event.map->get(event.map,name);
if(tempMap){
free(tempMap->remove(tempMap,id));
if(tempMap->size<=0){
tempMap->delete(tempMap);
free(tempMap);
}
}
}void __EventList_delete(EventList *this)
{
if(!event.map)return;
event.map->forEach(event.map,&__eventDeleteForEach);
free(event.map);
}EventList* __new_EventList()
{ 
EventList *this = malloc(sizeof(EventList));
this->map = NULL; 
this->add = &__EventList_add; 
this->dispatch = &__EventList_dispatch; 
this->remove = &__EventList_remove; 
this->removeID = &__EventList_removeID; 
this->delete = &__EventList_delete; 
return this;
} 
EventList __crt_EventList()
{ 
EventList this;
this.map = NULL; 
this.add = &__EventList_add; 
this.dispatch = &__EventList_dispatch; 
this.remove = &__EventList_remove; 
this.removeID = &__EventList_removeID; 
this.delete = &__EventList_delete; 
return this;
} 
EventData* __new_EventData()
{ 
EventData *this = malloc(sizeof(EventData));
return this;
} 
EventData __crt_EventData()
{ 
EventData this;
return this;
} 
bool __eventDispatchForEach(EventData* eventData,void* data)
{
bool (*fun)(void* clos,void* data) = eventData->fun;
return fun(eventData->clos,data);
}bool __eventDeleteMapForEach(EventData* eventData)
{
free(eventData);
return true;
}bool __eventDeleteForEach(void* data)
{
Map* tempMap = data;
if(tempMap){
tempMap->forEach(tempMap,&__eventDeleteMapForEach);
tempMap->delete(tempMap);
free(tempMap);
}
return true;
}