#include<iostream>
#include<string>
using namespace std;

void swap( int &x, int &y ){
	int temp = x;
	x = y;
	y = temp;
}
void swap( double &x, double &y ){
	double temp = x;
	x = y;
	y = temp;
}
void swap( string &x, string &y ){
	string temp = x;
	x = y;
	y = temp;
}
int main( void ){
	int a = 10;
	int b = 20;
	swap( a, b );
	cout<<"a	:	"<<a<<endl;
	cout<<"b	:	"<<b<<endl; 

	/*double c = 10.5;
	double d = 20.5;
	swap( c, d );
	cout<<"c	:	"<<c<<endl;
	cout<<"d	:	"<<d<<endl;*/

	// string s1 = "Karad";
	// string s2 = "Pune";
	// swap( s1, s2 );
	// cout<<"s1	:	"<<s1<<endl;
	// cout<<"s2	:	"<<s2<<endl;
	return 0;
}
