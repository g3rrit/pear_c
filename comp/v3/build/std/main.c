#include"main.h" 
#include"stdlib.h"
#include"stdint.h"
#include"stdbool.h"
int main()
{
printf("listTest\n");
List* list = __new_List();
list->append(list,"list");
list->append(list,"is");
list->append(list,"working");
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
map->append(map,"gerrit","proessl");
map->append(map,"dominik","ermer");
map->append(map,"sophie","meckl");
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
map->delete(map);
return 0;}
