#include<stdio.h> 
void fun(int num ); 
int main()
{
    int num = 5; 
    fun(--num); 
    printf("In main : %d\n",num);//4 
    return 0; 
}
//            5 
void fun(int num )
{
    printf("In function : %d\n",num); //4 
}