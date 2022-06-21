#include<stdio.h> 
#include<limits.h> 
int main()
{
    char ch = 127; 
    // by default signed 
    
    printf("%d\n",CHAR_MAX);// 127 max range of char 
    printf("%d\n",CHAR_MIN);// -128 min range of char  
    /*
            range ==> size 

            size = > 1 byte 
            1 byte ==> 8 bit

            ( 2 to the power 8 - 1 ) - 1 
            ( 2 to the power 7 ) - 1
            128 - 1 
            127  ==> max range 
            -128 ==> min range   

    */
   /*
                unsigned char ch; 
                char ==> 1 byte 
            ( 2 to the power 8  ) - 1
            256 - 1 
            255 
            max range ==> 255 
            min range ==> 0  

   */
    
    return 0;
}
