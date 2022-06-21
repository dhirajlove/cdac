#include<stdio.h> 
int main()
{
    int *iptr; 
    char *cptr; 
    double *dptr; 
    float *fptr;

    printf("%d %d\n ",sizeof(iptr),sizeof(cptr));  
    printf("%d %d ",sizeof(dptr),sizeof(fptr));  
    /*
                32 bit compiler ==> 4 bytes 
                64 bit compiler ==> 8 bytes 
    */
    return 0;
}
