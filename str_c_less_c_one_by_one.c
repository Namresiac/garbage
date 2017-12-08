#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char *str = "Hello World";

  int i = 0;
  while(str[i])
  {
     printf("%s\n", &str[i]);
     i++;
  }
  return 0;
}