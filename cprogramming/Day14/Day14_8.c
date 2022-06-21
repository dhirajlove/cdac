#include<stdio.h>
int main()
{
    // Array index starts from 0 
    // 0 to n - 1  
    
    
    int arr[5] = {11,22,33,44,55};  

    
    /*
        arr 
            11   22   33  44   55 
           [0]  [1]  [2]  [3]  [4]  // index/subscript 
           100  104  108  112  116 
    */
    int *ptr = arr;

    printf("%d\n",*ptr); // 11  
    
    printf("%d\n",++*ptr); // 12
    /*      
            ++*ptr ==> 
            *ptr ==> 11 
            ++(*ptr) ==> 12    
    */   

    printf("%d\n",arr[0]); 

    printf("%d\n",*++ptr);
    /*
            *++ptr
            ++ptr ==> ptr + 1 ==> ptr + 1 * 4
                              ==> ptr + 4 
                              ==> 100 + 4 
                 ptr       ==> 104  
        *ptr ==> *(104) ==> 22 
    */ 
    //printf("%d\n",*ptr); // 22
    
      printf("%d\n",*ptr++); 
      /*
            *ptr++ 

            *ptr ==> 1st part ==> 22 
            ptr++ ==> 2nd part  
      */   
      printf("%d\n",*ptr); 

    // ++*ptr++ 
    return 0;
}

