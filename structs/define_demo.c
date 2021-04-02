#include <stdio.h>
#define TITLE "Srikanth Technologies"
#define SIZE 10
// Macro - inline function
#define isodd(n)  n % 2 == 1 ? 1 : 0
#define cube(n)   n * n * n

int iseven(int n)
{
    return  n % 2 == 0 ? 1 : 0;
}
void main()
{
char name[30];
int  marks[SIZE];

    puts(TITLE);
    strcpy(name,TITLE);
    puts(name);
    printf("%d", cube(10));
    printf("\n%d %d", iseven(10),isodd(10));   // -10 % 2 == 1 ? 1 : 0

}
