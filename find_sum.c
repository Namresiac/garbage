#include <stdio.h>
#include <stdlib.h>

int findSum (int n)
{
int s = 0;
  for (int i = 1; i <= n; i++)
    if (i % 5 == 0 || i % 3 == 0)
      s += i;
  printf("%s", s);
  return s;
}

int main()
{
  int n = 5;
  findSum(n);
}