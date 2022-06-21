#include<iostream> 

using namespace std;  
class Test 
{
    private:
        int num1; 
        int num2; 
        int num3; 
    public: 
        Test( void ):num3(num2),num2(num1),num1(0){

        }
        // {
        //      this->num3 = num2; 
        //      this->num2 = num1; 
        //      this->num1 = 0;    
        // }
        Test(int n1, int n2 , int n3):num1(n1),num2(n2),num3(n3){

        }
        //this->num1 = n1; 
        //this->num2 = n2;
        //this->num3 = n3;   
        void printRecord( void )
        {
               cout<<"Num1  :   "<<this->num1<<endl;
               cout<<"Num2  :   "<<this->num2<<endl; 
               cout<<"Num3  :   "<<this->num3<<endl;
        }
}; 

int main()
{
    Test t1;  
    t1.printRecord( ); // t1.printRecord( &t1  ); 

    Test t2(1,2,3); 
    t2.printRecord( ); // t2.printRecord( &t2 ); 
}