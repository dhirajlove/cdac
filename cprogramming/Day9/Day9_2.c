#include<stdio.h> 

// enum color 
// {
//     RED=1,BLUE=0,GREEN 
// };

// int main()
// {
//     //int color = 1;
//     enum color color  ;
//     printf("Enter the value");
//     scanf("%d",&color);     

//     switch (color) //2 
//     {
//     case RED:                   // case 1:  
//         printf("Red color"); 
//         break;

//     case BLUE:                  // case 0: 
//         printf("Blue color"); 
//         break;

//     case GREEN:                 // case 1: 
//         printf("Green color"); 
//         break;
//     }  
//     return 0;
// }
/*
       
*/

enum color 
{
    RED=1,BLUE,GREEN 
};

int main()
{
    
      

    //int color = 1;
    enum color color  ;
    // enum color ==> datatype 
    // color ==> variable-name 
    // datatype variable-name 
    printf("Enter the value");
    scanf("%d",&color);     

    switch (color) //2 
    {
    case RED:                   // case 1:  
        printf("Red color"); 
        break;

    case BLUE:                  // case 2: 
        printf("Blue color"); 
        break;

    case GREEN:                 // case 3: 
        printf("Green color"); 
        break;
    }  
    return 0;
}

// int main()
// {
//     int color = 1;

//     switch (color) //1 
//     {
//     case 1: 
//         printf("Red color"); 
//         break;
//     case 2: 
//         printf("Blue color"); 
//         break;
//     case 3: 
//         printf("Green color"); 
//         break;
//     }  
//     return 0;
// }
