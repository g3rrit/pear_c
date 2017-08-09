#include"main.h" 
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
bool __TestU_update(TestU* this);
int main()
{
printf("listTest\n");
List* list = __new_List();
list->add(list,"list");
list->add(list,"is");
list->add(list,"working");
for(int32_t i = 0;i<3;i++){
printf("%i : %s \n",i,list->get(list,i));
}
list->remove(list,1);
for(int32_t i = 0;i<2;i++){
printf("%i : %s \n",i,list->get(list,i));
}
list->delete(list);
printf("maptest\n");
Map* map = __new_Map();
map->add(map,"gerrit","proessl");
map->add(map,"dominik","ermer");
map->add(map,"sophie","meckl");
printf("key: gerrit val: %s\n",map->get(map,"gerrit"));
printf("key: dominik val: %s\n",map->get(map,"dominik"));
printf("key: sophie val: %s\n",map->get(map,"sophie"));
map->remove(map,"sophie");
if(map->get(map,"sophie")){
printf("map key sophie not null error!\n");
printf("map: %s\n",map->get(map,"sophie"));
}else{
printf("map key sophie null working!\n");
}
map->forEach(map,&printNames);
map->delete(map);
event.add("test","id1",&eventf1,"clos1");
event.add("test","id2",&eventf2,"clos2");
event.add("test","id3",&eventf3,"clos3");
event.add("test1","id4",&eventf1,"clos4");
event.add("test1","id5",&eventf1,"clos5");
event.add("test2","id6",&eventf1,"clos6");
event.dispatch("test","datah");
event.dispatch("test1","datac");
event.dispatch("test2","datab");
event.removeID("test","id1");
printf("eventid1 rem\n");
event.dispatch("test","datah");
event.dispatch("test1","datac");
event.dispatch("test2","datab");
event.remove("test1");
printf("ev test1 rem \n");
event.dispatch("test","datah");
event.dispatch("test1","datac");
event.dispatch("test2","datab");
printf("foreach problem!!!!!\n");
Map* fmap = __new_Map();
printf("event problem!!!\n");
TestU* teste1 = __new_TestU();
teste1->fmap=fmap;
teste1->id="id1";
TestU* teste2 = __new_TestU();
teste2->fmap=fmap;
teste2->id="id2";
teste2->count=1;
TestU* teste3 = __new_TestU();
teste3->fmap=fmap;
teste3->id="id3";
event.add("tp","id1",teste1->update,teste1);
event.add("tp","id2",teste2->update,teste2);
event.add("tp","id3",teste3->update,teste3);
event.dispatch("tp",NULL);
event.dispatch("tp",NULL);
free(teste1);
free(teste3);
return 0;}
bool __TestU_update(TestU* this)
{
printf("updatinng: %s\n",this->id);
if(this->count!=0){
printf("wehere\n");
event.removeID("tp",this->id);
free(this);
}
printf("finish updating\n");
return true;}
TestU* __new_TestU()
{ 
TestU *this = malloc(sizeof(TestU));
this->fmap = NULL; 
this->count = 0; 
this->update = &__TestU_update; 
return this;
} 
TestU __crt_TestU()
{ 
TestU this;
this.fmap = NULL; 
this.count = 0; 
this.update = &__TestU_update; 
return this;
} 
bool testufor(TestU* testu)
{
testu->update(testu);
return true;}
bool eventf1(char* clos,char* data)
{
printf("clos : %s --",clos);
printf("eventf1%s\n",data);
return true;}
bool eventf2(char* clos,char* data)
{
printf("clos : %s --",clos);
printf("eventf2\n");
return true;}
bool eventf3(char* clos,char* data)
{
printf("clos : %s --",clos);
printf("eventf3\n");
return true;}
bool printNames(void* data)
{
printf("foreach name: %s\n",(char*)data);
return true;}
