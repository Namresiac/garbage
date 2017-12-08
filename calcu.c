#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int x, y;
  char symb;
  printf("entrer l'operation x/symbole/y : \n");
  scanf("%d %c %d", &x, &symb, &y);

  switch(symb)
  {
    case '+':
      printf("%d + %d = %d\n", x, y, x + y);
      break;
    case '-':
      printf("%d - %d = %d\n", x, y, x - y);
      break;
    case '*':
      printf("%d * %d = %d\n", x, y, x * y);
      break;
    case '/':
      printf("%d / %d = %d\n", x, y, x / y);
      break;
  }
  return 0;
}