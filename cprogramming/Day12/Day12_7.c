#include<stdio.h> 

int main()
{
    int num = 10;
    printf("%d\n",num); // state of the num 

    printf("%u\n",&num); // address of num 
    // address ==> positive 
    // %u ==> unsigned 
    // & ==> address of operator   
    return 0; 
}