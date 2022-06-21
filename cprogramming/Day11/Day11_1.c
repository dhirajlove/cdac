#include<stdio.h> 

/*  
     Calculate the combination 

     nCr  --> n! / (r! ( n - r )!)

     1. Input n and r
     2. cal n!
     3. cal r! 
     4. cal (n-r)!
     5.  n! / (r! ( n - r )!)
     6. print the result  
*/
int factorial( int n  ) ; 
int combination( int n , int r  ); 
int main()
{
    int n,r; // local variables 

    int res; // local variable 

    printf("Enter n and r ");
    scanf("%d%d",&n,&r); // 5 2  
    res = combination( n , r ); 
    printf("result = %d",res); 
    return 0;
}

int factorial( int n  ) 
{
        int i,result = 1; 
        for(i=1;i<=n;i++)
            result = result * i; 
        return result; 
}

//                   5       2 
int combination( int n , int r  )
{
        int nf,rf,nrf,res;  // local variables 

        nf = factorial( n ); // factorial(5) // function call  
        rf = factorial( r); // factorial(2)// function call 
        nrf = factorial(n-r);// factorial(3) // function call   

        //n! / (r! ( n - r )!)

        res = nf / (rf * nrf); 

        return res; 

} 

