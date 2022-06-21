#include<stdio.h> 
/*
        Infection count 
        if infection count is >=1000 ( impose the lockdwon )

        1.Declare the variable 
        2.Input the infection count 
        3.Condition check   
            a. True (>=1000) 
                   lockdown  
            b. False 
                    not a lockdown  
        4. exit        

       >= ==> relational operator 
       1  ==> True 
       0  ==> false     

*/


int main()
{

      int count; 
      // variable declaration 

      printf("Enter the count"); 
      scanf("%d",&count);// 900    

      //if infection count is >=1000 ( impose the lockdwon )

      //condition true ==> non-zero   

       if(count>=1000) // 900>=1000 ==> 0 
    // if(0)
    // if(false)  
       {
            printf("Impose the lockdown"); 
       }
       else 
       {
            printf("No  lockdown"); 
       }

    
    
    return 0;
}

// int main()
// {

//       int count; 
//       // variable declaration 

//       printf("Enter the count"); 
//       scanf("%d",&count);// 2000    

//       //if infection count is >=1000 ( impose the lockdwon )

//       //condition true ==> non-zero   

//        if(count>=1000) // 2000>=1000 ==> 1 
//     // if(1)
//     // if(true)  
//        {
//             printf("Impose the lockdown"); 
//        }

    
    
//     return 0;
// }

/*
            True ==> any non zero value 
            False ==> zero 

             condition                   
        if (it is raining) 
               carry the raincoat  
        else 
                dont carry the raincoat 


        if (it is raining) 
               carry the raincoat  
                
    */

