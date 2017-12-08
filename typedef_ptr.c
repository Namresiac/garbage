#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  Player
{
  signed char username[256];
  int hp;
  int mana;
}  player_t;

/*---------------------------------------------------------------*/

void  create_player(player_t *p)
{
  strcpy(p->username, "jean");  // = strcpy((*p),username, "jean"); mais = bordel  (POU LES POINTEURS UNIQUEMENT !!!)
  p->hp = 100;    // = (*p).hp = 100, mais c'est plus le bordel...
  p->mana = 50;
}

/*---------------------------------------------------------------*/

int main()
{
  player_t p1 = {"", 0, 0};

  create_player(&p1);

  printf("Nom du joueur : %s\n", p1.username);
  printf("HP = %d | MANA = %d", p1.hp, p1.mana);
  
  return 0;
}