#include <stdio.h>
#include <stdlib.h>


void inverser_nombres(int *nombreA, int *nombreB)
{
  int tmp = 0;

  tmp = *nombreB;
  *nombreB = *nombreA;
  *nombreA = tmp;

}

int main()
{
  int nombreA = 1000;
  int nombreB = 25;

  printf("AVANT A=> %d, et B=> %d\n", nombreA, nombreB);
  inverser_nombres(&nombreA, &nombreB);

  printf("APRES A=> %d, et B=> %d", nombreA, nombreB);
  return 0;
}