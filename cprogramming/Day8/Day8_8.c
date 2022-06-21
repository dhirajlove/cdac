#include<stdio.h> 
int main()
{
    // Exit controlled loop 

    // do-while 
    int choice;  
    do
    {
         printf("Enter the choice"); 
         scanf("%d",&choice); 
    
    }while(choice>=1 && choice<=10);   

    printf("loop exited"); 
    return 0;
}
