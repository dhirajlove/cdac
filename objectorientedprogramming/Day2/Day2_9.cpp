#include<stdio.h> 

namespace na 
{
    int num1 = 10; 
}

namespace nb 
{
    using namespace na; 
    void showRecord( )
    {
        printf("num1    :   %d\n",num1);
    }
    void printRecord( )
    {
        printf("num1    :   %d\n",num1);
    }
    void displayRecord( )
    {
        printf("num1    :   %d\n",num1);
    }
}


int main()
{
        // nb::showRecord( ); 
        // nb::printRecord( ); 
        // nb::displayRecord( );  
        using namespace nb; 
        printRecord( ); 
        showRecord( ); 
        displayRecord( ); 

        return 0; 
}

