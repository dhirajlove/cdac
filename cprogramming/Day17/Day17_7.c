#include<stdio.h> 

int main()
{
    char cities[][11] ={"Delhi","Chandigarh","Noida"}; 

    /*
               [0]  [1]  [2]  [3]  [4]  [5]  [6]  [7]  [8]  [9] [10] 

        [0]     D    e    l    h    i    \0 

        [1]     C    h    a    n    d     i   g    a    r    h   \0        

        [2]     N    o    i    d    a     \0 


    */

    //printf("%s ",cities[0]); 
    //printf("%s ",cities[1]);
    //printf("%s ",cities[2]);   

    //printf("%d ",sizeof(cities));  // 33   
    //printf("%d ",sizeof(cities[0])); //11 
    //printf("%d ",sizeof(cities[0][0]));

    //printf("%s ",cities[0]); // Delhi 

    printf("%c ",*(*(cities+0)+0) ); 
    printf("%c ",*(*(cities+0)+1) );
    printf("%c ",*(*(cities+0)+2) );
    printf("%c ",*(*(cities+0)+3) );       

    return 0; 
}