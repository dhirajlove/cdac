#include<iostream> 
#include<string> 
#include<typeinfo> 

using namespace std;  
int main( void  )
{
      int number; 
      const type_info &type = typeid(number); 
      string strType = type.name( ); 
      cout<<"Type   :   "<<strType<<endl;   
}
