#include<stdio.h> 

int main()
{
    char *numbers[] = { "one","two","three","four" }; 

    printf("%u ",*(numbers+0)+0);
    printf("%u ",*(numbers+0)+1);
    printf("%u ",*(numbers+0)+2);
    printf("%u ",*(numbers+0)+3);

    printf("\n");  
    printf("%c ",*(*(numbers+0)+0));
    printf("%c ",*(*(numbers+0)+1));
    printf("%c ",*(*(numbers+0)+2));
    //printf("%d ",*(*(numbers+0)+3));
     
    printf("\n");  

    printf("%d ",*(*(numbers+0)+0));
    printf("%d ",*(*(numbers+0)+1));
    printf("%d ",*(*(numbers+0)+2));

    printf("\n"); 

    printf("%u ",numbers[0]); 
    printf("%u ",numbers[1]);
    printf("%u ",numbers[2]);  


}