#include<iostream> 

using namespace std; 

#define size 3 

class Array
{
    private: 
        int arr[size]; 
    public: 
        void accept_record( void  )
        {
                int index;
                for(index=0;index<size;index++)
                {
                        cout<<"Element  :   "; 
                        cin>>this->arr[index]; 
                }
        }
        void print_record(  void )
        {
                int index;
                for(index=0;index<size;index++)
                       cout<<this->arr[index]<<endl;  
        }

}; 
int main( )
{
    Array a1;
    a1.accept_record( );  // a1.accept_record( &a1 ); 
    a1.print_record(); // a1.print_record( &a1); 
    return 0; 
}