#include<iostream> 

using namespace std; 

class Test 
{ 
    int num1; 
   protected:
    int num2;
    Test( void )
    {
        this->num1 = 10;
        this->num2 = 20;
    }
    friend void print( void ); 
    
}; 

// Global function 
void print( void )
{
    Test t1; 
    cout<<"Num1 :   "<<t1.num1<<endl;
    cout<<"Num2 :   "<<t1.num2<<endl;
    
}

// non member / global function 
int main()
{
    ::print( ); 
    return 0; 
}

