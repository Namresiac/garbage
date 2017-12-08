#include <stdio.h>
#include <stdlib.h>

typedef struct  Player
{
  signed char username[256];
  int hp;
  int mana;
}  player_t;


int main()
{
  player_t p1 = {"Nico", 100, 100};
  printf("Nom du joueur : %s\n", p1.username);
  printf("HP = %d | MANA = %d", p1.hp, p1.mana);

  return 0;
}