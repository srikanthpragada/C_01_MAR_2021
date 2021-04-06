// Manage Products
#include <stdio.h>
#define FILENAME  "products.dat"

struct product  {
   char name[30];
   int price,qoh;
};

void add_products()
{
  FILE *fp;
  struct product p;

    fp = fopen(FILENAME,"ab");
    if (fp == NULL)
    {
       printf("Sorry! Could not open %s. Quitting.", FILENAME);
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

void list_products()
{
 FILE *fp;
 int count;
 struct product p;

    fp = fopen(FILENAME,"rb");
    if (fp == NULL)
    {
       printf("Sorry! Could not open %s. Quitting.",FILENAME);
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
    printf("Press any key to continue...");
    getch();
}

void main()
{
 int choice;

   while(1)
   {
     printf("\nProducts Menu");
     printf("\n=============\n");
     printf("1. Add Products\n");
     printf("2. List Products\n");
     printf("3. Update Product\n");
     printf("4. Details of a product\n");
     printf("5. Exit\n");
     printf("Enter choice [1-5] :");
     scanf("%d",&choice);

     switch(choice)
     {
        case 1: add_products();
                break;
        case 2: list_products();
                break;
        case 3: break;
        case 4: break;
        case 5: exit(0);
     }

   }
}


