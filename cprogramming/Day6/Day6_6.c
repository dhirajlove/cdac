#include<stdio.h> 
int main()
{
    // increment/decrement operator 
    /*
            i want to increment my variable by 1 
            int a; 
            a = a + 1;  
            a+=1;  
    */
    int ans; 
    int num =2; 
    /*
            ++ ==> operator ( unary )
            ==> increment operator  
            increment by 1 

    */
    // ans = num; 
    // preincrement ( first increment ) ==> +1  

    //ans = ++num;
    /*
        1. Increment (  by 1 )
        2. Assigning the value 
    */

    //ans = num++;       
    /*
            post increment 
            1. Assignment 
            2. Increment 
    */

   /*
            -- ==> decrement operator 
            pre-decrement operator 


   */
    //ans = --num;
    /*
            num = 2 
            1. decrement ==>1 
            2. Assignement 
            ans = 1 num = 1 
    */ 
    ans = num--;
    /*
            1. Assignment
            2. decrement( post )  
    */

    printf("ans = %d num = %d",ans,num); 


    return 0;
}
/*
    num = num + 1 
    num+=1
    num++ // post increment 
    ++num // pre increment  
    --num // num -1 
    num-- // num -1 
*/