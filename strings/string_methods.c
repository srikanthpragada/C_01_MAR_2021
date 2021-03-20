//print each word on a separate line

#include <stdio.h>

void main()
{
  char st1[] = "Abcde";
  char st2[] = "Xyz";
  char st3[30];

   strcpy(st3,st1);
   puts(st3);
   strupr(st3);
   puts(st3);
   printf("%d\n", strcmp(st1,st3));
   printf("%d\n", stricmp(st1,st3));
}
