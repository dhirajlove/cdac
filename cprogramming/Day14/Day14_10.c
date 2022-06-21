#include<stdio.h>
void print_array(int arr[]); 
void scan_array(int *ptr) ; 
int main()
{
    
    
    int arr[5] = {1,2,3,4,5};  
    /*
            1    2    3    4    5 
           [0]  [1]  [2]  [3]  [4]  // index/subscript 
           100  104  108  112  116 
    */
    scan_array(arr); 
    print_array(arr); 
   
    return 0;
}

//void scan_array(int arr[])  // array notation 
void scan_array(int *ptr)  // pointer notation 
{
        

        int i; 
        for ( i = 0; i < 5; i++)
        {
                scanf("%d",&ptr[i]); 
        
        }
        
}
void print_array(int arr[]) // array notation 
{
        
        
        int i; 
        for ( i = 0; i < 5; i++)
        {
                printf("%d ",arr[i]); // *(arr+i)
        
        }
        
}

