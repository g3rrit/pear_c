#include"std.h" 
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
void* __List_add(List* this,void* data);
void* __List_get(List* this,int32_t i);
void* __List_remove(List* this,int32_t i);
bool __List_forEach(List* this,__forEach_fun fun);
void __List_delete(List* this);
void* __Map_add(Map* this,char* key,void* data);
void* __Map_get(Map* this,char* key);
void* __Map_remove(Map* this,char* key);
bool __Map_forEach(Map* this,__forEach_fun fun);
void __Map_delete(Map* this);
void __EventList_add(char* name,__add_fun fun);
bool __EventList_dispatch(char* name);
void __EventList_remove(char* name);
void __EventList_delete();
EventList event={.map=NULL,.add=&__EventList_add,.dispatch=&__EventList_dispatch,.remove=&__EventList_remove,.delete=&__EventList_delete};
void* __List_add(List* this,void* data)
{
ListNode** entry = &(this->start);
while(*entry){
entry=&((*entry)->next);
}
(*entry)=__new_ListNode();
(*entry)->data=data;
return data;}
void* __List_get(List* this,int32_t i)
{
ListNode** entry = &(this->start);
int32_t count = 0;
while((count<i)&&*entry){
entry=&((*entry)->next);
count++;
}
return (*entry)->data;}
void* __List_remove(List* this,int32_t i)
{
ListNode** entry = &(this->start);
int32_t count = 0;
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
return (*entry)->data;}
bool __List_forEach(List* this,__forEach_fun fun)
{
ListNode** entry = &(this->start);
while(*entry){
if(!fun((*entry)->data))return false;
entry=&((*entry)->next);
}
return true;}
void __List_delete(List* this)
{
ListNode** entry = &(this->start);
ListNode** fentry = entry;
while(*entry){
entry=&((*entry)->next);
free(*fentry);
fentry=entry;
}}
List* __new_List()
{ 
List *this = malloc(sizeof(List));
this->start = NULL; 
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
void* __Map_add(Map* this,char* key,void* data)
{
MapNode** entry = &(this->start);
while(*entry){
entry=&((*entry)->next);
}
(*entry)=__new_MapNode();
(*entry)->key=key;
(*entry)->data=data;
return data;}
void* __Map_get(Map* this,char* key)
{
MapNode** entry = &(this->start);
while(*entry){
if(strcmp((*entry)->key,key)==0)return (*entry)->data;
entry=&((*entry)->next);
}
return NULL;}
void* __Map_remove(Map* this,char* key)
{
MapNode** entry = &(this->start);
while(*entry){
if(strcmp((*entry)->key,key)==0)break;
entry=&((*entry)->next);
}
void* data = (*entry)->data;
if((*entry)->next){
MapNode* fentry = *entry;
*entry=(*entry)->next;
free(fentry);
}else{
free(*entry);
*entry=NULL;
}
return data;}
bool __Map_forEach(Map* this,__forEach_fun fun)
{
MapNode** entry = &(this->start);
while(*entry){
if(!fun((*entry)->data))return false;
entry=&((*entry)->next);
}
return true;}
void __Map_delete(Map* this)
{
MapNode** entry = &(this->start);
MapNode** fentry = entry;
while(*entry){
entry=&((*entry)->next);
free(*fentry);
fentry=entry;
}}
Map* __new_Map()
{ 
Map *this = malloc(sizeof(Map));
this->start = NULL; 
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
void __EventList_add(char* name,__add_fun fun)
{
if(!event.map)event.map=__new_Map();
List* tempList = event.map->get(event.map,name);
if(!tempList){
tempList=__new_List();
event.map->add(event.map,name,tempList);
}
tempList->add(tempList,fun);}
bool __EventList_dispatch(char* name)
{
List* tempList = event.map->get(event.map,name);
if(!tempList)return false;
return tempList->forEach(tempList,&__eventDispatchForEach);}
void __EventList_remove(char* name)
{
List* tempList = event.map->remove(event.map,name);
if(tempList){
tempList->delete(tempList);
free(tempList);
}}
void __EventList_delete()
{
event.map->forEach(event.map,&__eventDeleteForEach);
free(event.map);}
EventList* __new_EventList()
{ 
EventList *this = malloc(sizeof(EventList));
this->map = NULL; 
this->add = &__EventList_add; 
this->dispatch = &__EventList_dispatch; 
this->remove = &__EventList_remove; 
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
this.delete = &__EventList_delete; 
return this;
} 
bool __eventDispatchForEach(____eventDispatchForEach_data data)
{
return data();}
bool __eventDeleteForEach(void* data)
{
List* tempList = data;
if(tempList){
tempList->delete(tempList);
free(tempList);
}
return true;}
