#include <stdio.h>
#include <stdlib.h>

// calloc(<donnes>, <taille en octets>)  : alloue et initialise tout a 0.
// realloc  : permet de re-allouer un espace memoire.

int main()
{
  int nombre_joueurs = 0;
  int *liste_joueurs = NULL; //sous entendu que les joueurs sont nommes par des nombres (int)
  
  printf("Combien de joeurs ? :\n");
  scanf("%d", &nombre_joueurs);

  liste_joueurs = malloc(sizeof(int));

  if(liste_joueurs == NULL)
    exit(1);

  for(int i = 0; i < nombre_joueurs; i++)
  {
    printf("Joueur %d -> numero %d\n",i + 1, i * 2 );
    liste_joueurs[i] = i * 3;
  }

  for(int i = 0; i < nombre_joueurs; i++)
  {
    printf("[%d] ", liste_joueurs[i]);
  }

   free(liste_joueurs);

  return 0;
};