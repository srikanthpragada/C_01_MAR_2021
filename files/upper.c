// Usage: upper.exe  source target
#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * sfp, *tfp;
  char line[200];

    if (argc < 3)
    {
       printf("Usage : upper  <sourcefile> <targetfile>");
       exit(1);
    }

    sfp = fopen(argv[1],"rt");
    if (sfp == NULL)
    {
       printf("Sorry! Could not open %s file. Quitting.", argv[1]);
       exit(2);
    }

    tfp = fopen(argv[2],"wt");
    if (tfp == NULL)
    {
       printf("Sorry! Could not create %s file. Quitting.", argv[2]);
       exit(3);
    }

    while(1)
    {
       if (fgets(line,200,sfp) == NULL) // EOF
          break;

       fputs(strupr(line),tfp);
    }

    fclose(sfp);
    fclose(tfp);
}


