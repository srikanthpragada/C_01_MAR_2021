// Take data from products.dat and display it
#include <stdio.h>

struct product  {
   char name[30];
   int price,qoh;
};

void main()
{
  FILE *fp;
  struct product p;
  int count;

    fp = fopen("products.dat","rb");
    if (fp == NULL)
    {
       printf("Sorry! Could not open products.dat. Quitting.");
       exit(1);
    }

    while(1)
    {
        count = fread(&p, sizeof(struct product),1,fp);
        if (count == 0) // EOF
            break;

        printf("%-30s %5d %3d\n",p.name,p.price,p.qoh);
    }

    fclose(fp);
}


