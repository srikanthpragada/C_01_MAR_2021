// Display largest factor

#include<stdio.h>
void main()
{
 int i,num;

   printf("Enter a number:");
   scanf("%d",&num);

   for(i=num/2; ; i --)
   {
       if (num % i == 0)
         break;
   }

   printf("Largest factor = %d",i);
}
