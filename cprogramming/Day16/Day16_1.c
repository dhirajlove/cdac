#include<stdio.h>
#include<string.h>
char* mystrcpy(char *dest, const char *src); 
int main()
{
    char src[50] = "Hello";
    char dest[50]; 

    mystrcpy(dest,src);

    puts("Destination string is "); 
    puts(dest);  

    return 0; 
}
// H e l l o \0  ==> src 
// H e l l o \0  ==> dest 
char* mystrcpy(char *dest, const char *src)
{
        int i  = 0; 

        while(src[i]!='\0') 
        {
               dest[i] = src[i]; 
               i++;  
        }

        dest[i] = '\0';     

        return dest; 


}













// int main()
// {
//     char src[50] = "Hello";
//     char dest[50]; 

//     strcpy(dest,src);

//     puts("Destination string is "); 
//     puts(dest);  

//     return 0; 
// }














// int mystrlen(const char *s); 
// int main()
// {
//     char name[50] = "Reader"; 
//     int result; 
//   //  result = strlen(name);
//       result = mystrlen( name ); 
    
//     printf("%d",result);  
//     return 0;
// }  
// // R e a d e r \0  
// int mystrlen(const char *s)
// {
//         int i = 0 ;
//         while(*(s+i)!='\0') 
//         {
//                 i++; 
//         }  

//     return i; 
// }
