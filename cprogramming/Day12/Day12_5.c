#include<stdio.h> 
int myfact(int num); 
int main()
{
    
    int result; 
    result = myfact(5); 
    printf("%d",result);
    return 0;
}
int myfact(int num)
{
    int result = 1; 
    
     if(num==0) // terminating condition 
        return 1;    
     else 
        result = num * myfact( num - 1); 
        
      return result;   

}
