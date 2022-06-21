#include<stdio.h> 

int num5 = 60; // Program scope 
static int num6 = 50; // File scope

namespace na 
{   
    int num4 = 40;  // namespace scope 
    class Test 
    {
        int num3; // class scope 
    }; 
}
int main()
{
    int sum ( int num1 , int num2); // num1 and num2 : prototype scope 
    int num2 = 20; // local variable : function scope 
    {
        int num1 = 10; // Local variable : Block scope 
    }

    return 0; 
}


