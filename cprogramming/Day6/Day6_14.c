#include<stdio.h> 
int main()
{
    // int ans; 
    // int num1 =0; 
    // int num2 =12;
    
    // ans = ++num1 || num2++; 
    // //      ++F  || ??? 
    // //      T    ||  XXX
    // //          T

    // printf("num1 = %d num2 = %d ans= %d",num1,num2,ans); 
 
    int ans; 
    int num1 =0; 
    int num2 =12;
    
    ans = num1++ || num2++; 
    //      F++  ||  T++ 
    //          T 
    
    printf("num1 = %d num2 = %d ans= %d",num1,num2,ans); 
 

    return 0;
}
