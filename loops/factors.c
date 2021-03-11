#include<stdio.h>
void main()
{
   int i, num;

    printf("Please enter the number : ");
    scanf("%d",&num);

    for(i = 2; i <= num/2; i ++)
    {
     if(num % i == 0)
         printf("%d ",i);
    }
 }
