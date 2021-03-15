// Display all prime numbers from 100 to 200

#include<stdio.h>
void main()
{
 int num, i, prime;

   for(num = 101; num < 200; num += 2)
   {
     prime = 1;
     for(i=2; i <= num/2 ; i ++)
     {
       if (num % i == 0) // found a factor
       {
         prime = 0; // false
         break;
       }
    } // inner for

    if(prime)
      printf("%d ", num);
  } // outer for
}
