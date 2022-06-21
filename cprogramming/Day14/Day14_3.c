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
    // printf("%d ",*arr); //1 
    // printf("%d ",arr[0]); // 1
    // printf("%d ",*(arr+0)); // 1 
    // printf("%d ", *(0+arr)); // 1 
    // printf("%d ",*(arr+1-1));// 1  
    // *(arr+0)==> 1  

    // printf("%d",arr[ arr[1] ]); 
    // arr[2] ==> 3  

     //printf("%d ",++arr[0]); 
     //   ++arr[0] ==> arr[0] = arr[0] + 1  
  
    //printf("%d ",arr[0]); 
    //printf("%d ",0[arr]); 
    //printf("%d",sizeof(arr[0])); // 4 
    //printf("%d",sizeof(arr));
    // 5 * 4 ==> 20 
    //printf("%d",sizeof(arr[-1]));

      printf("%d",arr[-1]);   
      /*    
            arr[-1]
            *(arr + -1)
            *(arr - 1 )
            *(100 - 1*4)
            *(100 - 4 )
            *(96) 
      */

    
    return 0;
}
