// Program to take 10 numbers or until 0 is given whichever comes first

#include<stdio.h>
void main()
{
 int i,num, sum = 0;

  for(i=1;i<=5;i++)
  {
     printf("Enter a number [0 to stop] :");
     scanf("%d",&num);

     if(num == 0)
      break;

     sum +=num;
  }
  printf("Sum = %d",sum);
}
