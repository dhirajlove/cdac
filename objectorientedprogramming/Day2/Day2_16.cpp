#include<iostream> 
#include<string> 

using namespace std; 

class Employee
{
    private:   
        string name;  //24 
        int empid; // 4 
        float salary;// 4 
    public: 
        void accept_record( ); 
        void print_record( ); 
        
}; // End of class  
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

        Employee e1,e2,e3; 

         e1.accept_record( );
         e2.accept_record( ); 
         e3.accept_record( ); 

         e1.print_record( ); 
         e1.print_record ( ); 
         e1.print_record( );    

        return 0; 
}
/*

    class Car 
    {
       private:  
        string name; 
        int price; 
        string company; 
        string color;  
    }; 

    Car Maruti800;  
    Car BMW; 
    Car Nano;  

    class Book 
    {
        private: 
        string name; 
        int price; 
        int pages; 
        string authorname; 
        int edition; 
    }; 

    Book CoreJava; 
    Book LetUsC
    Book C++programming;   





*/