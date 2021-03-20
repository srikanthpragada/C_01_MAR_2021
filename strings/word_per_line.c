//print each word on a separate line

#include <stdio.h>

void main()
{
  char st[] = "Jack,Scott_Guthrie;Mike Steve";
  int i;

    for(i = 0 ; st[i] != '\0'; i ++)
    {
      if(isalnum(st[i]) || st[i] == '_' || st[i] == '-')
        putch(st[i]);
      else
        putch('\n');
    }

}
