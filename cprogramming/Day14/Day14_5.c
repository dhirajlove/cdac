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
    // int *ptr = &arr[0]; 

   // printf("%u ",ptr); // 100 
   // printf("%u ",arr); // 100 
    
    printf("%u ", ptr); // 100 

    printf("%u ", ptr+1);//104  
    /*
                ptr + 1 
                100 + 1 
                100 + 1 * 4 
                104 

    */
   printf("%u ", ptr+2);
   /*   
            ptr + 2 
            100 + 2 
            100 + 2 * 4 
            100 + 8 
            108 
   */
  printf("%u ", ptr+3); // 112 
  printf("%u ", ptr+4); // 116 

  int i; 
  printf("\n"); 
  for(i=0;i<5;i++)
  {
      printf("%u ", &arr[i]); 
  } 
    return 0;
}
