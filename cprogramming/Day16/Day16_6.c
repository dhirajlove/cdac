#include<stdio.h> 
int main(int argc, char const *argv[])
{
    
    // argc ==> argument count 
    // argv ==> argument vector 

    printf("%d",argc);   
    int i; 
    for(i=0; i < argc; i++)
            puts(argv[i]); 
    
    return 0;
}


