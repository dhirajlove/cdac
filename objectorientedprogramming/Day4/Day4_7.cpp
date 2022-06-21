#include<iostream> 

using namespace std;  

int main()
{
    int *ptr = new int[3]; // OK : memory allocation 
    ptr[0]= 10;
    ptr[1]= 20;
    ptr[2]= 30;
    int index; 
    for(index=0;index<3;index++)
        cout<<ptr[index]<<endl; 

    delete [] ptr; // Deallocation 
    ptr = NULL;      
    return 0; 
}

int main1()
{
    int *ptr= new int; // OK memory allocation 

    *ptr = 125; 
    cout<<"Value    :   "<<*ptr<<endl ; 
    
    delete ptr; // Memory deallocation 
    ptr = NULL; // to avoid dangling pointer 
    
    return 0; 
}