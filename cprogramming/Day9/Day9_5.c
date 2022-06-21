#include<stdio.h> 

int main()
{
    /*
        for(step1 ; step2 ; step4)
        {
                step3 
        }
    */
   // nested loop 
    int i; 
    int j; 
    int k; 
    /*                  J
        i=1         1,2,3,4,5 
        i=2         1,2,3,4,5
        i=3         1,2,3,4,5
        i=4         1,2,3,4,5
        i=5         1,2,3,4,5
    */
    // for(i=1;i<=5;i++)
    // {
    //     printf("For each i %d    ",i);     
    //     for(j=1 ; j<=5 ; j++) 
    //     {
    //         printf("  j: %d ",j); 
    //     }
    //     printf("\n\n"); 
    // }

    // for(i=1;i<=5;i++) // i = 3 
    // {
    //     printf("For each i %d    ",i);     
    //     for(j=1 ; j<=5 ; j++) // j =1,2,3,4,5  
    //     {
    //         printf("For each j %d    ",j);
    //         for(k=1;k<=5;k++) // k=1,2,3,4,5 
    //         {
    //             printf("  k: %d ",k); // 12345   
    //         }
    //         printf("\n\n"); 
    //     }
    //     printf("\n\n"); 
    // } 


        for(i=1;i<=5;i++); 
        
        
        
        {
            printf("For each i %d    ",i);//6        
            for(j=1 ; j<=5 ; j++);  
            
            
            
            
            
            {
                printf("  j: %d ",j); // 6 
            }
            printf("\n\n"); 
        }





    return 0; 
}
/*

    multiplication table 1 to 10 

    multiplication table within the range 
    upper range = 2 
    lower range = 5 

    *
    * *
    * * *  
    * * * * 
    * * * * * 
    
    *   *   *   *  *
    *   *   *   * 
    *   *   * 
    *   * 
    *  

    1
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 





*/