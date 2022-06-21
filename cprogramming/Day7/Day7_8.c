#include<stdio.h>
/*
    I/P ==> char 
    char ==> uppercase , lowercase , digit , special char 
    ASCII 
    65 - 90 --> uppercase 
    97 - 122 --> lowercase 
    48 - 57 --> digit 
    special character     

*/
int main()
{
    char ch; 
    printf("Enter the character"); 
    ch = getchar( ); 
    //scanf("%c",&ch); // char scan  

    
    if(ch>=97 && ch<=122) 
           printf("Lower case"); 
    else 
    {
            
            if(ch>=65 && ch<=90)
                  printf("Uppercase");
            else 
            {
                  if(ch>=48 && ch<=57)
                       printf("Digit"); 
                  else 
                       printf("Special symbol");      
            }   
    }    






    return 0;
}
