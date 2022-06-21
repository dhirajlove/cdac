#include<iostream> 

using namespace std; 

class Test 
{
    int num1; 
    int num2; 
    public: 
        Test( void ) : num1(10),num2(20){

        }
        void showRecord( void  )
        {
                cout<<"Num1 :   "<<this->num1<<endl; 
                cout<<"Num2 :   "<<this->num2<<endl; 
        }
        void printRecord( void  ) const   
        {
               cout<<"Num1 :   "<<this->num1<<endl; 
               cout<<"Num2 :   "<<this->num2<<endl;  
        }
        
}; 
int main()
{
    Test t1; 
    t1.showRecord( ); 
    t1.printRecord( ); 

    const Test t2; 
    //t2.showRecord( ); // NOT OK  
    t2.printRecord( );     

    return 0; 
}