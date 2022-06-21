#include<stdio.h> 
int main()
{
    int num  = 10; 
    int *ptr = &num; // referencing opr

    printf("%d\n",*ptr); // 10 
    /*
            *ptr
            valueat(ptr)
            valueat(100)
            10  
    */  
    *ptr = 20; 
    /*
            *ptr
            valueat(ptr) = 20
            valueat(100)

            valueat(100) = 20   
    */
    printf("%d\n",*ptr); // 20 

    *ptr = 30; 
    /*
            *ptr 
            valueat(ptr) = 30 
            valuat(100) 

            valueat(100) = 30  


    */
    printf("%d\n",*ptr); // 30  
    return 0;
}
