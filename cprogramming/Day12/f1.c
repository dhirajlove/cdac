#include<stdio.h> 
extern int num1;
extern int num2; 
void fun1() 
{
    num1++; 
    num2++;  
    printf("Inside the fun1 num1:%d num2:%d \n",num1,num2); 
}