// Display sum of all digits of 5 numbers

#include<stdio.h>
void main ()
{
 int i,num, total_sum = 0, sum;

  for (i=1;i<=5;i++)
  {
    printf("Enter number :");
    scanf("%d",&num);
    sum = 0;
    while(num > 0)
    {
        sum += num % 10;
        num/= 10;
    }
    printf("Sum = %d\n", sum);
    total_sum += sum;
  }
  printf("Total Sum of digits = %d", total_sum);
}
