// Accept numbers if they are in order

#include <stdio.h>

void main()
{
  int a[5];
  int i= 0, num, pnum = 0;

     while(i < 5)
     {
        printf("Enter a number :");
        scanf("%d",&num);

        if(num < pnum)
            continue;

        a[i] = num;
        i ++;
        pnum = num;
     }

     for(i=0; i < 5; i ++)
       printf("%d ", a[i]);
}
