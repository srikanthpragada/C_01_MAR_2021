// Program to check if the given year is a leap year or not
#include<stdio.h>
void main()
{
 int year;

    printf("Please enter the year : ");
    scanf("%d",&year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
       printf("It is a leap year");
    else
       printf("It is not a leap year");
}
