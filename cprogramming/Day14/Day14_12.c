#include<stdio.h>
int main()
{
    
    
    int num = 10; 
    int *ptr = &num;  // referencing operation 

    // calling convention 
    // cdecl ==> right to left 

    printf("%d %d",num,++*ptr); 
    
        
    


    
     
         
    
    return 0;
}
