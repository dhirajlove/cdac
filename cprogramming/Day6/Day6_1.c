#include<stdio.h> 

int main()
{
    // + , - , * , / , %
    int num1,num2,ans;

    printf("Enter the two numbers"); 
    scanf("%d%d",&num1,&num2); 

    ans = num1 + num2; 
    printf("ans = %d",ans);  
      
    return 0; 
}