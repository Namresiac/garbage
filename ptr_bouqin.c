#include <stdlib.h>
#include <stdio.h>

int main()
{
  char *str = "coucou";
  int i =0;

  while(str[i])
      {
        if (str[i] == 'c')
        printf("%c\n", str[i]);
        i++;
      }


  return 0;
}