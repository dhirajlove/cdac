#include<stdio.h> 
int main()
{
    int num = 10; // 4 bytes 
    char ch ='A'; // 1 byte 
    float fvar = 12.33; // 4 bytes 

    int *ptr = &num; 
    char *cptr = &ch; 
    float *fptr  = &fvar;  

    printf("%d ",*ptr);
    // *ptr ==> valueat(100) ==> 10 
    printf("%c ",*cptr);
    // *cptr ==> valuar(200) == 'A' 
    printf("%.2f ",*fptr);
    // *fptr ===> valueat(300) ==> 12.33  
   
    return 0;
}
