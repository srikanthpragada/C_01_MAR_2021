// Take filename and string on command line and display lines that contain the given string
#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char line[100];
  int lineno = 1;

      if(argc < 3)
      {
          printf("Usage : search_file  filename search_string");
          exit(0);
      }

      fp = fopen(argv[1],"rt");
      if ( fp == NULL)
      {
         printf("Sorry! Could not open file [%s]", argv[1]);
         exit(1);
      }

      while(1)
      {
          if (fgets(line,100,fp) == NULL)
             break;

          if (strstr(line,argv[2]) != NULL)  // string found
               printf("%3d: %s",lineno, line);

          lineno ++;
      }

      fclose(fp);
}
