 #include<stdio.h> 
// It is a user-defined function 
//Calling main function is a job of OS
// main function is also called callback function  
// we cannot declare main function static and constant 
// Per project we can define only one main  
//If we try to build the c++ project without main linker generates error 
//C++ execution starts from main, It is a calling function 
// It is designed to call other functions   
//we cannot define main function inside function/structure/class 
//void print( void  ) // Global declaration     
int main() 
{
    void print( void  ); // local declaration     
    print( ); // Function call  
    return 0;
}
void print( void )
{
    printf("Hello OM32\n"); 
}
