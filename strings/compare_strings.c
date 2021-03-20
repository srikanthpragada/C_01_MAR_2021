// Compare two strings and display position where they differ, if they differ,
// otherwise message saying they are same

#include <stdio.h>

void main()
{
  char st1[] = "Abcd";
  char st2[] = "Abcde";
  int i = 0;

    while(1)
    {
       if (st1[i] != st2[i])
       {
          printf("Strings differ at %d",i);
          break;
       }
       else
       {
         if (st1[i] == '\0')
         {
            printf("Same");
            break;
         }
         i ++;
       }
    }

}
