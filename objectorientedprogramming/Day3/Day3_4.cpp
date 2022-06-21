#include<iostream> 


using namespace std; 
// Number of arguments 

// overloaded functions 
void sum( int num1 , int num2 )
{
    int result; 
    result = num1 + num2; 
    cout<<"Result   :   "<<result<<endl;    
}

void sum( int num1 , int num2 , int num3  )
{
    int result; 
    result = num1 + num2 + num3 ; 
    cout<<"Result   :   "<<result<<endl;    
}
int main()
{
    sum(10,20); 
    sum(10,20,30); 
    return 0; 
}
