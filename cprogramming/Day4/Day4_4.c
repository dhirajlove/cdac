#include<stdio.h> 
#include<limits.h>

int main()
{   
    //signed 
    int num = -2147483648; 
    printf("%d",num);    
    // by default it is considered as a signed 
    // 65 binary ==> 32 bit   
    // size ==> 4 bytes 
    // size ==> 32 bits 


    //printf("%d\n",INT_MAX);//2147483647
    //INT_MAX ==> max range of  int 

    //printf("%d\n",INT_MIN);//-2147483648
    //INT_MIN ==> min range of int 

     /*
                int ==> 4 bytes 

                32 bit 
                1 bit ==> sign 
                ( 2 to the power 32 - 1 ) - 1
                ( 2 to the power 31 ) - 1 
                2147483648 - 1
                2147483647 ==> max range  
                -2147483648 ==> min range 

     */   


    return 0; 
}