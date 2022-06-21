#include<stdio.h> 

int main()
{
    int num1 = 50; 
    int num2 = 70; 

    int *ptr = &num1; // referencing operation

    printf("%d ",num1); //50 
    printf("%d ",*ptr);// 50
    // *ptr ==> valueat(ptr) ==> valueat(100) ==> 50   

    ptr = &num2; 
    
    printf("%d ",num2); //70 
    printf("%d ",*ptr);// 70
    // *ptr = valueat(ptr) ==> valueat(200) ==> 70 
    return 0; 


}