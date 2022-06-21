#include<stdio.h> 
int num1 = 10; 
int main()
{
    int num1 = 20; // function scope 
    printf("Num1    :   %d\n",num1); // 20 
    printf("Num2    :   %d\n",::num1); //10 
    {
            int num1 = 30; 
            printf("Num1    :   %d\n",num1); 
            printf("Num1    :   %d\n",::num1); 
    }
    return 0; 
}