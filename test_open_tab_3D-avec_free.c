#include <stdlib.h>


void * my_free(int***,int,int);


void * my_free(int ***ptr,int tailleDejaAllouee1,int tailleDejaAllouee2){

    int i,j;


    for(i=0 ; i < tailleDejaAllouee1 ; i++){

         for(j=0 ; j < tailleDejaAllouee2 ; j++){

               free(ptr[i][j]);

         }

         free(ptr[i]);

    }

    free(ptr);


    return NULL;

}


int main(void)

{

    /*---------------------------------------------------*/

    int taille1 = 2, taille2 = 2, taille3 = 2;

    int ***ptr;

    int i,j;


    /*-----------------Allocation------------------------*/

    ptr = malloc(taille1 * sizeof(*ptr));

    if(ptr == NULL)

         return -1;


    for(i=0 ; i < taille1 ; i++){

         ptr[i] = malloc(taille2 * sizeof(**ptr));


         if( ptr[i] == NULL){         //Erreur d'allocation


              for(--i ; i>=0 ; i--)   //On libère l'espace déjà alloué

                  free(ptr[i]);


              free(ptr);


              return -1;              //Fin du programme

         }

    }


    for(i=0 ; i < taille1 ; i++){

         for(j=0 ; j < taille2 ; j++){

               ptr[i][j] = malloc(taille3 * sizeof(***ptr));


               if(ptr[i][j] == NULL){         //Erreur d'allocation


                   for(--j ; j >= 0 ; j--)    //On libère l'espace déjà alloué

                        free(ptr[i][j]);


                   free(ptr[i]);


                   my_free(ptr , i , taille2);


                   for(--i ; i >= 0 ; i--)

                        free(ptr[i]);


                   return -2;                 //Fin du programme

               }

         }

    }


    /*---------------Libération--------------------------*/

    ptr = my_free(ptr,taille1,taille2);       //On libère la mémoire et on met la valeur de ptr à NULL

    /*---------------------------------------------------*/


    return 0;

}

