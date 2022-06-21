#include<stdio.h> 
int main()
{
    
    // continue 
    // int i = 1; 
    // if(i==1)
    //  continue; //continue statement not within a loop

     int i; 

     for(i=1;i<=10;i++)
     {
         if(i%2==0)
           continue; 
        printf("%d",i); //1 3 5    
     }

    return 0;
}
