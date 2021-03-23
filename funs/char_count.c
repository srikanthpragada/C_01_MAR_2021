int char_pos(char st[30], char ch)
{
 int i;

  for(i=0; st[i] != '\0';i++)
  {
    if (st[i] == ch)
       return i;
  }

  return -1;
}


int char_count(char st[30], char ch)
{
 int i,count = 0;

  for(i=0; st[i] != '\0';i++)
  {
    if (st[i] == ch)
       count++;
  }
  return count;
}

void main()
{
    printf("Count = %d\n", char_count("AbcAbc",'A'));
    printf("Position  = %d", char_pos("AbcAbc",'c'));
}
