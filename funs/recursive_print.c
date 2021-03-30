
void print(int n)
{
  if (n > 0)
  {
      printf("%5d", n);
      print(n - 1);
  }

}

void reverse(int n)
{
  if (n == 0)
     return;

  printf("%d", n % 10);
  reverse(n / 10);
}



void main()
{
   // print(10);
   reverse(1234);

}
