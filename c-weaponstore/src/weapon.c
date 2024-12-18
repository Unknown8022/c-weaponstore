#include "weaponstore.h"

void print(PWEAPON pw)
{
	printf("name=%s\n", pw->name);
	printf("id=%d\n", pw->capacity);
	printf("average=%f\n", pw->average);
}
void print_array(PWEAPON pw[], int size) {
    for (int i = 0; i < size; ++i) {
        print(pw[i]);
        printf("--------\n");
    }
}