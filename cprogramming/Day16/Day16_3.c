#include<stdio.h> 

int main()
{
    // Array of pointers 

    int *pa[3]; // array of pointers      
    int a = 5 , b = 10 , c = 15; 

    pa[0] = &a; 
    pa[1] = &b; 
    pa[2] = &c;
    int i; 

 //   printf("%d ",*pa[0]);  
 //   printf("%d ",*pa[1]);
 //   printf("%d ",*pa[2]);       

      for(i=0;i<3;i++)
      {
           //printf("%d ",*pa[i]);        
           //printf("%u ",pa[i]);
           printf("%u ",&pa[i]);                
      }  


    return 0; 
}