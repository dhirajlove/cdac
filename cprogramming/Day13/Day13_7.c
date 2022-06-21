#include<stdio.h> 

int main( )
{
    int num  = 10; 
    int *ptr = &num; 
    
    printf("%u ",ptr); //100  
    
    //printf("%d ",*ptr); // 10 
    
    // ptr++;  
    ptr = ptr + 1;  
    //    100 + 1
    //    100 + 1 * 4 
    //    104  
    //printf("%u",ptr);   //104 
    //printf("%d",*ptr); 
    
    ptr = ptr - 1;  
    //    104 - 1 
    //    104 - 1 * 4 
    //    104 - 4 
    //    100     
    printf("%d",*ptr);   
    return 0; 

}

  // ptr = ptr + 1 
//       ptr + 1 * scalefactor of ptr 