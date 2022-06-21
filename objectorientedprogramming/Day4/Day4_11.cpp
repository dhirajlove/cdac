#include<iostream> 

using namespace std;  
class Array 
{
    private:
        int size;
        int *arr;     
    public: 
      Array( int size)
      {
          cout<<" Array( int size)"<<this<<endl; 
          this->size = size; 
          this->arr = new int [size];   
      }
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
        ~Array( void  )
        {
                cout<<" ~Array( void  )"<<this<<endl; 
                delete[] this->arr; 
                this->arr = NULL;  
        }
}; 
int main()
{
    
     Array a1(3); 
     Array a2(3); 
     Array a3(3); 
     
     //a1.accept_record( );
     //a1.print_record( ); 
     

}