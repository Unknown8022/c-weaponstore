#include "weaponstore.h"

int main()
{
	int sz = sizeof(struct Weapon);
	printf("%d\n", sz);
    PWEAPON pw[] = 
    {
     &(WEAPON) { "MG42", 100, 12.5, "full auto" },
     &(WEAPON) {"SVD", 10, 8.3, "semi-auto"},
     &(WEAPON) {"M4", 30, 9.7, "combine"},
     &(WEAPON) {"AK47", 30, 8.9, "combine"},
     &(WEAPON) {"AMP", 10, 6.5, "bolt action"}
    };
	print_array(pw, 5);
    return
}