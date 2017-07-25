#include"std.h" 
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
void* __List_append(List* this,void* data);
void* __List_get(List* this,int32_t i);
void* __List_remove(List* this,int32_t i);
void __List_delete(List* this);
void* __Map_append(Map* this,char* key,void* data);
void* __Map_get(Map* this,char* key);
void* __Map_remove(Map* this,char* key);
void __Map_delete(Map* this);
void* __List_append(List* this,void* data)
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
this->append = &__List_append; 
this->get = &__List_get; 
this->remove = &__List_remove; 
this->delete = &__List_delete; 
return this;
} 
List __crt_List()
{ 
List this;
this.start = NULL; 
this.append = &__List_append; 
this.get = &__List_get; 
this.remove = &__List_remove; 
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
void* __Map_append(Map* this,char* key,void* data)
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
this->append = &__Map_append; 
this->get = &__Map_get; 
this->remove = &__Map_remove; 
this->delete = &__Map_delete; 
return this;
} 
Map __crt_Map()
{ 
Map this;
this.start = NULL; 
this.append = &__Map_append; 
this.get = &__Map_get; 
this.remove = &__Map_remove; 
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
