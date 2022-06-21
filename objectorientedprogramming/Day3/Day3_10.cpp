#include<iostream> 

using namespace std;  
class Complex 
{
    private: 
        int real; 
        int imag; 
    public: 

        //this = &c1        
        Complex( void   )
        {       
                cout<<"Complex( void   )"<<this<<endl; 
                this->real = 0; 
                this->imag = 0;   
        }
        Complex( int real , int imag   )
        {       
                cout<<"Complex( int real , int imag   )"<<this<<endl; 
                this->real = real; 
                this->imag = imag;   
        }
        void acceptRecord( void  )
        {
               cout<<"Real  :   "; 
               cin>>this->real; 
               cout<<"Imag  :   "; 
               cin>>this->imag;  
        }
        //Complex * const this = &c1 
        void printRecord( void)
        {
               cout<<"Real  :   "<<this->real<<endl; 
               cout<<"Imag  :   "<<this->imag<<endl; 
        }   
};

int main()
{
    Complex c1; // On c1 object paramterless ctor will get called  
    Complex c2(10,20); //On c2 object paramterized ctor will get called     
     
     
    return 0; 
}

/*
Default constructor 

Complex( void  )
{
    // Empty 
}
*/ 