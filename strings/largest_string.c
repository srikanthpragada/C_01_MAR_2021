//print largest string

#include <stdio.h>

void main()
{
  char st[20];
  char largest[20];

    largest[0] = '\0'; // strcpy(largest,"")
    while(1)
    {
        printf("Enter string [end to stop] :");
        gets(st);
        if(stricmp(st,"end") == 0)
            break;

        if(strcmp(st,largest) > 0)
           strcpy(largest,st);
    }

    printf("Largest = %s",largest);
}
