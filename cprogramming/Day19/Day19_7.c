#include<stdio.h> 
#include<stdlib.h> 

int main( )
{
    FILE *fptr;
    char ch; 

    if( (  fptr = fopen("sunbeam.txt","w")) == NULL)
    {
            printf("Error opening the file"); 
            exit(1);    
    }
    printf("Enter the text: \n"); 

    while( ( ch = getchar())!=EOF)
            fputc(ch,fptr); 

    fclose(fptr); 
    return 0; 
}
