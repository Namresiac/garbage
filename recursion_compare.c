#include <stdio.h>
#include <stdlib.h>

static int FactorialRecursive(int n)
{
  if (n <= 1) return 1;
  printf("recursive %d\n", n);
  return n * FactorialRecursive(n -1);
}

static int FactorialIterative(int n)
{
  int sum = 1;
  if(n <= 1) return sum;
  while(n > 1)
  {
    printf("iterative: %d\n", n);
    sum *= n;
    n--;
  }
  return sum;
}

int main ()
{
  int i = 25;
  FactorialRecursive(i);
  printf("---------------------------\n");
  FactorialIterative(i);
  return 0;
}

