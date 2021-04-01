#include <stdio.h>

struct time  {
  int h,m,s;
};

void set_zero_time(struct time * tp)
{
    tp->h  = tp->m  = tp->s = 0;
}

struct time random_time()
{
   struct time t;

      t.h =  rand() % 24;
      t.m =  rand() % 60;
      t.s =  rand() % 60;
      return t;
}

void print_time(struct time t)
{
   printf("%02d:%02d:%02d\n", t.h, t.m, t.s);
}

void main()
{
  struct time times[5];
  struct time t = {10,20,30};
  int i;

      set_zero_time(&t);
      print_time(t);
      /*
      srand(time(0));
      for(i = 0; i < 5; i ++)
      {
        times[i] = random_time();
        print_time(times[i]);
      }
      */
}
