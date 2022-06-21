#include<iostream> 

using namespace std; 

class Test 
{
      int num1; 
      int num2; 
      mutable int count; 
      public: 
        Test(void):num1(10),num2(20),count(0){

        }
        // Test * const this = &t1    
        void showRecord( void  )
        {
                ++this->num1; 
                ++this->num2; 
                cout<<"Num1 :   "<<this->num1<<endl; 
                cout<<"Num2 :   "<<this->num2<<endl; 
        
        }
        
        // const Test * const this = &t1 
        void printRecord( void  ) const 
        {
               //++this->num1; 
               //++this->num2; 

               ++this->count; 
               cout<<"Num1 :   "<<this->num1<<endl; 
               cout<<"Num2 :   "<<this->num2<<endl;  

        }
        // this = &t1 
        int getcount( )
        {
               return this->count;  
        }
        
}; 

int main()
{
    Test t1; 
    t1.printRecord( );  //t1.printRecord( &t1 ); 
    t1.printRecord( );  // t1.printRecord( &t1 ); 
    t1.printRecord( );  // t1.printRecord( &t1 ); 

    cout<<"Count    :   "<<t1.getcount( ); //t1.getcount( &t1 )

    return 0; 
}
