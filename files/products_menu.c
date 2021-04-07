// Manage Products
#include <stdio.h>
#define FILENAME  "products.dat"

struct product
{
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

void product_details()
{
 FILE *fp;
 int count,id,pos;
 struct product p;

    fp = fopen(FILENAME,"rb");
    if (fp == NULL)
    {
       printf("Sorry! Could not open %s. Quitting.",FILENAME);
       exit(1);
    }

    while(1)
    {
        printf("\nEnter product id [0 to stop]:");
        scanf("%d",&id);
        if(id == 0)
            break;

        // Go to product with given id
        pos = (id - 1) * sizeof(struct product);
        fseek(fp, pos, SEEK_SET); // Move point to given position
        count = fread(&p,sizeof(struct product),1,fp);
        if(count == 1)
        {
            printf("Name   :  %s\n",p.name);
            printf("Price  :  %5d\n",p.price);
            printf("Qoh    :  %5d\n",p.qoh);
        }
        else
            printf("\nSorry! Product Not Found!\n");
    } // while

    fclose(fp);
}

void update_product()
{
 FILE *fp;
 int count,id,pos;
 struct product p;

    fp = fopen(FILENAME,"r+b");
    if (fp == NULL)
    {
       printf("Sorry! Could not open %s. Quitting.",FILENAME);
       exit(1);
    }

    printf("\nEnter product id :");
    scanf("%d",&id);
    // Go to product with given id
    pos = (id - 1) * sizeof(struct product);
    fseek(fp, pos, SEEK_SET); // Move point to given position
    count = fread(&p,sizeof(struct product),1,fp);
    if(count == 1)
    {
      printf("Enter new quantity :");
      scanf("%d",&p.qoh);
      // Bring pointer back to required location
      fseek(fp, pos, SEEK_SET);
      fwrite(&p,sizeof(struct product),1,fp);
    }
    else
        printf("\nSorry! Product Not Found!\n");

    fclose(fp);
    printf("\nPress any key to continue...");
    getch();
}

void search_products()
{
 FILE *fp;
 int count;
 struct product p;
 char name[20];

    fp = fopen(FILENAME,"rb");
    if (fp == NULL)
    {
       printf("Sorry! Could not open %s. Quitting.",FILENAME);
       exit(1);
    }

    fflush(stdin);
    printf("Enter product name :");
    gets(name);

    while(1)
    {
        count = fread(&p, sizeof(struct product),1,fp);
        if (count == 0) // EOF
            break;

        if(strstr(p.name,name) != NULL)
           printf("%-30s %5d %3d\n",p.name,p.price,p.qoh);
    }

    fclose(fp);
    printf("\nPress any key to continue...");
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
     printf("5. Search products\n");
     printf("6. Exit\n");
     printf("Enter choice [1-6] :");
     scanf("%d",&choice);

     switch(choice)
     {
        case 1: add_products();
                break;
        case 2: list_products();
                break;
        case 3: update_product();
                break;
        case 4: product_details();
                break;
        case 5: search_products();
                break;
        case 6: exit(0);
     }
   }
}


