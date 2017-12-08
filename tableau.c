#include <stdio.h>

/*    tab[]       : adresse du tableau
 *   *tab[]       : 1er element du tableau
 *  *(tab[] + x)  : element d indice 'x' // egal a tab[x]
*/

int *creer_tab(void)
{
  static int tab[5];   // STATIC permet de ne pas avoir une variable locale
  int i;               // mais bien une variable statique ("appelable" partout)

  for(i = 0; i < 5; i++)
    tab[i] = i * 3;
  return tab;

}

void afficher_tab(int *tab, int taille) // OU (int tab[], int taille)
{
  int i;
  for(i = 0; i < taille; i++)
    printf("[%d] ", tab[i]);
}

int main ()
{
  int i;
  int *tab = creer_tab();
  afficher_tab(tab, 5);
}