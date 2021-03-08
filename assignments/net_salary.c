// Program to calculate net salary based on basic salary
#include<stdio.h>
void main()
{
  int basic_sal, hra, da, pf,net_sal;

  printf("Please enter basic salary : ");
  scanf("%d",&basic_sal);

  if (basic_sal <= 50000)
  {
     hra = basic_sal * 0.25;
     da = basic_sal * 0.15;
     pf = basic_sal * 0.04;
  }
  else
  {
     hra = basic_sal * 0.3;
     da = basic_sal * 0.2;
     pf = basic_sal * 0.03;
  }

  net_sal = basic_sal + hra + da + pf;
  printf("HRA = %d, DA = %d, PF = %d, Net salary = %d",hra,da,pf,net_sal);
}
