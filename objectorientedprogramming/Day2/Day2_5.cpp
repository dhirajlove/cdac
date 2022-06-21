#include<stdio.h> 

namespace na 
{
    int num1 = 10; 
    int num2 = 30; 
}
namespace na 
{
    //int num1 = 10; // NOT OK  
    int num4 = 30; 
}
int main()
{
    printf("num1    :   %d\n",na::num1);//10 
    printf("num2    :   %d\n",na::num2);//30 
    printf("num4    :   %d\n",na::num4);//30 
    return 0; 
}