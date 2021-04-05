#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50];
  char line[100];
  int lineno = 1;

      printf("Enter filename : ");
      gets(filename);

      fp = fopen(filename,"rt");
      if ( fp == NULL)
      {
         printf("Sorry! Could not open file!");
         exit(1);
      }

      while(1)
      {
          if (fgets(line,100,fp) == NULL)
             break;

          printf("%3d: %s",lineno, line);
          lineno ++;
      }

      fclose(fp);


}
