#include<stdio.h> 

namespace na 
{
    int num1 = 10; 
}
using namespace na; 

void showRecord( )
{
    //using namespace na; 
    printf("num1    :   %d\n",num1);
    
    //printf("num1    :   %d\n",na::num1);
}
void printRecord( )
{
    
    //using namespace na; 
    printf("num1    :   %d\n",num1);
    
    //printf("num1    :   %d\n",na::num1);
}

void displayRecord( )
{
    
    //using namespace na; 
    printf("num1    :   %d\n",num1);
    
    //printf("num1    :   %d\n",na::num1);
}

int main()
{
        ::showRecord( ); 
        ::printRecord( ); 
        ::displayRecord( );  
        return 0; 
}

