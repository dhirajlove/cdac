#include<iostream>
using namespace std;

class Array{
private:
	int size;
	int *arr;
public:
	Array( int size ){
		this->size = size;
		this->arr = new int[ size ];
	}
	//const Array &other = a1
	//Array *const this = &a2
	Array( const Array &other ){
		this->size = other.size;
		this->arr = new int[ this->size ];
		for( int index = 0; index < this->size; ++ index )
			this->arr[ index ] = other.arr[ index ];
	}
	//Array *const this = &a1
	void acceptRecord( void ){
		for( int index = 0; index < size; ++ index ){
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}
	//Array *const this = &a1
	void printRecord( void ){
		for( int index = 0; index < size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
	//Array *const this = &a1
	~Array( void ){	//Destructor
		delete[] this->arr;
		this->arr = NULL;
	}
};
int main( void ){
	Array a1( 3 );

	a1.acceptRecord( );	//a1.acceptRecord( &a1 );

	Array a2 = a1;

	a2.printRecord( );	//a1.printRecord( &a1 );

	return 0;
}
