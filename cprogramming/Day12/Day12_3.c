#include<stdio.h> 
//register int z = 200; 
int main()
{
    register int i; 
    //storage ==> cpu register ( fast accessible)
    //printf("%d",i); // Garbage
    {
            register int i = 100;
            printf("%d",i); // 100 
    } 
    int x; // local / auto ==> stack ==> process ==> RAM 
    register int y; 
    //printf("%u",&y);  // NOT OK  
  
    register z = 100;  
    printf("\n %d",z); 
    return 0; 
}
