#include<iostream> 

using namespace std;  
class Complex 
{
    private: 
        int real; 
        int imag; 
    public: 
        //Complex * const this = &c1  
        void acceptRecord( void  )
        {
               cout<<"Real  :   "; 
               //cin>>real; 
               cin>>this->real; 
               cout<<"Imag  :   "; 
               //cin>>imag;   
               cin>>this->imag;  
        }
        //Complex * const this = &c1 
        void printRecord( void)
        {
               //cout<<"Real  :   "<<real<<endl; 
               cout<<"Real  :   "<<this->real<<endl; 
               //cout<<"Imag  :   "<<imag<<endl;  
               cout<<"Imag  :   "<<this->imag<<endl; 
        }   
};

int main()
{
    Complex c1; 
    c1.acceptRecord (  );  // c1.acceptRecord ( &c1 ); 
    //calling object = c1 
    c1.printRecord ( );  //  c1.printRecord ( &c1  );  
    //calling object = c1 
    
    return 0; 
}
/*
        
        this is a constant pointer 


        int * const ptr; // pointer is constant
        // int ==> buitin  


        Complex * const this;   
        // Complex ==> userdefined 
        classname * const this ; 
*/
