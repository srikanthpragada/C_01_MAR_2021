// Display how many upper, lower and other chars given

#include<stdio.h>
void main()
{
 int i, upper, lower, others;
 char ch;

   upper = lower = others = 0;
   printf("Enter chars : ");
   for(i = 1; i <= 10; i ++)
   {
     fflush(stdin); // clear keyboard buffer
     ch = getchar();
     if (isupper(ch))
          upper ++;
     else
        if(islower(ch))
           lower++;
        else
           others ++;
   }

   printf("\nUpper = %d, Lower = %d, Others = %d", upper, lower, others);
}
