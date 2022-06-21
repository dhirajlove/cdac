#include<stdio.h> 
extern int num1;   
void fun2( )
{
    int num3=0; // auto/local variable
    num1++; 
    printf("Inside the fun2 num1:%d num3:%d \n",num1,num3); 
}