#include<stdio.h> 
#include<stdlib.h> 


int main()
{
    // dynamic memory allocation 
    // malloc ==> void* malloc( size_t size); 
    // heap section 

      float *ptr;    

      ptr  = (float*)malloc(sizeof(float)); 
      // memory request 

      if(ptr==NULL) // check if avaiable 
      {
            printf("Memory not available"); 
            return 0; 
      }  

      *ptr = 12.33; // use    

       printf("%.2f",*ptr);//12.33    

       free(ptr); // TO avoid memory leakage 

       ptr = NULL; 



    return 0; 
}