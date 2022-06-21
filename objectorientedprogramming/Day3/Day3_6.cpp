#include<iostream> 


using namespace std; 
// order of arguments 

// overloaded functions 
void sum( int num1 , float num2 )
{
    float result; 
    result = num1 + num2; 
    cout<<"Result   :   "<<result<<endl;    
}

void sum( float num1 , int num2   )
{
    float result; 
    result = num1 + num2; 
    cout<<"Result   :   "<<result<<endl;    
}
int main()
{
    sum(10,12.3f); 
    sum(12.3f,10); 
    return 0; 
}

/*  
    Polymorphism  ==> Poly(many)  morphism(forms) 
            Compile time polymorphism 

    Mangled name ==> compiler ( name mangling )

    Number of argument 
    type of argument 
    order of argument 

*/
