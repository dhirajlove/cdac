#include<iostream> 
#include<string> 

using namespace std; 

void accept_record( string message , int &number )
{
        cout<<message; 
        cin>>number;  
}

int main()
{
    cout<<"Open the connection"<<endl; 

    int num1; 
    accept_record("Num1  :   ",num1); 
    int num2;     
    accept_record("Num2 :   ",num2);
    try
    {
        if(num2==0)
        {
               //throw 0;
               //throw 1.2; 
                 throw 12.3f;      
        }
        else 
        {
            int result; 
            result = num1 / num2; 
            cout <<"result  :   "<<result<<endl; 
        }
    }
    catch( int x)
    {
          cout<<"Exception occured"<<endl; 
    }
    catch( double x)
    {
          cout<<"Exception occured"<<endl; 
    }
    catch(...) // generic / default / catch all handler 
    {
            cout<<"generic : Exception occured"<<endl; 
    }
        cout<<"Close the connection"<<endl; 




    return 0; 
}