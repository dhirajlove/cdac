#include<stdio.h> 
int main()
{
    // , ==> comma operator

    //int a = 1,2,3; // NOT OK 
    int a; // variable declaration 
    //a = 1; // assignment    

     //a = 1,2,3,56; 
     //a = (1,2,54,3);

     
     a = ( (1,2) , 3);
    //   ( 2  , 3 )
    //      3 

     printf("%d",a);    
    
    return 0;
}
