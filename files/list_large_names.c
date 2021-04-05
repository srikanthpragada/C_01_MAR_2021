// Read names from names.txt and display names with length > 4

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

         if(strlen(name) > 5) // include \n
            printf("%s",name);
     }

     fclose(fp);
}
