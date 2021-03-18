//Program to check if the password has at least one uppercase and one digit

#include<stdio.h>
#include<ctype.h>

void main()
{
 char ch;
 int i,digit = 0, upper = 0;

 printf("Enter the password : ");

 for(i=1;i<=6;i++)
 {
   ch = getch();
   putch('*');
   if(isdigit(ch))
      digit = 1;
   else
     if(isupper(ch))
       upper = 1;
 }

 if (digit && upper)
     printf("\nIt is a valid password");
 else
 {
    if(!digit)
       printf("\nPassword must have a digit!");

    if(!upper)
       printf("\nPassword must have an uppercase letter!");
 }
} // main()


