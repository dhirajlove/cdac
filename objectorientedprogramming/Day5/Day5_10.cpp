#include<iostream>
#include<string>
using namespace std;
//template<typename T>   // T : Type parameter name 
template<class T> 
void swap_object( T &x, T &y )
{
	T temp = x;
	x = y;
	y = temp;
}

int main()
{
    int a = 10; 
    int b = 20; 
    //swap_object<int>(a,b); // int : type argument 
    swap_object(a,b); // type inference 
    cout<<"a	:	"<<a<<endl;
	cout<<"b	:	"<<b<<endl; 
    
    double c = 10.5; 
    double d = 20.5; 
    swap_object<double>(c,d);  
    cout<<"c	:	"<<c<<endl;
	cout<<"d	:	"<<d<<endl; 
    
    
    return 0; 
}