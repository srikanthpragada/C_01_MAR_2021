// Take a string and count no. of words

#include <stdio.h>

void main()
{
  char st[30];
  int i, count = 1;

      printf("Enter string :");
      gets(st);

      for(i=0; st[i] != '\0' ;i++)
      {
        if (st[i] == ' ')
            count ++;
      }

      printf("Count = %d", count);
}
