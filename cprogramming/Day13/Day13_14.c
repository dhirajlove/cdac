#include<stdio.h> 
//int arr[5]; 
int main()
{
    
      

    int arr[5] = {10,20,30,40,50}; 
    
    
    /*
                0 to n-1 
                0 to 5-1
                0 to 4 
      arr 

             10    20    30    40     50
             [0]   [1]   [2]   [3]    [4]
             100   104   108   112   116 

        index/subscript 
    */

    int index; 

    for(index=0;index<5;index++)
    {
            printf("%u ",&arr[index]);
            printf("\n");  
    }

    // arr is the name of the array 
    // name of the array represents base address  
    printf("\n"); 
    printf("%u ",arr); //100  
    printf("%u ",&arr[0]); //100 
    printf("%u ",&arr); //100  
    return 0;
}
