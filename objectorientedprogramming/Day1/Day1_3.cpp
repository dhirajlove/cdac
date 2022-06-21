#include<stdio.h> 

int sum ( int a , int b) // formal argument / function parameters 
{
    int result; 
    result = a + b; 
    return result;  
} 

int main()
{
    int x = 10;  // local variables 
    int y = 20; 
    int result; 

    result = sum(x,y); // actual argument / function argument 
    // pass by value / call by value 
    
    printf("Result  :   %d",result); 
    return 0; 
}