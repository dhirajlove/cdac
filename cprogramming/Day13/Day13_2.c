#include<stdio.h> 

int main()
{
    int num1 = 10; 
    int *ptr = &num1; // referencing 

    // int ***ppptr; 
    int **pptr = &ptr; // referencing   
    // pointer to pointer 
    // pptr is a pointer which is storing the address 
    // of pointer to a integer 

     printf("num1 = %d\n",num1); //10 
     printf("&num1 = %u\n",&num1); //100 
     printf("&ptr = %u\n",&ptr); //200 // address of pointer 
     printf("ptr = %u\n",ptr); //100 // address of num 
     printf("&pptr = %u\n",&pptr); //300 // add of pointer ot pointer 
     printf("pptr = %u\n",pptr); //200 // Address of pointer to  pointer 
    

    return 0; 
}