#include<stdio.h> 
#include<limits.h> 

int main()
{
    unsigned int num = 4294967295;
    // unsigned ==> positive  
    printf("%u\n",UINT_MAX);
    // UINT_MAX ==> 4294967295
    // min range ==> 0 
    /*
            size = 4 
            4 byte ==> 32 bit 
            ( 2 to the power 32 ) - 1 
             4294967295

    */
    printf("%u",num); 
}

/*
        -100 
        int num; 
        

*/