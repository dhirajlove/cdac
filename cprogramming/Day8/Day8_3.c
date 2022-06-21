#include<stdio.h> 


int main()
{

        int choice = 1; 

        switch (choice)
        {
        case 1: 
            printf("One");     
            break;
        
           case 0 && 1:   //   case 0: 
           printf("Two"); 
           break;    
        
        default:
            break;
        } 

        // int num = 1; 

        // switch( num++ )
        // {
        //     case 1: 
        //     printf("One"); 
        //     break; 

        //     case 2:
        //     printf("Two");  
        //     break; 
        // }

    //  char ch = 'A'; 

    //  switch(ch)
    //  {
    //      case 'A':              //case 65:  
    //      printf("A"); 
    //      break; 

    //      case 65:               //case 65: 
    //      printf("B"); 
    //      break; 
    //  }


    // switch(1)
    // {
    //     case (int)1.5:
    //     printf("One");
    //     break; 

    //     case 3: 
    //     printf("Three");    
    
    // }

}



// int main()
// {
//     int num; 
//     printf("Enter the num"); 
//     scanf("%d",&num); 

//     // switch(num)
//     // {
//     //     case 1:
//     //     printf("One and two");
//     //     break; 

//     //     case 1: // NOT OK  
//     //     printf("Three");    
    
//     // }


//     // switch(num)
//     // {
//     //     case 1:
//     //     case 2:
//     //     printf("One and two");
//     //     break; 

//     //     case 3: 
//     //     printf("Three");    
    
//     // }

//     // switch(num)
//     // {
//     //     case 1:case 2:
//     //     printf("One and two");
//     //     break; 

//     //     case 3: 
//     //     printf("Three");    
    
//     // }
//     return 0; 
// }