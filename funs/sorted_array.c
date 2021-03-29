#include <stdio.h>

int sorted(int a[5])
{
  int i;

    for(i= 0 ; i < 4; i ++)
    {
       if(a[i] > a[i + 1])
          return 0; // False
    }

    return 1; // True
}

void main()
{
  int a[] = {10,20,30,60,50};

     printf("%d", sorted(a));
}
