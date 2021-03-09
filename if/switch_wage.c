// calculate wage

#include<stdio.h>
void main()
{
  int hours_worked, day, rate_per_hour, wages;

  printf("Please enter hours of worked : ");
  scanf("%d",&hours_worked);
  printf("Please enter day[1-7] : ");
  scanf("%d",&day);

  switch(day)
  {
   case 5:  rate_per_hour = 300;
            break;
   case 6:  rate_per_hour = 400;
            break;
   case 7:  rate_per_hour = 500;
            break;
   default: // 1 to 4
            rate_per_hour = 200;
            break;
  }

  wages = hours_worked * rate_per_hour;
  printf("Wages to be paid = %d",wages);

}
