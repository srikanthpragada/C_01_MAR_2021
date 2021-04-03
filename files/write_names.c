// Write names into names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  char name[30];

     fp = fopen("names.txt","at");

     while(1)
     {
        printf("Enter name [end to stop] :");
        gets(name);
        if ( stricmp(name,"end") == 0)
            break;

        // fputs(name,fp); // Name
        // fputc('\n',fp); // Newline

        fprintf(fp,"%s\n",name);
     }

     fclose(fp);
}
