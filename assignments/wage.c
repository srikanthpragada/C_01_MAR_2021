// calculate wage

#include<stdio.h>
void main()
{
  int hours_worked, day, rate_per_hour, wages;

  printf("Please enter hours of worked : ");
  scanf("%d",&hours_worked);
  printf("Please enter day[1-7] : ");
  scanf("%d",&day);

  if (day <= 4)
      rate_per_hour = 200;
  else
     if (day == 5)
        rate_per_hour = 300;
     else
       if (day == 6)
         rate_per_hour = 400;
       else
         rate_per_hour = 500;

  wages = hours_worked * rate_per_hour;
  printf("Wages to be paid = %d",wages);

}
