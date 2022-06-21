#include<stdio.h> 
/*
    A  or a ==> Android 
    b  or B ==> Basic
    c or C  ==> C programming 
    d or D  ==> database  
*/
int main()
{
    
    char ch; 
    printf("Enter the character"); 
    ch = getchar( ); 
    
    switch (ch)
    {
        case 'a': 
        case 'A': 
        printf("A for Android");     
        break;
        
        case 'b': 
        case 'B': 
        printf("B for Basic");     
        break;
             
        case 'c': 
        case 'C': 
        printf("C for Cprogramming");     
        break;
        
        case 'd': 
        case 'D': 
        printf("D for Database");     
        break;

        default:
        printf("Invalid"); 
        break;
    }


    return 0;
}
