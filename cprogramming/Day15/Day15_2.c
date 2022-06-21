#include<stdio.h> 
int main()
{
    const int num = 10;  
    const int num2 = 50;  
    
    //const int *ptr = &num;
    //int const *ptr = &num;
    const int const *ptr = &num; 
//ptr is a non constant pointer pointing to constant int variable      
    
    
    printf("%d ",num); //10
    printf("%d ",*ptr); //10 
    //num = 100; // NOT OK   
    //*ptr = 1000; // NOT OK  

    ptr = &num2; 
    printf("%d ",num2); 
    printf("%d ",*ptr);
   
    return 0;
}
