#include<stdio.h> 
int main()
{
    
    //goto ( jump )

    int rank; 
    START: 
    printf("Enter the rank"); 
    scanf("%d",&rank); 

    if(rank>=1 && rank<=5) 
            goto LABEL;  
    else 
            goto START;   

    LABEL: 
    printf("Excellent rank and all the best"); 





    
    return 0;
}
