#include<stdio.h> 

int main()
{
    int i; 
    int arr[4] = { 5,10,15,20};
    int *pa[4];

    for(i=0;i<4;i++)
           pa[i] = &arr[i];  
    
    for(i=0;i<4;i++)
    {
        //printf("%u ",*pa[i]);
         //printf("%u ",pa[i]);                
         printf("%u ",&pa[i]);                
    }  

}