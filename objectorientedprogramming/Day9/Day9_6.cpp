#include<iostream> 

using namespace std;  
class Complex 
{
    private:
        int real; 
        int imag; 
    public: 
        // setter / mutator 
        void setReal(  int real )
        {
                this->real = real; 
        }
        // getter / Inspector 
        int getReal( void )  
        {
            return this->real;  
        }
        void accept_record( void  )
        {
               cout<<"Real  :   ";
               cin>>this->real;

               cout<<"Imag  :   "; 
               cin>>this->imag;
        }    
        void printRecord( void )  
        {
            cout<<"Real :   "<<this->real<<endl;
            cout<<"Imag :   "<<this->imag<<endl;
        }
}; 

int main( )
{
    Complex c1; 
    c1.accept_record( );  // 10 20 
    c1.printRecord( );  // 10 20

    //cout<<"Real :   "<<c1.getReal( )<<endl; 
    c1.setReal(100); 
    cout<<"Real :   "<<c1.getReal( )<<endl; 
    
    return 0; 
}