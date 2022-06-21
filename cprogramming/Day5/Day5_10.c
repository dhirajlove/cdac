#include<stdio.h> 
int main()
{
//     int num1 = 2;
//     int num2 = 2; 
//     int num3 = 1; 
//     float avg;  

//     avg = ( num1 + num2 + num3 ) / 3;
//     // LHS ==> Float  
//     /*
//             (int + int + int) / ( int ) 
//                ( int ) / ( int )
//                 ( int ) 

//             RHS ==> 1.66   
//             RHS ==> int ==> 1.66 
//             1.66  ==> 1 
//             RHS ==> 1 
//             LHS ==> float 
//             RHS ==> int 
//             float  = int
//             int ==> 1 
//             float ==> 1.00  
//             1 ==> 1.00  

//     */      
//    /*       
//             double 
//             float 
//             int 
//             char 
//    */
//     printf("%f",avg); 
    
//     int num1 = 2;
//     int num2 = 2; 
//     int num3 = 1; 
//     float avg;  

//     avg = ( num1 + num2 + num3 ) / 3.0;
//     // LHS ==> Float  
//     /*
//             (int + int + int) / ( double )
//                 (int ) / ( double )
//                 (double)
//                 1.66 ==> double 
//           LHS ==> float 
//           RHS ==> double       
//     */      
//    /*       
//             double 
//             float 
//             int 
//             char 
//    */
//     printf("%f",avg); 
    
//     int num1 = 2;
//     int num2 = 2; 
//     int num3 = 1; 
//     float avg;  

//     avg = ( num1 + num2 + num3 ) / 3.0f;
//     // LHS ==> Float  
//     /*
//             (int + int + int) / ( float ) 
//                ( int ) / ( float )
//                 ( float ) 

//             RHS ==> 1.66   
//             RHS ==> int ==> 1.66 
//             LHS ==> float 
//             RHS ==> float 
//             float  = float
            
            
            

//     */      
//    /*       
//             double 
//             float 
//             int 
//             char 
//    */
//     printf("%f",avg); 
    
    // mixed arithmatic in C  


    int num1 = 2;
    int num2 = 2; 
    int num3 = 1; 
    float avg;  

    avg = ( (float)num1 + num2 + num3 ) / 3;
    // LHS ==> Float  
    /*
            (float + int + int) / ( int ) 
               ( float ) / ( int )
                ( float ) 

            LHS ==> float 
            RHS ==> float 
        
            
            

    */      
   /*       
            double 
            float 
            int 
            char 
   */
    printf("%f",avg); 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     return 0;
}
