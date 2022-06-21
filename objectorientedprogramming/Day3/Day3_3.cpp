#include<iostream> 

using namespace std;  
class Complex 
{
    private: 
        int real; 
        int imag; 
    public: 
        //Complex * const this = &c2  
        void acceptRecord( void  )
        {
               cout<<"Real  :   "; 
               cin>>this->real; 
               cout<<"Imag  :   "; 
               cin>>this->imag;  
        }
        //Complex * const this = &c3 
        void printRecord( void)
        {
               cout<<"Real  :   "<<this->real<<endl; 
               cout<<"Imag  :   "<<this->imag<<endl; 
        }
        // this = &c1 
        Complex  sum( Complex other)
        {
               Complex result;  
               result.real = this->real + other.real;
               result.imag = this->imag + other.imag; 

               return result; 
        }   
};

void sum( )
{

}

int main()
{
    Complex c1; 
    c1.acceptRecord(  ); //10 20 //c1.acceptRecord(  &c1  );  
    Complex c2; 
    c2.acceptRecord( ); // 30 40 //c2.acceptRecord( &c2 );   
    Complex c3; 
    c3 = c1.sum( c2  );  //c1.sum(  &c1 , c2   ); 
    c3.printRecord( ); // c3.printRecord( &c3  ); 
    return 0; 
}
