#ifndef __LIST_H___
#define __LIST_H___


/*definition type Booleen*/
typedef enum
{
  false,
  true
}Bool;

/*definbition d'une lsite*/
typedef struct ListElement
{
  int value;
  struct ListElement *next;
}ListElement, *list_t;

/*prototypes*/
list_t new_list(void);
Bool is_empty(list_t li);
int list_length(list_t li);
void  print_list(list_t li);

/*INSERTION*/
list_t push_back(list_t li, int x);
list_t push_front(list_t li,  int x);

/*RETIRER*/
list_t pop_back(list_t li);
list_t pop_front(list_t li);
#endif