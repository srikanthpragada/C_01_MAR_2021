#include<stdio.h>
void main()
{
 int num;

  printf("Please enter the number :");
  scanf("%d", &num);
  if (num % 2 == 0)
  {
     printf("%d is an even number",num);
  }
  else
  {
     printf("%d is an odd number", num);
  }
}
