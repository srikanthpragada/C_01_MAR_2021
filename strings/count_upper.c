// Take a string and count no. of uppercase letters

#include <stdio.h>

void main()
{
  char st[30];
  int i, count = 0;

      printf("Enter string :");
      gets(st);

      for(i=0; st[i] != '\0' ;i++)
      {
        if (isupper(st[i]))
            count ++;
      }

      printf("Count = %d", count);
}
