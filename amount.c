// Calculate amount based on qty and price and display it

#include <stdio.h>

void main()
{
      int qty, price, amount;  // Variables

         qty  = 10;
         price = 200;
         amount = price * qty * 0.90;
         printf("Qty = %d, Price = %d, Amount = %d",qty, price, amount);
}
