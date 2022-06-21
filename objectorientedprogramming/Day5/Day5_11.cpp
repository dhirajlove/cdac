#include<iostream>
#include<stack> 

using namespace std; 

// STL ==> standard template library 
int main()
{
    stack<int> stk; 
    stk.push(10);
    stk.push(20);
    stk.push(30);
    int element; 
    while(!stk.empty())
    {
            element = stk.top( ); 
            cout<<"Popped element is"<<element<<endl; 
            stk.pop( ); 
    }
}

