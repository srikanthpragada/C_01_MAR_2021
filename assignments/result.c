// Program to determine if a student passed or failed based on marks obtained.
#include<stdio.h>
void main ()
{
  int marks_sub1, marks_sub2;

  printf("Please enter the marks obtained in both the subjects : ");
  scanf("%d%d",&marks_sub1,&marks_sub2);

  if(marks_sub1 > 50 && marks_sub2 > 50 || marks_sub1 + marks_sub2 > 120)
     printf("Passed");
  else
     printf("Failed");
}
