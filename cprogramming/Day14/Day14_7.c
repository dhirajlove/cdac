#include<stdio.h>
int main()
{
    // Array index starts from 0 
    // 0 to n - 1  
    
    
    int arr[5] = {1,2,3,4,5};  

    
    /*
        arr 
            1    2    3    4    5 
           [0]  [1]  [2]  [3]  [4]  // index/subscript 
           100  104  108  112  116 
    */

    // int *ptr1 = &arr[4]; // 116 
    // int *ptr2 = &arr[0]; // 100 
    // int result; 
    // result = ptr1 - ptr2; 
    // /*
    //          (ptr1 – ptr2) / scale factor of ptr1

    //           ( 116 - 100 ) / 4 
              
    //           16 / 4   

    //             4 
    // */     
     
    int i; 
    for ( i = 0; i < 5; i++)
    {
        printf("%u ",&arr[i]); 
    }
    printf("\n"); 
    //arr++;  // 100++  ==> 100 = 100 + 1 
    printf("%u \n",&arr); // base address 
    printf("%u \n",&arr + 1  ); 
    
    return 0;
}

