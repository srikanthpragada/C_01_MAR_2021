#include <stdio.h>

float average(int,int); // Function declaration or Prototype declaration

void main()
{
  float avg;

      avg = average(10,20);
      printf("%f", avg);
}

// Function definition
float average(int a, int b)
{
   return  (a + b) / 2.0;
}
