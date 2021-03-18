// Take 5 ages and print them
#include <stdio.h>

void main()
{
  int ages[5];
  int i;

        for(i = 0; i < 5; i ++)
        {
           printf("Enter age :");
           scanf("%d",&ages[i]);
        }

        for(i = 0; i < 5; i ++)
           printf("%d\n", ages[i]);

}
