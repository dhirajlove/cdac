#include<stdio.h> 
int main()
{
    //int num = 10; 
    //printf("%d",num); //10 
    
    //width specifier ==> output formatting 

    //printf("%10d",num); // right justified   
    //                   1 0   
    // - - - - - - - - - - -

    //printf("%-10d",num); //  left justified 
    // 1 0 
    // - - - - - - - - - -   

     //printf("%010d",num); // Right justified 
     // 0 0 0 0 0 0 0 0 1 0 
     // - - - - - - - - - - 

        // double or float 

      float fvar = 14.50; 

      //printf("%f",fvar);    

       // printf("%6.2f",fvar); 
        // 6 ==> 6 columns wide 
        //.2 ==> upto 2 
        
        //   1 2 . 5 0
        // - - - - - - 

        //printf("%-6.2f",fvar);         
        /*
                1 2 . 5 0 
                - - - - - - 
        */  
       //printf("%.3f",fvar);         

        printf("%.4f",fvar);         

    return 0;
}

