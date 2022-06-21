#include<iostream> 
// default argument 


using namespace std;  
void sum( int num1 = 0, int num2 = 0  , int num3 = 0 , int num4 =0  , int num5 = 0  );
int main()
{
    sum(10,20,30,40,50); 
    //sum(10,20,30,40); 
    //sum(10,20,30);   
    //sum(10,20); 
    //sum(10); 
    //sum( ); 
    return 0; 
}
void sum( int num1 , int num2   , int num3  , int num4   , int num5  )
{
        int result = num1 + num2 + num3 + num4 + num5; 
        cout<<"Result   :   "<<result;
}









// using namespace std;  
// void sum( int num1 = 0, int num2 = 0  , int num3 = 0 , int num4 =0  , int num5 = 0  )
// {
//         int result = num1 + num2 + num3 + num4 + num5; 
//         cout<<"Result   :   "<<result;
// }
// int main()
// {
//     //sum(10,20,30,40,50); 
//     //sum(10,20,30,40); 
//     //sum(10,20,30);   
//     //sum(10,20); 
//     //sum(10); 
//     //sum( ); 
//     return 0; 
// }

