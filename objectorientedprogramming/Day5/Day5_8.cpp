#include<iostream> 

using namespace std; 

class Complex 
{
    private:
        int real; 
        int imag; 
    public:
        Complex( void  )
        {       
                cout<<"Complex( void  )"<<endl;
                this->real = 0; 
                this->imag = 0;  
        } 
        Complex( int real , int imag)
        {
                cout<<"Complex( int real , int imag)"<<endl;
                this->real = real; 
                this->imag = imag;  
        }
        // this = &c2 
        // const Complex &other = c1 
        void operator=( const Complex &other )
        {
                cout<<"void operator=( const Complex &other )"<<endl; 
                this->real = other.real;
                this->imag = other.imag;   
        }
        void printRecord( )
        {
                cout<<"Num1 :   "<<this->real<<endl;
                cout<<"Num2 :   "<<this->imag<<endl;
        } 
};
int main()
{
    Complex c1(10,20);
    Complex c2; 
    c2 = c1;  // c2.operator=(c1)
    c2.printRecord();  
    
}
/*
        int a =10; 
        int b; 
        b = a; 


*/