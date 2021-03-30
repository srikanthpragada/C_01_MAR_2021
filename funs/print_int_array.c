void fill_array(int  * a, int length, int num)
{
 int i;

     for(i = 0; i < length; i ++)
        a[i] = num;
}


void print_array(int  a[], int length)
{
 int i;

     for(i = 0; i < length; i ++)
        printf("%5d", a[i]);
}

void main()
{
   int arr[] = {1,2,3,4,5};
   int arr2[] = {1,2,3,5,6,7,8,9,10};

   print_array(arr,5);
   printf("\n");
   fill_array(arr,5,100);
   print_array(arr,5);


}
