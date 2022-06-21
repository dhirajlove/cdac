#include<iostream> 

using namespace std; 

class Test 
{
    private: 
        int num1;  // instance variable 
        int num2;  // instance variable
        static int num3; // class level variable  
    public: 
        Test( void )
        {
            this->num1 = 10; 
            this->num2 = 20; 
        }
        Test( int num1 , int num2)
        {
            this-> num1 = num1; 
            this->num2  = num2; 
        }
        void printRecord( void  )
        {
            cout<<"Num1 :   "<<this->num1<<endl; 
            cout<<"Num2 :   "<<this->num2<<endl; 
            cout<<"Num3:    "<<Test::num3<<endl; 
        }
};
int Test::num3 = 500; // Global defination  
int main()
{
    Test t1;
    t1.printRecord( );  // t1.printRecord( &t1 ); 

    Test t2; 
    t2.printRecord( ); // t2.printRecord(  &t2);

    Test t3; 
    t3.printRecord ( ); // t3.printRecord ( &t3 ); 
    return 0; 
}