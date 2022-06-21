#include<stdio.h> 


namespace na // Top level namespace 
{
    int num2 = 20; // namespace scope 
    namespace nb  // nested namespace 
    {
        int num3 = 30; // namespace scope 
    }
} 

int main()
{
    printf("num2    :   %d\n",na::num2);// 20 
    printf("num1    :   %d\n",na::nb::num3);//30 
    return 0; 
}


/*
        can we have same variable in a namespace 
*/

namespace na 
{
    int num1; 
    int num1; 
}