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
    Complex c1;
    cout<<"C1   :   "<<&c1<<endl;    
    Complex c2;
    cout<<"C2   :   "<<&c2<<endl;
    Complex c3;
    cout<<"C3   :   "<<&c3<<endl;

     
     
    return 0; 
}