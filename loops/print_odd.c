#include<stdio.h>
 void main()
 {
   int n=1, num;

    printf("Please enter the number : ");
    scanf("%d",&num);

    while(n <= num)
    {
       printf("%d ",n);
       n += 2;
   }

 }
