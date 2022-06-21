#include<stdio.h> 
int main()
{
    //int num1,num2,num3,num4,num5;
      

    int arr[5] = {10,20,30,40,50}; // array declare  
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

    //10 ==> arr[0]
    //50 ==> arr[4]

    //  printf("%d ",arr[0]); // 10 
    //  printf("%d ",arr[1]); // 20   
    //  printf("%d ",arr[2]); // 30
    //  printf("%d ",arr[3]); // 40
    //  printf("%d ",arr[4]); // 20
    int index; 

    for(index=0;index<5;index++)
    {
            printf("%d ",arr[index]); 
    }

    return 0;
}
