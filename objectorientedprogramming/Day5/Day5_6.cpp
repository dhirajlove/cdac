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
                this->real = 0; 
                this->imag = 0;  
        } 
        Complex( int real , int imag)
        {
                this->real = real; 
                this->imag = imag;  
        }
        // this = &c1 
        // other = c2   
       Complex operator+( Complex other)
        {
             Complex result; 
             result.real = this->real + other.real; 
             result.imag = this->imag + other.imag; 
             return result;  
        }
        Complex operator-( Complex other)
        {
             Complex result; 
             result.real = this->real - other.real; 
             result.imag = this->imag - other.imag; 
             return result;  
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
    Complex c2(30,40);
    Complex c3; 
   // c3 = c1 + c2; //c1.operator+(c2)   
      c3 = c1 - c2; // c1.operator-(c2)  
    c3.printRecord( ); // c3.printRecord( &c3 ); 
    
}

/*
    struct Point 
    {
        int xPos; 
        int yPos; 
    }; 
    struct Point p1 = { 10, 20}; 
    struct Point p2 = { 30, 40};
    struct Point p3; 
    p3 = p1 + p2; 
    p3 = p1.real  + p2.real; 


    int ans; 
    int num1 =10, num2 = 20; 
    ans= num1 + num2; 

    
*/
