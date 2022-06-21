#include<stdio.h> 

int main()
{
    // 2D array 
    int arr[3] [3]={1,2,3,4,5,6,7,8,9}; //2D array 

    /*
                [0]     [1]    [2]
        
        [0]      1       2      3   
                100     104     108 

        [1]      4       5       6 
                112     116     120 

        [2]      7       8       9 
                124     128     132  
    
    */
        int row,col; 

        for(row=0;row<3;row++)
        {
              for(col=0;col<3;col++)
              {
                  printf("%u ",&arr[row][col]); 
              }  
              printf("\n"); 
        }
        printf("\n"); 

        //printf("%u ",arr);
        //printf("%u ",*arr);  

       
         //printf("%u ",arr+1);
         //printf("%u ",*(arr+1)); 



        //printf("%u ",arr+2);
        //printf("%u ",*(arr+2)); 
          
        //   printf("%d ",arr[0]); // *(arr+0)  
        //   printf("%d ",arr[1]); // *(arr+1)
        //   printf("%d ",arr[2]); // *(arr+2)    

        
    return 0;
}

//int arr[3][3] = {1,2,3}; 
// int arr[3] = {1,2,3} ==> arr[1]==>arr[2]==>*(arr+1)

// arr[0][1]

