#include<iostream> 
#include<string> 

using namespace std; 

namespace ntest 
{
    class Employee
    {
        private:   
            string name; 
            int empid; 
            float salary;
        public: 
            void accept_record( ); 
            void print_record( ); 
            
    }; // End of class  
}// End of namespace

using namespace ntest;   
void Employee ::  accept_record( )
{
    cout<<"Name :   "; 
    cin>>name; 
    cout<<"Empid    :   ";
    cin>>empid; 
    cout<<"Salary   :   ";
    cin>>salary;  
} 
void Employee :: print_record( )
{
    cout<<"Name :   "<<name<<endl; 
    cout<<"Empid    :   "<<empid<<endl; 
    cout<<"Salary   :   "<<salary<<endl; 
}   

int main( )
{
        //ntest::Employee emp; 

        using namespace ntest; 
        Employee emp; // Instantiation 
        emp.accept_record( ); // Message passing  
        emp.print_record( );  // Message passing 

        return 0; 
}