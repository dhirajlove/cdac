#include<iostream> 

using namespace std; 

class Test 
{
    const int num1;
    public: 
        Test( void ):num1(10){

        }
        // {
        //     this->num1 = 10; 
        // }
        //this = &t1 
        void showRecord( void  )
        {
            //++this->num1;  // NOT OK 
             cout<<"Num1    :   "<<this->num1<<endl;    
        } 
        // this = &t1 
        void printRecord( void  )
        {
             //++this->num1;  // NOT OK 
             cout<<"Num1    :   "<<this->num1<<endl;    
        } 
}; 
 
int main()
{
    Test t1;
    t1.printRecord( );  // t1.printRecord( &t1 );  
    t1.showRecord( ); // t1.showRecord( &t1 ); 
    return 0; 
}