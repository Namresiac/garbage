#include <stdio.h>


static int triple(int a)
{
    return a * 3;
}


int main(void)
{
    int (*pt)(int) = &triple;

    printf("%d.\n", (*pt)(3));
    return 0;
}