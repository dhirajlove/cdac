#include<iostream> 

using namespace std; 

class Complex 
{
    private:    
        int real; 
        int imag; 
    public: 
        Complex( void )
        {
            cout<<"Complex( void )"<<endl; 
            this->real = 0; 
            this->imag = 0; 
        }
        Complex( int real , int imag )
        {
            cout<<"Complex( int real , int imag )"<<endl;
            this->real = real ; 
            this->imag = imag; 
        }

        // &rhs = c1 
        // this = & c2 
        Complex( const  Complex &rhs )
        {
                cout<<"Complex( const  Complex &rhs )"<<endl;                
                this->real = rhs.real;
                this->imag = rhs.imag; 
        }
        void printRecord( void  )
        {
              cout<<"Real   :   "<<this->real<<endl;
              cout<<"Imag   :   "<<this->imag<<endl;  
        }   
}; 

int main()
{
    Complex c1(10,20);
    Complex c2 = c1  ; // initialization 
    c2.printRecord( );  
    return 0; 
}