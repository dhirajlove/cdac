#include<stdio.h> 

int main()
{
    // 2D array 
    int arr[3] [3]={1,2,3,4,5,6,7,8,9}; //2D array 

    /*
        arr
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

        //printf("%u ",*(arr+0)+1);
        //printf("%u ",*(*(arr+0)+1));    
    
          //printf("%u ",*(arr+1)+1);  
          //printf("%u ",*(*(arr+1)+1));    
   
        //printf("%u ",*(arr+2)+1);   
        //printf("%u ",*(*(arr+2)+1));


          printf("%u ",*(*(arr+0)+2));
          printf("%u ",arr[0][2]);
          //  arr[0][2] ==>  *(*(arr+0)+2)

          //printf("%u ",*(*(arr+2)+2));
        // arr[2][2] ==> *(*(arr+2)+2)

          //printf("%u",*(*(arr+1)+1));
          // arr[1][1] ==> *(*(arr+1)+1) 


    return 0;
}


