#include<stdio.h> 

// class ==> Keyword 
// It is a collection of data member and member function 
class Employee
{

    // Data member / field / property / attribute  
    private: 
    char name[32];  // 32 bytes 
    int empid; // 4 bytes 
    float salary; // 4 bytes 
    

    public: 
    
    // Member functions  / Method / operation / behaviour 
    void accept_record ( void )// Concrete method 
    {
        
        printf("Name    :   ");
        scanf("%s",name); 
        printf("Empid   :   ");
        scanf("%d",&empid); 
        printf("Salary  :   ");
        scanf("%f",&salary); 

    }
    
    
    // Member functions / Method 
    void print_record( void  )
    {
            printf("Name     :   %s\n",name); 
            printf("Empid    :   %d\n",empid); 
            printf("Salary   :   %.2f\n",salary); 
    }


};




// Non Member function 
int main()
{
     
    //class Employee emp; 
     Employee emp;  // Instantiation 
    // emp ==> variable / instance 

    emp.accept_record( );   // Message passing  
    //  emp.salary = 0; 
    emp.print_record( );   // Message passing 
    


    return 0; 
}
// Global variable / local variable / function parameter/Member function 

/*

    
    class Book 
    {
        char bookname[32]; 
        int pages; 
        int price; 
        char authorname[20]; 

        public: 
        void accept_record( )
        {

        }
        void print_record( )
        {

        }
    }; 

    int main( )
    {
        Book b1;
        Book b2; 
        Book b3; 


    }
*/