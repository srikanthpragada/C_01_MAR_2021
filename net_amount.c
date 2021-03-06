// Calculate net amount after 20% discount and 12% tax
#include <stdio.h>

void main ()
{
  int price, discount, discounted_price, tax, net_price;

   printf("Enter price :");
   scanf("%d",&price);

   discount = price * 0.20;
   discounted_price = price - discount;
   tax = discounted_price * 0.12;
   net_price = discounted_price + tax;

   printf("Price             : %6d\n", price);
   printf("- Discount        : %6d\n", discount);
   printf("                    ------\n");
   printf("                  : %6d\n", discounted_price);
   printf("+Tax              : %6d\n", tax);
   printf("                    ------\n");
   printf("Net Price         : %6d\n", net_price);
}
