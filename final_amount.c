// Calculate net price based on qty and price

#include<stdio.h>
void main()
{
 int price,qty, amount;

 printf("Please enter price and quantity : ");
 scanf("%d%d",&price, &qty);

 amount = price * qty;

 if (qty > 2 || price > 10000)
 {
   amount *= 0.90;
 }

 printf("Net Amount = %d",amount);
}
