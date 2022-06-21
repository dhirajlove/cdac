#include<stdio.h> 

void fun1(); 
void fun2(); 

int num1; 
int num2; 
// global variable , data section , default 0 

int main()
{
    printf("Inside the main : num1=%d num2=%d \n",num1,num2); 
    fun1(); 
    fun2(); 
    return 0; 
}