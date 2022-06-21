#include<stdio.h> 
#include<stdlib.h> 


int main()
{
    // dynamic memory allocation 
     // calloc ==> void* calloc(size_t n , size_t size); 
    // heap section 
      int *ptr; 

      ptr = (int*)calloc(3,sizeof(int)); 
      if(ptr==NULL) // check if avaiable 
      {
            printf("Memory not available"); 
            return 0; 
      }  

      int i; 
      for(i=0;i<=2;i++)
      {
          *(ptr+i) = 10 * (i+1); 
      }
      printf("\n"); 
      for(i=0;i<=2;i++)
      {
          printf("%d ",*(ptr+i)); 
      }  

      free(ptr); // to avoid memory leakage   

      ptr = NULL;  // to avoid dangling pointer 


    return 0; 
}