#include<stdio.h> 
int main()
{
    const int num = 10; 
    int *ptr = &num; 

    printf("%d ",num); //10
    printf("%d ",*ptr); //10

    *ptr = 200;  
    printf("%d ",num); //10
    printf("%d ",*ptr); //10

    return 0;
}
