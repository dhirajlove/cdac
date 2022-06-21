#include<stdio.h> 
void fun( ); 
static int num  = 10 ; // Data section  
int main()
{
    int a = 10; // stack ==> main's FAR 
    //a will be destroyed when main's FAR is destroyed 
    //static int num  = 10 ; // Data section  
    // after main FAR's destroyed  num will be destroyed 
    printf("%d",num); //10 
    return 0;
}

void fun( )
{
    printf("%d",num); 
}



