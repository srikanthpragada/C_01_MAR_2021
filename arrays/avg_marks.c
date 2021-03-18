// Print avg marks for each student
#include <stdio.h>

void main()
{
int marks[5][5];
int r,c, total;

   srand(time(0));
   for (r = 0; r < 5 ; r++ )
   {
    total = 0;
    for (c = 0; c < 5 ; c++ )
    {
       marks[r][c] = rand() % 100;
       total += marks[r][c];
       printf("%5d", marks[r][c]);
   }
   printf("%5d\n", total / 5);
  }
}
