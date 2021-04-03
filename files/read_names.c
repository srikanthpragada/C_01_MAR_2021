// Read names from names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  char name[30], *p;

     fp = fopen("names.txt","rt");
     if (fp == NULL)
     {
         printf("Sorry! File cannot be opened!");
         return;
     }

     while(1)
     {
         p = fgets(name,30,fp);
         if(p == NULL)  // EOF
            break;

         printf("%s",strupr(name));
     }

     fclose(fp);
}
