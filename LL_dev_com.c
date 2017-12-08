#include <stdlib.h>
#include <stdio.h>


typedef struct pile{
    int valeur;
    struct pile *prec;
} pile;


/*************************************************************************/

void Push(pile **p, int Val)
{
        pile *element = malloc(sizeof(pile));
        if(!element) exit(EXIT_FAILURE);     /* Si l'allocation a échoué. */
        element->valeur = Val;
        element->prec = *p;
        *p = element;       /* Le pointeur pointe sur le dernier élément. */
}
/*************************************************************************/

int Pop(pile **p)
{
        int Val;
        pile *tmp;
        if(!*p) return -1;     /* Retourne -1 si la pile est vide. */
        tmp = (*p)->prec;
        Val = (*p)->valeur;
        free(*p);
        *p = tmp;       /* Le pointeur pointe sur le dernier élément. */
        return Val;     /* Retourne la valeur soutirée de la pile. */
}

/*************************************************************************/

void Clear(pile **p)
{
        pile *tmp;
        while(*p)
          {
             tmp = (*p)->prec;
             free(*p);
             *p = tmp;
          }
}
/*************************************************************************/

int Length(pile *p)
{
        int n=0;
        while(p)
          {
              n++;
              p = p->prec;
          }
        return n;
}

/*************************************************************************/

void View(pile *p)
{
        while(p)
          {
             printf("%d\n",p->valeur);
             p = p->prec;
          }
}

int main()
{
        pile *MaPile = NULL;   /* Impératif de l'initialiser à NULL */

        Push(&MaPile, 10);
        Push(&MaPile, 25);
        Push(&MaPile, 33);
        Push(&MaPile, 12);      /* Empile 4 valeurs. */

        puts("Affichage de la pile :");
        View(MaPile);       /* Affiche la totalité de la pile. */
        puts("------");

        printf("Nb d'elements : %d\n",Length(MaPile));
        puts("------");

        puts("Deux valeurs soutirees de la pile :");
        printf("%d\n",Pop(&MaPile));   /* Affiche deux valeurs */
        printf("%d\n",Pop(&MaPile));   /* soutirées de la pile. */
        puts("------");

        puts("Affichage de la pile :");
        View(MaPile);       /* Affiche la totalité de la pile. */
        puts("------");

        Clear(&MaPile);        /* Vide la pile. */

        Push(&MaPile, 18);      /* Empile une valeur. */

        puts("Affichage de la pile apres vidage et ajout d'une valeur :");
        View(MaPile);       /* Affiche la totalité de la pile. */
        puts("------\n");

        Clear(&MaPile);    /* Vider la pile avant de quitter. */

#ifdef _WIN32
        system("PAUSE");  /* Pour la console Windows. */
#endif
        return 0;
}


