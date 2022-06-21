#include<stdio.h> 
 

int addition( int num1 , int num2  );   // function declaration 
int main()
{   
     
    int num1 = 10; 
    int num2 = 20; 
    int ans; 
     ans = addition(num1,num2); //1st call 
     //        10   20  
     printf("ans = %d",ans);// 30  

     ans = addition( 30 , 40 ); //2nd call 
     printf("ans = %d",ans); //70       

     addition(100,20); // 3rd  call; 

    return 0;
}

int addition( int num1 , int num2  )
{

    int ans;  
    ans = num1 + num2; 
    
    return ans; 
} 

