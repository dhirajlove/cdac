#include<stdio.h>
int main()
{
    // Array index starts from 0 
    // 0 to n - 1  
    
    
    int arr[5] = {11,22,33,44,55};  
    // static ==> compile time 
    
    /*
            1    2    3    4    5 
           [0]  [1]  [2]  [3]  [4]  // index/subscript 
           100  104  108  112  116 
    */
    
    //printf("%d",*(arr+1)); 
    printf("%d",*arr + 10 ); 
    /*
            *arr + 10 
             11  + 10 
             21
    */
    return 0;
}
