#include<stdio.h> 
#include<stdlib.h> 

int main( )
{
    FILE *fptr;
    char ch; 

    if( (  fptr = fopen("sunbeam.txt","r")) == NULL)
    {
            printf("Error opening the file"); 
            exit(1);    
    }
    

    while( ( ch = fgetc(fptr))!=EOF)
            printf("%c",ch);  

    fclose(fptr); 
    return 0; 
}
