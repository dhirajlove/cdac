#include<iostream> 

using namespace std; 
class Base 
{
    private:
        int num1; 
        int num2; 

    public: 
    Base( void )
    {
        this->num1 = 0;
        this->num2 = 0;
    }
    Base( int num1 , int num2)
    {
        this->num1 = num1; 
        this->num2 = num2; 
    }
    void showRecord(  void )
    {
           cout<<"Num1  :   "<<this->num1<<endl;
           cout<<"Num2  :   "<<this->num2<<endl;

    }
    void printRecord(  void )
    {
           cout<<"Num1  :   "<<this->num1<<endl;
           cout<<"Num2  :   "<<this->num2<<endl;

    }

};

class Derived : public Base 
{
    private:
        // int num1;
        // int num2; 
        int num3; 
    public:
        Derived( void )
        {
            this->num3 = 30; 
        }
        Derived( int num1 , int num2 ,int num3):Base(num1,num2){
            this->num3 = num3; 
        }
        void displayRecord( void )
        {
            Base::showRecord( );
            cout<<"Num3 :   "<<this->num3<<endl;  
        }
        void printRecord()
        {
            Base::printRecord( ); 
            cout<<"Num3 :   "<<this->num3<<endl;  
        } 
};
int main()
{
    Base *ptrBase = new Derived( 50,60,70); 
    //ptrBase->printRecord( ); 
    cout<<endl; 
    Derived *ptrDerived = (Derived *)ptrBase; // Downcasting     
    ptrDerived->printRecord( ); 
    return 0; 
}

int main8( )
{
     Base *ptrBase  = new Derived( 50,60,70 );// upcasting  

     ptrBase->printRecord( );
     delete ptrBase; 
     ptrBase = NULL;     
    return 0; 
}

int main7( )
{
    Derived *ptrDerived =  new Derived(50,60,70);
    //ptrDerived->printRecord( );   
    //Base *ptrBase = (Base*)ptrDerived;   
    Base *ptrBase = ptrDerived;   
    ptrBase->printRecord( ); 
    return 0; 
}

int main6()
{
    Derived derived(50,60,70); 
    Base base; 
    base = derived; // Object slicing 
    base.printRecord( );   
    return 0; 
}

int main5()
{
    //Base b1(50,60); 
    //Base b2 = b1; // Intialization  
    //b2.printRecord( ); 

      Derived d1(50,60,70),d2;
      d2 = d1; // Assignment 
      d2.printRecord( );   
      return 0;   
}


int main4( )
{
    Derived *ptrDerived = new Derived( );  
   // ptrDerived->showRecord( ); // Base::showRecord( ); 
   // ptrDerived->printRecord( );// Derived::printRecord( );  
    
    ptrDerived->Base::printRecord( ); // Base :: printRecord( )
    ptrDerived->displayRecord( );  //  derived::displayRecord( )  
    
    delete ptrDerived; 
    ptrDerived = NULL; 

    return 0; 
}
int main3()
{
    Derived derived;
    derived.showRecord( );  
    derived.printRecord( ); 
    derived.Base::printRecord( ); 
    derived.displayRecord( );  
    return 0; 
}

int main2( )
{
    Base *ptrBase = new Base( );
    //ptrBase->showRecord( ); 
    //ptrBase->printRecord( ); 
       
     //ptrBase->Derived::printRecord( ); // NOT OK 
     //ptrBase->displayRecord( ); // NOT OK      

     delete ptrBase; 
     ptrBase = NULL;  

    
    return 0; 
}

int main1()
{
    Base base; 
    //base.showRecord( ); // OK  // base::showRecord( ); 
    //base.printRecord( );// OK  // base::printRecord( );   

    //base.Derived::printRecord( ); //NOT OK 
    //base.displayRecord( ); // NOT OK 
    // not the member of base       
    
    return 0; 
}

