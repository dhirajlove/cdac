#include<stdio.h> 
int main()
{
    int num1 = 10; 
    int num2 = 20; 
    int num3 = 100; 

    if(num1>num2)
    {
            if(num1>num3) 
            {
                printf("num1:%d is greatest",num1);
            }
            else 
            {
                printf("num3:%d is greatest",num3);
            }
    } 
    else 
    {

             if(num2>num3)
             {
                 printf("num2:%d is greatest",num2);
             }
             else
             {
                 printf("num3:%d is greatest",num3);
             }
                
    }    

    return 0;
}


// num1 , num2 , num3;


