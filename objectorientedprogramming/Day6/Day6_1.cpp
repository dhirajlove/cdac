#include<iostream> 


using namespace std; 

class Test 
{
    private: 
        int num1; // instance variable 
        int num2; // instance variable 
        int num3; // instance variable
    public: 
        Test( void )
        {
            this->num1 = 10; 
            this->num2 = 20; 
            num3 = 500; 
        } 
        Test(int num1 , int num2)
        {
                this->num1 = num1; 
                this->num2 = num2;
                num3 = 500;  
        }
        // Instance method 
        void printRecord( void )
        {
               cout<<"Num1  :   "<<this->num1<<endl;
               cout<<"Num2  :   "<<this->num2<<endl;
               cout<<"Num3  :   "<<this->num3<<endl; 
        }
};  

int main ( )
{
    Test t1(10,20);
    t1.printRecord( );  // t1.printRecord( &t1 );  
    Test t2(30,40); 
    t2.printRecord( );// t2.printRecord( &t2 );
    Test t3;
    t3.printRecord( );  // t3.printRecord( &t3 ); 

}