#include<stdio.h> 

int main()
{
    int num; 
    char ch; 
    double d1; 
    short int s1; 

//sizeof is an operator 
// sizeof is evaluated at compile time     

    //printf("%d",sizeof(1+2)); 
    //printf("%d",sizeof(num + ch)); 
    //printf("%d",sizeof(num + d1)); 
      //printf("%d",sizeof(10.33 + 'A')); 
      //printf("%d",sizeof(10.33f + 'A'));  

      printf("%d",sizeof(s1 + ch));  

    
    return 0; 
}