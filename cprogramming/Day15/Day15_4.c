#include<stdio.h> 

int main()
{
    const int num = 10; 
    const int num2 = 20; 
    const int * const ptr = &num; 
    //const int const * const ptr = &num; 
    //int const * const ptr = &num;   
//ptr is a constant pointer pointing to constant int variable 

    printf("%d ",num); //10 
    printf("%d ",*ptr); //10

    //ptr = &num2;     
    //*ptr = 200; 
    return 0; 
}