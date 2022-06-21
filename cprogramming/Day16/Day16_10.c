#include<stdio.h> 

int main()
{
    // 2D array 
    int arr[][4]={1,2,3,4,5,6,7,8,9}; //2D array 
    
    
      /*           [0]    [1]    [2]    [3]     
           [0]      1      2      3      4 

           [1]      5      6      7      8

           [2]      9      0      0      0    


      */  

        printf("%u ",arr); //base address 
        printf("%u ",&arr[0][0]); //base address 

        printf("\n"); 
       int row,col; 

        for(row=0;row<3;row++)
        {
              for(col=0;col<4;col++)
              {
                  printf(" %4d  ",&arr[row][col]); 
              }  
              printf("\n"); 
        }
  

   
        // int row,col; 

        // for(row=0;row<3;row++)
        // {
        //       for(col=0;col<4;col++)
        //       {
        //           printf("%4d",arr[row][col]); 
        //       }  
        //       printf("\n"); 
        // }
   
    return 0;
}
