#include<stdio.h> 

namespace na 
{
    int num1 = 10;  // namespace scope 
}
 
int num1 = 20;  // program scope 
int main( void )
{
    
    printf("Num1    :   %d\n",::num1); 
    printf("Num1    :   %d\n",na::num1); 
    return 0; 
}
