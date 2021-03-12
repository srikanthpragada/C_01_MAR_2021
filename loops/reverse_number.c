// Display number in reverse

#include<stdio.h>
void main()
{
 int num,d;

  printf("Enter the number : ");
  scanf("%d",&num);

  while(num > 0)
  {
   d = num % 10;
   printf("%d",d);
   num /= 10;
  }

}
