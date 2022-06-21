#include<stdio.h>
void print_array(int arr[]); 
int main()
{
    
    
    int arr[5] = {1,2,3,4,5};  
    /*
            1    2    3    4    5 
           [0]  [1]  [2]  [3]  [4]  // index/subscript 
           100  104  108  112  116 
    */
    print_array(arr); // 100  
   
    return 0;
}

void print_array(int arr[]) 
{
        //printf("%d ",sizeof(arr)); 

        int i; 
        for ( i = 0; i < 5; i++)
        {
                //printf("%d ",arr[i]); // *(arr+i)
                //printf("%d ",*(arr+i));
                //printf("%d ",*(i+arr));  
        }
        
}

