#include<stdio.h> 

int main()
{
    /*
        sizeof==> size ==> int 
    */
    char ch; 
    // printf("%d ",sizeof(10));
    //  //10 ==> int ==> 4  
    // printf("%d ",sizeof('A'));// char const ==> int
    //  // 'A' ==> 65 ==> sizeof(65) ==> int ==> 4 byte 
    // printf("%d ",sizeof(ch)); //variable ==> char ==> 1 

    // printf("%d ",sizeof(12.33)); //8 
    // // 12.33 ==> constant ==> double ==> 8  
    // printf("%d ",sizeof(12.33f)); //4
    // // 12.33f ==> float ==> 4   


        // printf("%d ",sizeof(10l)); // long ==> 4 
        // printf("%d ",sizeof(10L)); // long ==> 4
        // printf("%d ",sizeof(10LL));// long long ==> 8 
        // printf("%d ",sizeof(10ll));// long long ==> 8 

        //printf("%d ",sizeof(12u)); //4 
        //printf("%d ",sizeof(12U)); //4 

        // printf("%d ",100); // int
        // printf("%d ",0100); // octal 
        // // octal to decimal 
        // printf("%o ",0100); // octal 
        // // octal to octal 

        //printf("%d ",0x23);
        // hexadecimal to decimal  
        //printf("%x ",0x23);

        
    return 0; 
}
