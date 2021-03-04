// Convert inches to cm
#include <stdio.h>

void main ()
{
 float  inches,centimeters;

  printf("Enter number of inches :");
  scanf("%f",&inches);

  centimeters = inches * 2.54;

  printf("%.2f inches = %.2f centimeters",inches, centimeters);

}
