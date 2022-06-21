#include<stdio.h>

void print_array(int *ptr,int size); 
int main()
{
    
    
    int arr[5] = {1,2,3,4,5};  
    /*
            1    2    3    4    5 
           [0]  [1]  [2]  [3]  [4]  // index/subscript 
           100  104  108  112  116 
    */
    
    print_array(arr,5); 
    printf("\n After the updated \n");
    int i; 
    for ( i = 0; i < 5; i++)
    {
            printf("%d ",arr[i]); 
    
    }   
    return 0;
}


void print_array(int *ptr,int size) // array notation 
{
        
        
        int i; 
        for ( i = 0; i < size; i++)
        {
                printf("%d ",ptr[i]); 
        
        }
        for(i=0;i<size;i++)
        {
                ++ptr[i]; 
        }
        
}

