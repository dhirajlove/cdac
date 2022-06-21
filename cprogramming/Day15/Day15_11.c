#include<stdio.h> 
#include<string.h>  


 
int main()
{
    char str1[] = "Sunbeam Infotech"; 
    //Sunbeam Infotech\0 

    char *str2 = "Sunbeam Infotech";

    char str3[] ="Sunbeam\0Infotech";
    // Sunbeam\0Infotech\0 

 //   printf("sizeof(str1)=%d\n",sizeof(str1)); //17 
 //   printf("sizeof(str2)=%d\n",sizeof(str2)); //4 or 8 
 //   printf("sizeof(str3)=%d\n",sizeof(str3)); //17  

   //   printf("strlen(str1) = %d\n",strlen(str1));
   //   printf("strlen(str2) = %d\n",strlen(str2));
   //   printf("strlen(str3) = %d\n",strlen(str3));   
//strlen ( ) ==> is a function that count number of char 
// until \0 is encountered    
    
    //  printf("%s",str1); 
    //  printf("%s",str2); 
        printf("%s",str3);  

    return 0; 
}