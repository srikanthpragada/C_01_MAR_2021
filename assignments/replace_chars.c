#include <stdio.h>

void replace_chars(char st1[], char st2[])
{
 int i;
 char *p;

  for(i = 0; st1[i] != '\0'; i ++)
  {
     p = strchr(st2, st1[i]);
     if(p != NULL)
        st1[i] = '.';
  }
}

void main()
{
   char s1[] = "Abcdcafd";
   char s2[] = "cefb";

   replace_chars(s1,s2);
   puts(s1);  // A..d

}
