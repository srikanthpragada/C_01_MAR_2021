
void set_max(int * a, int  * b)
{
   if(*a > *b)
      *b = *a;
   else
      *a = *b;
}

void main()
{
   int x = 10, y = 20, n1 = 100, n2 = 50;

      set_max(&x,&y);
      printf("%d %d",x,y);
      set_max(&n1,&n2);
      printf("%d %d",n1,n2);
}
