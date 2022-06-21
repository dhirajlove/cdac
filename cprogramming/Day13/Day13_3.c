#include<stdio.h> 

int main()
{
    int num1 = 10; 
    int *ptr = &num1; // referencing 

    // int ***ppptr; 
    int **pptr = &ptr; // referencing   

    printf("%d ",num1); //10 
    printf("%d ",*ptr); // 10 
    // *ptr ==> valueat(ptr) ==> valueat(100) ==> 10 

    printf("%d ",**pptr);//10 
    /*
            **pptr 
            valueat(valueat(pptr))
            valueat(valueat(200))
            valueat(100)
            10 
    */ 
    **pptr = 1000 ;
    /*
            **pptr

            valueat(valuat(pptr)) = 1000

            valueat(valueat(200))
            valueat(100)

            valueat(100)  ==> 1000 


    */
    printf("\n"); 
    printf("%d ",num1); //1000
    printf("%d ",*ptr); //1000  
    printf("%d ",**pptr); //1000    

    return 0; 
}