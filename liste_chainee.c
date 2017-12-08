#include <stdio.h>
#include <stdlib.h>
#include "list.h"

list_t new_list(void)
{
  return NULL;
}

/*-------------------------------*/

Bool is_empty(list_t li)
{
  if(li == NULL)
    return true;

  return false;
}


/*-------------------------------*/

int list_length(list_t li)
{
  int size = 0;

  if(!is_empty(li))   // si la liste n est pas vide, si elle est vide on zappe le while 
  while(li != NULL)
  {
    ++size;           // + 1 sur l'element
    li = li->next;    // on change d'element
  }

  return size;
}

/*-------------------------------*/

void  print_list(list_t li)
{
  if(is_empty(li))
  {
      printf("la liste est vide\n");
      return;
  }

  while(li != NULL)
  {
    printf("[%d]  -> ", li->value); // affiche l'element
    li = li->next;            // passe a l'element suivant
  }

  printf("\n");
}

/*-------------------------------*/

list_t push_back(list_t li, int x)  // ajout a la fin de la liste, le + conplexe des 2
{
  ListElement *new;                            //|
  new = malloc(sizeof(ListElement));           //|
                                               //|
  if(new == NULL)                              //CREER LE NVL ELEMENT 
  {                                            //|
    fprintf(stderr, "erreur alloc dynamique");  //|
    exit(EXIT_FAILURE);                        //|
  }
  new->value =x;
  new->next = NULL;

  if(is_empty(li))
    return new;
  
  ListElement *tmp;
  tmp = li;

  while(tmp->next != NULL)
    tmp = tmp->next;

  tmp->next = new;

  return li;
}

/*-------------------------------*/

list_t push_front(list_t li, int x)
{
  ListElement *new;                               //
  new = malloc(sizeof(ListElement));              //
                                                  //
  if(new == NULL)                                 // CREER NVL ELEMENT
  {                                               //
    fprintf(stderr, "erreur d'allocation");       //
    exit(EXIT_FAILURE);                           //
  }

  new-> value = x;

  if(is_empty(li))
     new->next = NULL;                     //liste vide, donc il devient le 1er element
  else
    new->next = li;                        //liste pas vide, donc il pointe sur le reste de la liste

  return new;
}
/*-------------------------------*/

list_t pop_back(list_t li)
{
  if(is_empty(li))
    return new_list();

  if(li->next == NULL)
  {
    free(li);
    li = NULL;

    return new_list();
  }
  ListElement *tmp = li;
  ListElement *before = li;

  while(tmp->next != NULL)
  {
    before = tmp;   //sauvegarder avt de passer a la suite.
    tmp = tmp->next;
  }
  before->next = NULL; // l'avant dernier element devient le dernier. ON a casse le liens entre before et tmp
  free(tmp);
  tmp = NULL;

  return li;
}

/*-------------------------------*/

list_t pop_front(list_t li)
{
  if(is_empty(li))
    return li; // = return new_list()

  ListElement *new;
  new = malloc(sizeof(ListElement));      // on cree nvl element, pr ne garder que la tete de liste.
  if(new == NULL)
  {
    fprintf(stderr, "erreur d'allocation");       //
      exit(EXIT_FAILURE); 
  }
  new = li->next;
  free(li);
  li = NULL;

  return new;
}


/* MAIN MAIN MAIN MAIN*/

int main()
 {
   list_t my_list = new_list();

   print_list(my_list);
   my_list = push_back(my_list, 1);
   my_list = push_back(my_list, 2);
   my_list = push_back(my_list, 3);
   print_list(my_list);

   my_list = pop_front(my_list);
   my_list = pop_front(my_list);
   print_list(my_list);

   my_list = push_front(my_list, 10);
   my_list = push_front(my_list, 20);
   my_list = push_front(my_list, 30);
   print_list(my_list);

   return 0;
 }





