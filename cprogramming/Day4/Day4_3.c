#include<stdio.h> 

int main()
{
    int num = 10;
    // binary of 10 is getting stored internally
    // num is getting some space internally 
    // num ==> size   
    double dvar = 12.33; 
    char ch = 'A'; 
    float fvar = 12.33f; 

    // sizeof() => operator 
    // sizeof gives you the size in bytes 

    // sizeof will return the output in integer format 
    // integer ==> %d
    // sizeof ==> %d

    printf("%d\n",sizeof(num)); // 4 
    // 4 bytes 
    // num = 10
    // binary of 10 is getting stored in 4 bytes 
    // binary of 10 is getting stored in 32 bits  
    printf("%d\n",sizeof(dvar)); // 8 
    // double ==> 8 bytes 

    printf("%d\n",sizeof(fvar)); // 4 
    // float ==> 4 bytes 
    printf("%d\n",sizeof(ch)); // 1 

    return 0; 
}

/*
        Number system 
        Binary number 
        octal 
        hexadecimal 

        1s compliment 
        2s compliment 

        binary addition 


*/