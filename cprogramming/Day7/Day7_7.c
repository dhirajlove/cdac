#include<stdio.h> 
int main()
{
    // min of 3 numbers 
    int a,b,c; 
    printf("Enter the a,b,c"); 
    scanf("%d%d%d",&a,&b,&c); 

    if(a<b && a<c)
    {
           printf("min = %d",a);  
    }
    else 
    {
        if(b<c)
            printf("min = %d",b); 
        else 
           printf("min = %d",c); 
    }

    return 0;
}
