#include <stdio.h> 
#include <stdlib.h>


int main()
{
  int ***ptr;
  int i, j;

//###########################################

  ptr = malloc(taille1 * sizeof(*ptr));
  if(ptr == NULL)                          // 1ere dimension
    return -1;

//###########################################

  for( i = 0; i < taille1 < i++)
  {
    ptr[i] = malloc(taille2 * sizeof(**ptr));
    if(ptr[i] == NULL)                         // 2nde dimension
      return -1;
  }

//###########################################

  for( i = 0; i < taille1; i++)
  {
    for( j = 0; j < taille2; j++)
    {                                               // 3eme dimension 
      ptr[i][j] = malloc(taille3 * sizeof(***ptr));
      if(ptr[i][j] == NULL)
        return -1; 
    }
  }
}



