// Strong number

#include <stdio.h>

void main()
{

  int num = 146, orginal_num, digit, i, fact, sum = 0;

     orginal_num = num;
     while(num > 0)
     {
        digit = num % 10;
        fact = 1;
        for(i = 2; i <= digit ; i ++)
        {
           fact *= i;
        }
        // printf("%d\n", fact);
        sum += fact;
        num /= 10;
     }

     if (orginal_num == sum)
        printf("Strong Number!");
     else
        printf("Not a strong number!");
}
