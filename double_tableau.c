#include <stdio.h>
#include <stdlib.h>

int main(*)
{
  char **jours[][] = {"lundi","mardi","mercredi","jeudi","vendredi"};

  for (int i = 0; i <5; i++)
    for(int j = 0; j < 8; j++)
      printf("%c", **jours);
  return 0;
}