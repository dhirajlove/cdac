#include<stdio.h> 

// I/P a  ammount 
// if ammount is greater than 5000 give 10% discount 
// >= ==> relational opr  
int main()
{
    // variable declaration 
    double ammount,discount; 

    printf("Enter the ammount"); 
    scanf("%lf",&ammount);//5000.00 

    if(ammount>=5000)// if(1)
        ammount = ammount * 0.90; 
    
    printf("Total ammount = %lf",ammount); 


    return 0;
}


// int main()
// {
//     // variable declaration 
//     double ammount,discount; 

//     printf("Enter the ammount"); 
//     scanf("%lf",&ammount);//5000.00 

//     if(ammount>=5000)// if(1)
//     {
//          discount = ammount * 0.10;
//          ammount = ammount - discount;         
//     }
//     printf("Total ammount = %lf",ammount); 


//     return 0;
// }
