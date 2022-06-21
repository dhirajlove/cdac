#include<stdio.h> 
int accept_num ( void ); 
void display ( int result  ); 
int addition( int num1 , int num2  ); 

// pass by value / call by value 
int main()
{
    
    int num1,num2; 
    int res; 

    num1 = accept_num ( );  //scan the 1st 
    num2 = accept_num ( );  //scan the 2nd  

    res = addition ( num1 , num2 );   

    display( res ); 
    
    return 0;
}
int addition( int num1 , int num2  )
{
        return num1 + num2; 
}

void display ( int result  )
{
    printf("%d",result); 
}
int accept_num ( void )
{
    int num; 
    printf("Enter the number"); 
    scanf("%d",&num); 
    return num; 
}
/*
        1. decide the name ==> accept_num( )
        2. will it return something 
                yes ==> ??? ==> int 
        3. int accept_num(  )
        4. int accept_num( void  )         

*/
/*
            display ==> printing the output 

            void display ( int result  )
            {
                    printf("%d",result); 
            }


*/

