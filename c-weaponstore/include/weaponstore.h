#pragma once

#include <stdio.h>
struct Weapon
{
	char name[128];
	int capacity;
	double average;
	char type[128];
};
typedef struct Weapon WEAPON;
typedef struct Weapon* PWEAPON;
void print(PWEAPON pw);

void print_array(PWEAPON pw[], int size);