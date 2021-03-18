// Print squares of numbers
#include <stdio.h>

void main()
{
  int nums[10];
  int i;

        srand(time(0));  // initialize random seed
        for(i = 0; i < 10; i ++)
        {
           nums[i] = rand() % 100;
           printf("Square of %d is %d\n", nums[i], nums[i] * nums[i]);
        }

}
