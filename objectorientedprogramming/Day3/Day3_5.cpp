#include<iostream> 


using namespace std; 
// type of arguments 

// overloaded functions 
void sum( int num1 , int num2 )
{
    int result; 
    result = num1 + num2; 
    cout<<"Result   :   "<<result<<endl;    
}

void sum( int num1 , double num2   )
{
    double result; 
    result = num1 + num2; 
    cout<<"Result   :   "<<result<<endl;    
}
int main()
{
    sum(10,20); 
    sum(10,12.3); 
    return 0; 
}
