// Macro demo

#define next_even(n)   n % 2 == 0 ? n + 2 : n + 1
#define swap(a,b)      {a = a + b; b= a - b; a = a - b;}

void main()
{
  int x = 10, y = 20;

     printf("%d %d\n", x,y);
     swap(x,y);
     printf("%d %d\n", x,y);

}


