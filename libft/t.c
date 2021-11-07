#include <stdio.h>
#include <stdlib.h>

typedef struct houss {
    int age;
    char *name;
} houss;
int main()
{
   houss *ptr = NULL;
   houss player = {0, ""};
   ptr = &player;
   ptr->age = 10;
   ptr->name = "Houssam"; 

   printf("Age : %d, Nom : %s", player.age, player.name);
}