#include <stdio.h>
#include <stdlib.h>

int pos(FILE * fic, char l, int *ligne, int *colonne)
{
  *colonne = 0;
  *ligne = 0;
  int val; //stocker lecture des valeurs

  do
  {
    if(val == '\n')
    {
      *ligne++;
      *colonne = 0; //du coup le compteur colonne retourne a 0
    }
    else if (val !=1)
    {
      *colonne++; // ou sinon on parcourt les caracteres de la ligne
    }
  }
  while(val!=1 && val != EOF);
  return val!= EOF; // verif' qu'on qi bien lu le caractere
}

int main()
{
  FILE *fic = fopen("map.txt","r");
  int ligne, colonne;
  if(pos(fic, '.', &ligne, &colonne))
  {
    printf("position du caractere: [%d,%d]\n", colonne, ligne);
  }
  else
    printf("pas trouve\n");
}

