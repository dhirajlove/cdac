#include<iostream> 

using namespace std; 

class Test 
{ 
    int num1; 
   protected:
    int num2;
    Test( void )
    {
        this->num1 = 10;
        this->num2 = 20;
    }
    friend int main();    
}; 

// non member / global function 
int main()
{
    Test t1; 
    cout<<"Num1 :   "<<t1.num1<<endl;
    cout<<"Num2 :   "<<t1.num2<<endl;
    return 0; 
}













