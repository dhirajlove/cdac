#include<iostream> 

using namespace std;  
class Test 
{
    private: 
        int num1;  // instance variable 
        int num2;  // instance variable 
        static int num3; // class level variable 
    public: 
        void setNum1(  int num1 )
        {
               this->num1 = num1;  
        }
        void setNum2( int num2 )
        {
                this->num2 = num2; 
        }
        // this = &t1 
        void printRecord( )
        {
            cout<<"Num1 :   "<<this->num1<<endl; 
            cout<<"Num2 :   "<<this->num2<<endl; 
            cout<<"Num3 :   "<<Test::num3<<endl; 
        }
        static void setNum3(  int num3 )
        {
                Test::num3 = num3; 
        }

}; 
int Test::num3 = 500; // Global defination   

int main() 
{
    Test t1; 
    t1.setNum1(  10 ); // t1.setNum1(  &t1 , 10 ); 
    t1.setNum2(  20 ); // t1.setNum2( &t1  , 20 );

    Test::setNum3( 30  ); 

    t1.printRecord( );  // t1.printRecord( &t1 ); 
}