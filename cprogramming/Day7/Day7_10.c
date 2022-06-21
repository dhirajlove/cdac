#include<stdio.h> 
int main()
{
    int num1 = 111; 
    int num2 = 22; 
    int ans; 
    /*
            if(num1>num2)
               exp1
            else 
               exp2     
    */
    //condition ? expression1 : expression2

    ans = num1 > num2 ? num1  : num2;  
    printf("%d",ans);        

    return 0;
}
/*
        greatest of 3 numbers 
        num1,num2,num3 
// condtional operator ==> ternary operator 
ans = num1 > num2 ? ( num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3);   
//                     condt   ? exp1  : exp2          condtn     ? exp1 : exp2 
//      condtn    ?         exp1                  :      exp2


*/