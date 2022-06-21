#include<stdio.h> 

int main()
{
    //const
    const int num = 10; // variable decl + init  
    //num = 100;   // NOT OK
    printf("%d",num); 
    return 0; 
}

// int main()
// {

//     int num = 20; 
//     int *ptr = &num; 
//     int num2 = 200; 

//     printf("%d\n",num); //20
//     printf("%d\n",*ptr); //20

//     num = 100; 
//     printf("%d\n",num); //100
//     printf("%d\n",*ptr); //100

//     *ptr = 1000;  
//     printf("%d\n",num); 
//     printf("%d\n",*ptr);

//     ptr = &num2;     
//     return 0;
// }
