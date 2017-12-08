#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *str = "coucou";
  printf("str =  ");
  printf(str);
  printf("\n");
  printf("\n");

  int i = 0;
  while(str[i])
  {
    i++;
    printf("  str[i], i++ ca donne :\n");
    printf("        %d\n", i);
    printf("\n");
    printf("maintenant afficher le &str[i]:   \n");
    printf(&str[i]);
  }
  return 0;
}