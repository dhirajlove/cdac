#include<stdio.h> 

namespace na
{
    int num1 = 10; 
} 
int main()
{
    int num1 = 20; 
    //using namespace na;
    printf("Num1  :   %d\n",num1); 
    printf("Num1  :   %d\n",na::num1); 
}


int main2()
{
    int num2 = 20; 
    using namespace na;
    printf("Num1  :   %d\n",num2); //20  
    printf("Num1  :   %d\n",num1); //10 
    return 0; 
}

int main1()
{
    //printf("Num1    :   %d",na::num1); 
      using namespace na;
      printf("Num1  :   %d\n",num1); 
      printf("Num1  :   %d\n",num1);    
    
    return 0; 
}