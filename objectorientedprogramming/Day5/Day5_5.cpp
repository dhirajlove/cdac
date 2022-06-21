#include<iostream> 

using namespace std; 

class A
{
     
    public:
    void sum( void ); // declaration 
    void sub( void ); // declaration 
    void multiplication ( void ); // declaration 
};
class B 
{
    private: 
        int num1; 
        int num2; 
    public:
    B(void);  // declaration 
    /*
      friend void A ::sum( void ); 
      friend void A ::sub( void );
      friend void A ::multiplication( void );   
    */
     friend class A;   
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
        cout<<"Result   :   "<<result<<endl; 
}
void A ::sub( void )
{
        B obj; 
        int result; 
        result = obj.num1 - obj.num2; 
        cout<<"Result   :   "<<result<<endl; 
}
void A ::multiplication( void )
{
        B obj; 
        int result; 
        result = obj.num1 * obj.num2; 
        cout<<"Result   :   "<<result; 
}

int main( )
{
    A obj; 
    obj.sum( ); 
    obj.sub( ); 
    obj.multiplication( );  
    return 0; 
}