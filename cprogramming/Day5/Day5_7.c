#include<stdio.h> 

int main()
{
    // % ==> remainder  
    // / ==> quotient 

    //sum of digits 
    // 123 ==> 6 
    
    int num,sum;
    int div1,div2,div3;

    printf("Enter the number");
    scanf("%d",&num);//1234

    // processing 

    div1 = num % 10; //1234 % 10 ==> 4     
    num  = num / 10; // 1234 / 10 ==> 123 
    //printf("%d %d",div1,num); 

    div2 = num % 10; // 123 % 10 ==> 3 
    num = num / 10; // 123 / 10 ==> 12
    //printf("%d %d",div2,num);  

    div3 = num % 10; // 12 % 10 ==> 2 
    num = num / 10; // 12 / 10 ==> 1
    //printf("%d %d",div3,num); 

    sum = div1 + div2 + div3 + num; 
    //     4   +  3   + 2    +  1 
    //       10      
    
    // Output

    printf("sum= %d",sum);     

    
    return 0; 
}
 