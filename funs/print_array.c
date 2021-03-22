
void print_array(int arr[10])
{
  int i;
       for(i = 0; i < 10; i ++)
          printf("%5d", arr[i]);
}

void print_reverse(int arr[10])
{
  int i;
       for(i = 9; i >= 0; i --)
          printf("%5d", arr[i]);
}

void main()
{
   int a[10] = {10,20,40,50,60,70,65,66,77,88};
   int b[10]  = {1,2,3,4,5,6,7,8,9,10};

      print_array(a);
      putch('\n');
      print_reverse(a);
}
