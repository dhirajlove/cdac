#include<stdio.h>
#define ADD_FIVE(a) (a) + 5
int main( void )
{
int x = ADD_FIVE(3) * 3;

/*
    int x = (3) + 5 * 3;
    printf("Value of X=%d",x);
*/
printf("Value of X=%d",x);
return 0;
}