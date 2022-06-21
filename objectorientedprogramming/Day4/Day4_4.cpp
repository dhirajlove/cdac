#include<iostream> 

/*
    If i want to give meaningfull  name to existing 
    datatype we should use typedef 

    If we want to create alias in C++ for existing object 
    we should use reference 
    reference is derived datatype in C++ 
*/

// initialization of reference is must 
// we cannot initialize reference to NULL
// we cannot create array of references   


using namespace std;

int main()
{
    int num1 = 10;     // Referent 
    int &num2 = num1;  // reference 
    int &num3 = num2;  // reference 
    ++num1; 
    ++num2; 
    ++num3; 
    cout<<"Num1 :   "<<num1<<endl;
    cout<<"Num2 :   "<<num2<<endl;
    cout<<"Num3 :   "<<num3<<endl;  
    return 0; 
}

int main5()
{
    int num1 = 10; // Referent variable 

    int &num2 = num1; // reference  
    int &num3 = num1; // reference 
    
    ++num1;
    ++num2; 
    ++num3; 
    cout<<"Num1 :   "<<num1<<" "<<&num1<<endl; 
    cout<<"Num2 :   "<<num2<<" "<<&num2<<endl; 
    cout<<"Num3 :   "<<num3<<" "<<&num3<<endl; 
    
    return 0; 
}

int main4()
{
    int num1 = 10; // num1 : referent 
    int &num2 = num1; // num2 : reference        

    ++num1; 
    ++num2; 
    cout<<"Num1 :   "<<num1<<" "<<&num1<<endl; 
    cout<<"Num2 :   "<<num2<<" "<<&num2<<endl; 
    return 0; 
}

int main3( )
{
    int num1 = 10; // num1 : referent 
    int &num2 = num1; // num2 : reference 
    // int * const num2 = &num1;  
    // int &num3 = 10; // Not Allowed 
    cout<<"Num1 :   "<<num1<<" "<<&num1<<endl; // 10 
    cout<<"Num2 :   "<<num2<<" "<<&num2<<endl;; // 10 
    return 0; 
}

int main2( )
{
    int num1 = 10;  // num1 : referent variable 
    int &num2 = num1; // num2 : reference variable 
    
    cout<<"Num1 :   "<<num1<<&num1<<endl; // 10 
    cout<<"Num2 :   "<<num2<<&num2<<endl;; // 10 
     
    return 0; 
}

int main1( )
{
    int num1 = 10; 
    int num2 = num1; 
    cout<<"Num1 :   "<<num1<<endl; // 10 
    cout<<"Num2 :   "<<num2<<endl;; // 10 
    return 0; 
}
