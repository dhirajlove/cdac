#include<stdio.h> 

int main()
{
    int num = 10; // variable decln + intialization 
    char ch = 'A';// variable decln + intialization
    double dvar = 12.33; // variable decln + intialization        

    // variable declaration + init ==> only once 
    //printf(); // is used to print data/string 

    // format specifier 
    // num ==> int ==> %d
    // %d ==> decimal integer 
    printf("num = %d\n",num);
    //      num = 10
    // \n ==> newline

    printf("char = %c\n",ch);
    //      char = A

    printf("double = %lf",dvar);
    //      double = 12.33 



    return 0;


}


