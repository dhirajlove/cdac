#include<stdio.h> 
//int arr[5]; 
int main()
{
    //int num1,num2,num3,num4,num5;
      

    //int arr[5] = {10,20,30,40,50}; // array declare  
    //int arr[5] = {10,20,30}; // partially init    
    //int arr[5]; // local    
      //int arr[]; // NOT OK 
    int arr[] = {1,2,3,4,5};   
    
    /*
                0 to n-1 
                0 to 5-1
                0 to 4 
      arr 

             10    20    30    40     50
             [0]   [1]   [2]   [3]    [4]
             100   104   108   112   116 

        index/subscript 
    */

    int index; 

    for(index=0;index<5;index++)
    {
            printf("%d ",arr[index]); 
    }

    return 0;
}
