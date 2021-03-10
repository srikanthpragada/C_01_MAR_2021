#include<stdio.h>
void main()
{
   int i=1,num,sum=0;

    while(i <= 5)
    {
      printf("Enter number :");
      scanf("%d",&num);
      sum += num;
      i ++;
    }

    printf("Sum = %d",sum);
 }
