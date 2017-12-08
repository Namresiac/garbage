#include <stdio.h>
#include <stdlib.h>

/*
 *  fopen(<fichier>, <mode d'ouverture>)    : r (lecture seule, doit exister)
 *                                            w (ecriture seule)
 *                                            a (ajout en fin de fichier)
 *                                            r+ (lecture/ecriture, doit exister)
 *                                            w+ (lecture/ecriture, supprime contenu)
 *                                            a+ (ajout lecture/ecriture, fin de fichier)
 *
 *   fclose(<fichier>)                      : fermer un fichier ouvert
 *   feof(<fichier>)                        :teste la fin d'un fichier
 *
 *  [LECTURE]
 *  fgetc(<fichier>)                           : lire un caractere.
 *  fgets(<chaine>,<taille_chaine>,<fichier>)  : lire une ligne.
 *  fscanf<fichiers>, <format>, ...()          : lit texte formate (%s, %c, %d)
 *
 *  [ECRITURE]
 *  fputc(<caractere>, <fichier>)              : ecrit un caractere
 *  fputs(<chaine>, <fichier>)                 : ecrit une chaine
 *  fprintf(<fichier>, <format>, ...)          : ecrit du texte formate.
 *
 * */





int main()
{
  FILE *fichier = fopen("text.txt", "r");    //pointeur vers un flux
  int lettre = 0;
  signed char text[256]; //exemple du seuil limite
  int age = 0;
  int adresse = 0;

  if(fichier == NULL)
    exit(1);

  fscanf(fichier, "%d %d", &age, &adresse);
  printf("age = %d, et adresse %d", age, adresse);
 // fgets(text, 255, fichier); //ne lit qu'une ligne ( duppliquer lq fonction autant de fois qu on veut de lignes)
 // printf("%s", text);

 /* while(1)
  {
     lettre = fgetc(fichier);   // lit caractere par cartactere

     if(feof(fichier))
        break;
     printf("%c", lettre);
  }  */

  fclose(fichier);

  return 0;
}