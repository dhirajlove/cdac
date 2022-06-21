#include<stdio.h> 
void printchar(char ch); 
int main()
{
    
    char ch ='A'; 
    printchar( ch ); //function call 

    return 0;
}

// ch ==> 'A' 
void printchar(char ch)
{
    printf("character is %c",ch); 

}
//printchar functn is not returning any value 