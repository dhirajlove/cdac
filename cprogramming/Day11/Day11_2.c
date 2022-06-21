#include<stdio.h>  


int main()
{
    int num,result; 
    printf("Enter the number");
    scanf("%d",&num); 

    int sqr( int  n ); //local function declaration 
    result = sqr( num ); // function call    

    printf("result = %d",result);    

    return 0;
}
int sqr( int n )
{
    int r; 
    r = n * n; 
    return r; 
}

// //int sqr( int n ); // function declaration 
// // compiler --> type checking 
// int sqr( int ); // global function declaration 
// int main()
// {
//     int num,result; 
//     printf("Enter the number");
//     scanf("%d",&num); 

//     result = sqr( num );   

//     printf("result = %d",result);    

//     return 0;
// }
// int sqr( int n )
// {
//     int r; 
//     r = n * n; 
//     return r; 
// }




// int sqr( int n )
// {
//     int r; 
//     r = n * n; 
//     return r; 
// }
// int main()
// {
//     int num,result; 
//     printf("Enter the number");
//     scanf("%d",&num); 

//     result = sqr( num );   

//     printf("result = %d",result);    

//     return 0;
// }


