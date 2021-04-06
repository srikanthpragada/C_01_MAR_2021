// Take data about products from user and write to products.dat
#include <stdio.h>

struct product  {
   char name[30];
   int price,qoh;
};

void main()
{
  FILE *fp;
  struct product p;

    fp = fopen("products.dat","wb");
    if (fp == NULL)
    {
       printf("Sorry! Could not open products.dat. Quitting.");
       exit(1);
    }

    while(1)
    {
        fflush(stdin);
        printf("Enter name [end to stop]:");
        gets(p.name);
        if(stricmp(p.name,"end") == 0)
             break;

        printf("Enter price :");
        scanf("%d",&p.price);
        printf("Enter qoh :");
        scanf("%d",&p.qoh);

        // write to file
        fwrite(&p, sizeof(struct product),1,fp);
    }

    fclose(fp);
}


