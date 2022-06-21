#include<iostream>
#include<string>
using namespace std;

class Product{
private:
    string title;
    float price;
public:
    Product( void ){
        this->title = "";
        this->price = 0;
    }
     virtual void acceptRecord( void ){
        cout<<"Title        :   ";
        cin>>this->title;
        cout<<"Price        :   ";
        cin>>this->price;
    }
     virtual void printRecord( void ){
        cout<<"Title        :   "<<this->title<<endl;
        cout<<"Price        :   "<<this->price<<endl;
    }
};
class Book : public Product{
private:
    int pageCount;
public:
    Book( void ){
        this->pageCount = 0;
    }
     void acceptRecord( void ){
        Product::acceptRecord( );
        cout<<"Page Count   :   ";
        cin>>this->pageCount;
    }
     void printRecord( void ){
        Product::printRecord( );
        cout<<"Page Count   :   "<<this->pageCount<<endl;
    }
};
class Tape : public Product{
private:
    int playTime;
public:
    Tape( void ){
        this->playTime = 0;
    }
    void acceptRecord( void ){
        Product::acceptRecord( );
        cout<<"Play Time   :   ";
        cin>>this->playTime;
    }
     void printRecord( void ){
        Product::printRecord( );
        cout<<"Play Time    :   "<<this->playTime<<endl;
    }
};

int menu_list(  void )
{
    int choice; 
    cout<<"0.Exit"<<endl;
    cout<<"1.Book"<<endl;
    cout<<"2.Tape"<<endl;
    cout<<"Enter the choice"; 
    cin>>choice; 
    return choice;   
}

int main()
{
        int choice; 
        while( ( choice = ::menu_list() )!=0 )
        {
             Product *ptr = NULL;

             switch(choice)
             {
                   case 1: 
                   ptr = new Book( ); // upcasting    
                   break; 

                   case 2: 
                   ptr = new Tape( ); // upcasting 
                   break; 
             }
             if(ptr!=NULL)
             {
                 ptr->acceptRecord( ); // Runtime polymorphism
                 ptr->printRecord( ); // Runtime polymorphism 
                 delete ptr; 
             }

        }
        return 0; 
}


/*
1.If we call any member function on object it is 
considered as Early binding 


2.If we call virtual function on pointer / reference 
then it is called as Late binding 

//Object gets resolved at compile time --> Early binding 
//Object gets resolved at Run time -->Late Binding 




*/