
#include <stdio.h>

void main()
{
  int i,num, orginal_num, sum, largest_sum = 0, largest_number;

      for(i = 1; i <= 5; i++)
      {
        printf("Enter a number :");
        scanf("%d",&num);

        sum = 0;
        orginal_num = num;
        while(num) {
           sum +=  num % 10;
           num /= 10;
        } // while

        if (sum > largest_sum) {
            largest_number = orginal_num;
        }
      } // for

      printf("Number with largest sum of digits : %d", largest_number);
}
