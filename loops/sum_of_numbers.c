#include<stdio.h>
void main()
{
   int i, num, sum = 0;

    while(1)
    {
      printf("Enter a number [0 to stop] : ");
      scanf("%d",&num);

      if (num == 0)
         break;

      sum += num;
    } // while

    printf("Sum = %d",sum);

 }
