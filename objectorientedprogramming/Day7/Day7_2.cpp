#include<iostream> 
#include<string> 

using namespace std; 

class Person  // base class / parent class 
{
    private:
        string name;  // 24 bytes 
        int age;  // 4 bytes 
        
    public: 
        Person( void ):name(""),age(0){

        } 
        Person(string name,int age):name(name),age(age){

        }
        void showRecord( void  )
        {
               cout<<"Name  :   "<<this->name<<endl;
               cout<<"Age  :   "<<this->age<<endl; 
        }
}; 

class Employee : public Person // child class / derived class 
{
    private: 
        //string name;  // 24 
        //int age;  // 4 
        int empid; // 4 
        float salary; // 4 
    public: 
        Employee( void ):empid(0),salary(0){

        }
        Employee(int empid, float salary):empid(empid),salary(salary){

        } 
        void displayRecord( void  )
        {
            cout<<"Empid :   "<<this->empid<<endl;
            cout<<"Salary :   "<<this->salary<<endl;
        }
      /*  
        void showRecord( void  )
        {
               cout<<"Name  :   "<<this->name<<endl;
               cout<<"Age  :   "<<this->age<<endl; 
        }
     */    

};  


int main( )
{
    Employee e; 
    size_t size = sizeof(e); 
    cout<<"Size :   "<<size;  
    return 0;  
}



