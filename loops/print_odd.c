#include<stdio.h>
 void main()
 {
   int i, num;

    printf("Please enter the number : ");
    scanf("%d",&num);

    for(i = 1; i <= 10; i ++)
    {
      printf("%2d * %2d = %3d", num,i, num*i);
    }
 }
