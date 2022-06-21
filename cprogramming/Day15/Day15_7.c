#include<stdio.h> 
int main()
{
    // string literals 

    char str4[5]="Tech";
    /*
        Tech is a string constant / literal 
       short hand decl ==> 'T' 'e' 'c' 'h' '\0' 
    */ 

    char str5[] ="Ketan";
    /*
            'K' 'e' 't' 'a' 'n' '\0' 
            5 + 1('\0')
    */ 
    //printf("%d",sizeof(str5)); 
   
    char str6[4] = "Pune";
    // it is just a char array  

   int i; 
//    for(i=0;str4[i]!='\0';i++)
//         putchar(str4[i]); 

    //    for(i=0;str5[i]!='\0';i++)
    //     putchar(str5[i]); 
    for(i=0;i<4;i++)
        putchar(str6[i]); 
    printf("\n %d",sizeof(str6)); 

    return 0;
}
