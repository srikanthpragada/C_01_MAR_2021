// Program numbers until 0 is given and display sum of positive numbers

#include<stdio.h>
void main()
{
 int i,num, count = 0, sum = 0;

  while(1)
  {
     printf("Enter a number [0 to stop] :");
     scanf("%d",&num);

     if(num == 0)
       break;

     if(num < 0)
       continue;

     sum +=num;
     count ++;

  } // while

  printf("Average = %d",sum/count);
}
