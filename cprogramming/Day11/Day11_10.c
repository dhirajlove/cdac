
#include<stdio.h> 

void sumpro( int a , int b); 

extern int ps,pp; // pure declaration 
int main()
{
    int x = 10 , y = 3;  // stack 
    sumpro(x,y); 
    printf("\n %d %d",ps,pp); 
    return 0; 
}

void sumpro( int a , int b)
{
        

        ps = a + b; // 13 
        pp = a * b; // 30     
} 
int ps,pp; 


// #include<stdio.h> 

// void sumpro( int a , int b); 

// extern int ps,pp; // pure declaration 
// int main()
// {
//     int x = 10 , y = 3;  // stack 
//     sumpro(x,y); 
//     printf("\n %d %d",ps,pp); 
//     return 0; 
// }
// int ps,pp; // global variable 
// void sumpro( int a , int b)
// {
        

//         ps = a + b; // 13 
//         pp = a * b; // 30     
// } 











// #include<stdio.h> 
// void sumpro( int a , int b); 

// /*
//     var declared inside the function ==> local variable 
//     var declared outside the function ==> global variable 
// */

// int main()
// {
//     int x = 10 , y = 3;  // stack 
//     sumpro(x,y); 
//     printf("\n %d %d",ps,pp); 
//     return 0; 
// }
// int ps,pp; // global variable 
// void sumpro( int a , int b)
// {
        

//         ps = a + b; // 13 
//         pp = a * b; // 30     

        

        
        
// } 
