#include"main.h" 
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
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
event.add("test","id1",&eventf1);
event.add("test","id2",&eventf2);
event.add("test","id3",&eventf3);
event.add("test1","id4",&eventf1);
event.add("test1","id5",&eventf1);
event.add("test2","id6",&eventf1);
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
return 0;}
bool eventf1(char* data)
{
printf("eventf1%s\n",data);
return true;}
bool eventf2()
{
printf("eventf2\n");
return false;}
bool eventf3()
{
printf("eventf3\n");
return true;}
bool printNames(void* data)
{
printf("foreach name: %s\n",(char*)data);
return true;}
