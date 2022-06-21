#include<stdio.h> 
void sumpro( int a , int b); 
int main()
{

    auto int d;//auto indicates local variables 
    // ( in function variables ) --> auto --> optional 

    int c; //if not initialized -- its value is garbage(anything)
    // it is in stack 

    int a = 10 , b = 3; 
    //  a,b,c will be created when main is called      
    //  on main's FAR ( on stack )

    //sumpro( a , b); 
    //printf("\n %d %d",a,b); 
    //    actual argument are copied into formal argument   

    printf("c = %d",c); 
    
    {
                int  c = 10;
                printf("\n in block  c = %d",c);  // 10  
    }
    {
            int c = 5; 
            {
                int c = 50; 
                {
                    int  c = 500; 
                }
                
                printf("in another block : c = %d\n",c); 
            }
            printf("in another block : c = %d\n",c); 
    }

    // a,b,c will be destroyed 
    return 0;
}
//              10       3 
void sumpro( int a , int b)
{
             // a,b,ps,pp will be created when sumpro is called 
             // on sumpro's FAR ( on stack )        
        int ps,pp;   

        ps = a + b; // 13 
        pp = a * b; // 30     

        printf("sum = %d prod = %d",ps,pp); 

        a++; // modifying a in sumpro's FAR will not affect main's "a" var
        b++;  

        //a,b,ps,pp will be destroyed from the stack  

} 








