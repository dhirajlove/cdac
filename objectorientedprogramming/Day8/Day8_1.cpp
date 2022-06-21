#include<iostream> 

using namespace std; 

class A 
{
    private: 
     int num1;
    public: 
    A ( void )
    {
           this->num1 = 10;  
    }
    A ( int num1 )
    {
        this->num1 = num1; 
    }
    void printRecord()
    {
        cout<<"Num1 :   "<<this->num1<<endl;
    }
};

class B : public A 
{
    private:
        int num2; 
    public: 
    B ( void )
    {
          this->num2 = 20;   
    }  
    B ( int num1 , int num2) : A ( num1 ) {
    
        this->num2 = num2; 
    }
    void printRecord()
    {
        A::printRecord(); 
        cout<<"Num2 :   "<<this->num2<<endl;
    }

}; 

class C : public A 
{
    private: 
        int num3; 
    public: 
        C( void )
        {
             this->num3 = 30;    
        }
        C(int num1,int num3):A(num1){
            this->num3 = num3; 
        } 
        void printRecord()
        {
            A::printRecord(); 
            cout<<"Num3 :   "<<this->num3<<endl;
        }  


};

class D:public B, public C
{
    private: 
        int num4; 
    public:
     D ( void )
     {
         this->num4 = 40; 
     }
    D(int num1,int num2,int num3 ,int num4):B(num1,num2),C(num1,num3){

            this->num4 = num4; 

      } 

    void printRecord()
    {
        
        B::printRecord(); 
        C::printRecord(); 
        cout<<"Num4 :   "<<this->num4<<endl;
    } 
};  



int main()
{
    //D d1; 
    //d1.printRecord(); 
    D d2(50,60,70,80); 
    d2.printRecord();    
    return 0; 
}

int main3()
{
    C c1; 
    c1.printRecord( );  // 10 , 30 

    C c2(50,70);
    c2.printRecord( );   // 50,70 
    return 0; 
}

int main2()
{
    B b1; 
    b1.printRecord( );  // 10 , 20 

    B b2(50,60);
    b2.printRecord( );   // 50,60 
    return 0; 
}


int main1()
{
    A a1; 
    a1.printRecord( );  // 10

    A a2(50);
    a2.printRecord( );   // 50 
    return 0; 
}





