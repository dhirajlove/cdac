#include<stdio.h>
int main()
{
    // Array index starts from 0 
    // 0 to n - 1  
    
    
    int arr[5] = {1,2,3,4,5};  
    // static ==> compile time 
    
    /*
            1    2    3    4    5 
           [0]  [1]  [2]  [3]  [4]  // index/subscript 
           100  104  108  112  116 
    */
     //Name of array represents the base addresss 
     // arr ==> base address ==> 100 
     // &arr[0] ==> base address ==> 100 
     // &arr ==> base adddress ==> 100  

      printf("%u ",arr); // 100 

      printf("%u ",arr+1); 
      /*
                arr + 1 
                100 + 1
                100 + 1 * 4 
                104  
      */
     printf("%u ",arr+2);
     /*
                arr + 2 
                100 + 2 
                100 + 2 * 4 
                100 + 8 
                108 
     */
      printf("%u ",arr+3);
      /*
                arr + 3
                100 + 3 * 4 
                100 + 12 
                112  
      */
     printf("%u ",arr+4);
     /*
                arr + 4 
                100 + 4 
                100 + 4 * 4 
                100 + 16 
                116 
     */



    return 0;
}
