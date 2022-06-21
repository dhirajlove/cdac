#include<iostream> 
using namespace std;  
inline int max(int x , int y  )
{
    return x > y ? x : y ; 
}

int main()
{
    int a =10; 
    int b= 20; 
    int result = max( a,b); 
                //x > y ? x : y ; 
    cout <<"Result  :   "<<result;
}