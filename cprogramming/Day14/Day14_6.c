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
    
    int *ptr = arr; // 4 bytes 
    
    //printf("%u ", *ptr); 
    /*
            *ptr
            valueat(100)
            1 

    */
    //printf("%d ", *(ptr+1));//2 
    //printf("%d ", *(1+ptr));//2 
    //printf("%d ", *(ptr+2-1));//2 
      //printf("%d ", *(ptr+1)); // pointer notation 
      //printf("%d ",ptr[1]); 
      // ptr[1] ==> *(ptr+1) 
      // array  ==> pointer notation 
    
      printf("%d",ptr[-1]); 
      /*
                ptr[-1]

                *(ptr +  -1)
                *(100 + -1)
                *(100 - 1 )
                *(100 - 1 * 4 )
                *(100 - 4 )
                *(96)
                Garbage 


      */

    /*
            *(ptr+1)
            *(100 + 1 )
            *(100 + 1 * 4 )
            *(104)
            2 
    */ 
   //printf("%d ", *(ptr+2));//3 
   //printf("%d ", *(ptr+3));//4 
   //printf("%d ", *(ptr+4));//5 

  
    return 0;
}
