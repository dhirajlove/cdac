#include<stdio.h> 
int main()
{
    
    int num1  = 10; 
    int *ptr = &num1; 
    int **pptr = &ptr; 
    
    //printf("%u ",&num1); // 100 
    //printf("%u ",ptr); //100   

    //printf("%u",*pptr); //100 
    /*
            *pptr 
            
            valueat(pptr)
            valueat(200)
            100 

    */ 
    printf("%d ",sizeof(ptr)); // 4
    printf("%d ",sizeof(pptr)); 
    return 0;
}
