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

      //printf("%u ",arr); // 100 // base address 

      //printf("%u ",*arr);
      /*
                *arr
                valueat(arr)
                valueat(100)
                1   
      */
       //printf("%u ",*(arr+1));
       /*
                *(arr+1)
                *(100 + 1 )
                *(100 + 1 * 4 )
                *(100 + 4  )
                *(104)
                 2 

       */
        //printf("%u ",*(arr+2));
        /*
                *(arr+2)
                *(100 + 2)
                *(100 + 2 * 4  )
                *(100 + 8 )
                *(108)
                3 
        */ 
          
         // printf("%u ",*(arr+3));
          /*
                *(arr+3)
                *(100 + 3 )
                *(100 + 3 * 4)
                *(100 + 12)
                *(112)
                4 
          */
         //printf("%u ",*(arr+4));// 5 

        printf("%d ",arr[0]); // 1
        // arr[0] ==> array notation 
        printf("%d ",*(arr+0));// 1 
        // *(arr+0)==> *(100+0)==>*(100)==>1 
        // pointer notation 

        // arr[1] array notation 
        // *(arr+1) pointer notation   

        //arr[2] ==> *(arr+2)

    return 0;
}
