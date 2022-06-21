#include<stdio.h> 

int main()
{
    // shift operator 
    // left shit and right shift ( <<  , >> )

    int ans; 
    //ans = 10 << 2 ; 
    /*
            0000 1010

                <<2 
            0010 1000
            decimal ==> 40 
    */
    /*
            left shift 
            multiply by 2 to the power n

            10 * 2 to the power 2 
            10 * 4 
            40  

    */
    ans = 10 >> 2 ;
    /*      
            binary of 10 
            0000  1010 

               >>2
            
            0000 0010  
            decimal ==> 2 


    */ 
    /*
                  right shift 
            divide by 2 to the power n

            10 / 2 to the power 2 
            10 / 4 
            2  


    */ 
    printf("%d",ans); 

    return 0; 
}