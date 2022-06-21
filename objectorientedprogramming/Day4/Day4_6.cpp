#include<cstdlib>
#include<iostream>
using namespace std;

int main( void ){
	int *ptr = ( int* )calloc( 3 , sizeof( int ) );	//OK	:	Memory Allocation
	if( ptr != NULL ){
		ptr[ 0 ] = 10;
		ptr[ 1 ] = 20;
		ptr[ 2 ] = 30;

		ptr = (int* )realloc(ptr, 5 * sizeof( int ) );
		if( ptr != NULL ){
			ptr[ 3 ] = 40;
			ptr[ 4 ] = 50;
			for( int index = 0; index < 5; ++ index )
				cout<<ptr[ index ]<<endl;
			free( ptr );	//OK	:	Memory Deallocation
			ptr = NULL;
		}
	}else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
int main4( void ){
	int *ptr = ( int* )calloc( 3 , sizeof( int ) );	//OK	:	Memory Allocation
	if( ptr != NULL ){
		ptr[ 0 ] = 10;
		ptr[ 1 ] = 20;
		ptr[ 2 ] = 30;
		for( int index = 0; index < 3; ++ index )
			cout<<ptr[ index ]<<endl;
		free( ptr );	//OK	:	Memory Deallocation
		ptr = NULL;
	}else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
int main3( void ){
	int *ptr = ( int* )malloc( 3 * sizeof( int ) );	//OK	:	Memory Allocation
	if( ptr != NULL ){
		ptr[ 0 ] = 10;
		ptr[ 1 ] = 20;
		ptr[ 2 ] = 30;
		for( int index = 0; index < 3; ++ index )
			cout<<ptr[ index ]<<endl;
		free( ptr );	//OK	:	Memory Deallocation
		ptr = NULL;
	}else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}

int main2( void ){
	int *ptr = ( int* )calloc( 1, sizeof( int ) );	//OK	:	Memory Allocation
	if( ptr != NULL ){
		*ptr = 125;
		cout<<"Value	:	"<<*ptr<<endl;
		free( ptr );	//OK	:	Memory Deallocation
		ptr = NULL;
	}else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
int main1( void ){
	//void *ptr = malloc( sizeof( int ) );	//OK
	int *ptr = ( int* )malloc( sizeof( int ) );	//OK	:	Memory Allocation
	if( ptr != NULL ){
		*ptr = 125;
		cout<<"Value	:	"<<*ptr<<endl;
		free( ptr );	//OK	:	Memory Deallocation
		ptr = NULL;
	}else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
