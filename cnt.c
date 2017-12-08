#include <stdio.h>
#include <string.h>

int count(char  *str)
{
  int c, nl, nt, ns;
  nl = ns = nt = 0;
  c = 0;

  while(str[c] != '\n')
  {
    if (c == '\n')
       ++nl;
    if (c == '\t')
       ++nt;
    if (c == ' ')
       ++ns;
  }
  printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
}

int main()
{
  count("coucou les copains");
  return 0;
}