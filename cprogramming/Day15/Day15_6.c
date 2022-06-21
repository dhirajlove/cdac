#include<stdio.h> 

int main()
{ 
    
    // init list 
    char str1[5] ={'A','B','C','D','E'};
    /*
             A   B   C   D   E 
            [0] [1] [2] [3] [4]
            100 101 102 103 104 
    */
    // 5 char array ==> 5 bytes 
    
    char str2[5] = {'a','b','c','d','\0'}; 
    //5 char array terminating with \0 char =string  
    
    char str3[5] = {'I','N','F','O'}; 
    // 5 char array terminating with \0 char = string 
    // when array is init partially at the point of declaration 
    // rest elements are init to 0 
    /*
            I   N   F   O  \0
           [0] [1] [2] [3] [4] 
    */ 

    char str4[] = {'S','u','n','b','e','a','m'};
    // array of 7 chars ==> 7 bytes  

    int i; 

    // for(i=0;i<5;i++)
    //     putchar(str1[i]); 
    
    // for(i=0;str2[i]!='\0';i++)
    //     putchar(str2[i]); 
    
    // for(i=0;str3[i]!='\0';i++)
    //     putchar(str3[i]); 
    
    for(i=0;i<7;i++)
        putchar(str4[i]); 
        
    
    return 0; 
}