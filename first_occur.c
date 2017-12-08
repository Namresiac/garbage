/* Write the function any(s1,s2) which returns the first location in the string
 * s1 where any character from the string s2
   occurs, or -1 if s1 contains no characters from s2. ( The standard library
   function strpbrk does the same job but retuns a pointer to the location */

#include<stdio.h>

int main()
{
  char s1[] = "coucou";
  char s2[] = "paul";

  any(s1,s2);
  printf("s1: %s", s1);
  printf("s2 : %s", s2);
}



int any(char s1[],char s2[])
{
    int i,j,check_next_char;

    check_next_char=1;

    for(i=0;s1[i]!='\0'&& (check_next_char);) 
    {
        // iterate through s2 while trying to find matching character from s1
        for(j=0;s2[j]!='\0'&& (s1[i]!=s2[j]);++j) 
            ; // continue

        if(s2[j]=='\0') {
            check_next_char=1;
            i++; // go for the next char in s1
        }
        else
            check_next_char=0; // match found
    }

    if(s1[i]=='\0')
        return -1;
    else
        return i;
}