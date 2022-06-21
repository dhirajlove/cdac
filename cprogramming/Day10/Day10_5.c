#include<stdio.h> 
double addition( double x , double y  ); 
void multiplication ( double a , double b ) ; 
int division ( int num , int den); 
void subtraction ( void  ); 
int main( void )
{
    double num1 = 10.00 , num2 = 2.00;
    double res; 
    int num,den,ans; 

    res = addition( num1 , num2 ); //function call   
    printf("\n addition = %.2lf",res); 
    
    multiplication ( 2.0 , 4.0  ); // function call 
    
    printf("\n Enter the num and den"); 
    scanf("%d%d",&num,&den); // 4 2  

    ans = division ( num , den  );  // function call 
    //                4     2 

    printf("\n ans = %d",ans); 
    
    subtraction ( ); 
    
    return 0;
}
void subtraction ( void  )
{
        int p,q,r; 
        printf("\nEnter the values");
        scanf("%d%d",&p,&q); 

        r = p - q; 
        printf("\n result = %d",r); 

}

// function defination 
double addition( double x , double y  )
{
        double res; 
        res = x + y; 
        return res; 
}

void multiplication ( double a , double b ) 
{
        double c; 
        c = a * b; 
        printf("\n Result = %lf",c);
   //printing the result inside the function        
}


int division ( int num , int den)
{
        int  r ; 
        r = num / den; 
        return r; 
}

