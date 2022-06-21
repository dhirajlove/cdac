#include<stdio.h> 
void sumpro( int a , int b); 
int ps,pp; // global variable 
// ps pp are allocated in datasection 
// scope --> program 
// life  --> program  

int main()
{
    int x = 10 , y = 3; 
    printf("\n %d %d ",ps,pp);  // 0 0 
    sumpro(x,y); 
    printf("\n %d %d",ps,pp); 
    return 0; 
}
void sumpro( int a , int b)
{
        

        ps = a + b; // 13 
        pp = a * b; // 30     

        

        
        
} 

// #include<stdio.h> 
// void sumpro( int a , int b); 
// int main()
// {
//     int x = 10 , y = 3; 
//     sumpro(x,y); 
//     //printf("%d %d",ps,pp); 
//     return 0; 
// }
// void sumpro( int a , int b)
// {
//         int ps,pp;   

//         ps = a + b; // 13 
//         pp = a * b; // 30     

//         printf("sum = %d prod = %d",ps,pp); 

        
//         //a,b,ps,pp will be destroyed from the stack  
// } 