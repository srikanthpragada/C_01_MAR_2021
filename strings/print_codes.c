// Take a string and display its ascii codes

#include <stdio.h>

void main()
{
  char st[30];
  int i;

      printf("Enter string :");
      gets(st);

      for(i=0; st[i] != '\0' ;i++)
        printf("%c %d\n", st[i], st[i]);
}
