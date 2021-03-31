#include <stdio.h>

struct time
{
   int hours, mins, seconds;
};

void print_time(struct time t)
{
   printf("%02d:%02d:%02d\n", t.hours, t.mins, t.seconds);
}

void set_time_zero(struct time t)
{
   t.hours = t.mins = t.seconds = 0;
}

struct time get_time()
{
    struct time t = {0,0,0};
    return t;
}

void main()
{
  struct time t = {10,20,30};
  struct time t2;
  struct time times[5];

     times[0].hours = 1;

     t2 = get_time();
     print_time(t);
     // set_time_zero(t2);
     print_time(t2);

}
