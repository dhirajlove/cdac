#include<stdio.h> 
float fun1( float f ); //function declaration 
int main()
{

    float fvar = 10.33f;       
    float ans; 
    ans = fun1( fvar ); // function call 
    printf("%.2f",fvar);  
    return 0;
}

float fun1( float f ) //function defination
{
    return f;  
}
// function can return only one value 
