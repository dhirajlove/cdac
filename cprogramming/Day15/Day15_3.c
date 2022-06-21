#include<stdio.h> 

int main()
{
    int num = 10; 
    int num2 = 20; 
    int * const ptr = &num; // OK 
     //int * ptr const  = &num; // NOT OK 
      //int * const ptr ; // NOT OK 
      //ptr = &num; // NOT  OK   
//ptr is a constant pointer pointing to non const int variable 


    printf("%d ",num); //10 
    printf("%d ",*ptr); //10  
    num = 50; 
    printf("%d ",num); //50 
    *ptr = 150; 
    printf("%d ",num);  //150 
    printf("%d ",*ptr); //150 

    //ptr = &num2; 

    return 0; 
}