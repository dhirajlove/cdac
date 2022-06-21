#include<stdio.h> 
#include<string.h> 

int main()
{
    //char str1[20] = "SuNbeam"; 
    //char str2[20] = "Sunbeam"; 
    // if(str1==str2)
    //    printf("Same"); 
    // else 
    //    printf("Not same");  
    
     //char *str1 = "sunbeam";  
     //char *str2 = "sunbeam"; 
     // pointer to a string 

    //  if(str1==str2)
    //     printf("same");
    // else 
    //     printf("Not same");    
    
    //printf("%u ",str1); 
    //printf("%u ",str2); 

    //   char str3[10] = "Hello"; 
    //   int i = 0; 
    //   str3[i]='A'; 
    //   printf("%s",str3); //Aello     
    
    //   char *str3 = "Hello";  // RO data section 
    //   int i = 0; 
    //   //str3[i]='A';  // NOT OK 
    //   printf("%s",str3); //Runtime error      
    
         char str5[20] = "sunbeam"; 
         //printf("%s",str5);  

          printf(str5);
           
          printf("\n");
          printf(str5+1);
          
          printf("\n");
          printf(str5+2);


        return 0; 
}