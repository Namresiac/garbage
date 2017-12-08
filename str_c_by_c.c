#include <stdlib.h>
#include <stdio.h>

int main()
{
  char *str = "hello world";
  int i;

  for (i = 0 ; str[i] != '\0'; i++)
  {
  printf("str[%d] = '%c'\n", i, str[i]); 
  }
  return 0;
}