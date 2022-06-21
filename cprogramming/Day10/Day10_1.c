#include<stdio.h> 
 

int addition( int num1 , int num2  );   // function declaration 
// main is a function 
// main is a user-defined function 
int main()
{   
    // num1 and num2 are local variables 
    // local variable ==> variable declared inside the function 
     
    int num1 = 10; 
    int num2 = 20; 
    int ans; 

    //addition(10,20); //calling the function 
     
     ans = addition(num1,num2); //calling the function 
     //        10   20  

     // num1 and num2 are called as actual arguments   
     
     printf("ans = %d",ans); 


    return 0;
}

// main is a calling function 
// addition is a called function 

// addition ==> user-defined function 
// addition is the name given to the function 
// function defination 

// returntype  function-name (  arguments )
// num1 and num2 are called as formal arguments 
int addition( int num1 , int num2  )
{
    // num1 and num2 are local variable 

    int ans;  //local variable 
    
    ans = num1 + num2; 
   //30     10    20 
    
    return ans; 
} 

