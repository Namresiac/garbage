#include <stdio.h>
#include <stdlib.h>

int cmpter_phrase(char *str)
{
  int i = 0;
  int tab, spac;
  tab = 0;
  spac = 0;

  while(str[i] != '\0')
  {
    if (str[i] == ' ')
      ++spac;
    if (str[i] == '\t')
      ++tab;
  }
  printf("Il y a %d espaces et %d tabs dans cette phrase", spac, tab);
}

int main()
{
  cmpter_phrase("coucoui les copains");
  return 0;
}