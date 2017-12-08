#include <stdio.h>
#include <stdlib.h>



void squeeze(char s1[], char s2[])
{
   int i,j,k;
    
   for(i = k = 0; s1[i] != '\0'; i++)
   {
      for(j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
         ;
      if (s1[j] == '\0')
         s1[k++] = s1[i];
   }
 
   s1[k] = '\0';
}

int main(void)
{
    char    a1[] = "hello";
    char    a2[] = "holla";

    squeeze(a1, a2);

    printf (">a1:%s<\n", a1);
    printf (">a2:%s<\n", a2);

    return 0;
}