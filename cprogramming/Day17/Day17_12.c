#include<stdio.h> 
#include<stdlib.h> 
int main()
{
    // dynamic memory allocation 

    int *p; 
    int n; 
    int i; 

    printf("Enter the size"); 
    scanf("%d",&n); 

    p =(int*) malloc(n * sizeof(int));       

    if(p == NULL)
    {
        printf("Memory not allocated"); 
        exit(1); 
    }

    for(i=0;i<n;i++)
    {
            printf("Enter the value");
            scanf("%d",&p[i]); 
    }
    for(i=0;i<n;i++)
       printf("%d",p[i]); 

    free(p); 
    p = NULL; 
    return 0; 
}