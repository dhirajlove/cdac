#include<stdio.h> 
void swap( int num1  , int num2); 
int main()
{
    int num1 = 1; 
    int num2 = 2; 
    printf("Before swap %d %d\n",num1,num2);
    //                             1   2   
    
    swap( num1 , num2 );
    
    printf("After swap %d %d\n",num1,num2);
    //                            1    2          
    return 0; 
}

//              1           2 
void swap( int num1  , int num2)
{
        int ans; 
        ans = num1; 
    //   1 
        num1 = num2;
    //   2 
        num2 = ans;
   //    1      

    printf("Inside the function  swap %d %d\n",num1,num2);


}



