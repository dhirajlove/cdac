#include<iostream> 

using namespace std; 

class A
{
    public: 
       void sum( void );   // declaration 
}; 
class B 
{
    private: 
        int num1; 
        int num2; 
    public: 
        B(void);  // declaration 
        friend void A ::sum( void ); 
}; 

B::B( void )
{
        this->num1 = 10; 
        this->num2 = 20; 
}

void A ::sum( void )
{
        B obj; 
        int result; 
        result = obj.num1 + obj.num2; 
        cout<<"Result   :   "<<result; 
}

int main()
{
    A obj;
    obj.sum( );  
}