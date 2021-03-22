
int count_digits(char st[])
{
  int i, count = 0;

     for(i = 0; st[i] != '\0'; i ++)
     {
       if (isdigit(st[i]))
           count ++;
     }

     return count;
}
void main()
{
   printf("Count = %d\n", count_digits("Abc123"));
   printf("Count = %d\n", count_digits("123456"));
}
