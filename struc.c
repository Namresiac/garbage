#include <stdio.h>
#include <stdlib.h>

struct Player
{
  signed char username[256];    // ici on appelle ca des champs
  int hp;
  int mana;
};

int main()
{
    struct Player p1 = {"Nico", 100, 100};

    printf("Nom du joueur: %s\n", p1.username);
    printf("PV = %d | MANA = %d \n", p1.hp, p1.mana);
    return 0;
}