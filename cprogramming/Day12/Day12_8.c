#include<stdio.h> 

int main()
{
    int num = 10;
    int *ptr;// declaration of the pointer
    // ptr will store the address 
    // address of integer  ==> pointer ==> int      
    // ptr is a pointer to a integer 

    ptr = &num; // referencing operation 

   // printf("%d\n",num); // state of the num 
   // printf("%u\n",&num); // address of num 
   // printf("%u\n",&ptr); // address of pointer 
   // printf("%u\n",ptr);  //state of ptr => address of num 
    
    /*
            * ==>value-at operator 
            * ==> indirection operator 
    */
    printf("%d",*ptr); // 10  // dereferencing operation 
    /*
            *ptr
            valueat(ptr)
            valueat(100)
            10 


    */ 
    return 0; 
}