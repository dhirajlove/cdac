#include<stdio.h> 

//cal the peri of rectangle 
int main() 
{

    //variable declaration 
    double length,breadth,peri; 

    //  peri = 2 * ( len + breadth )
    
    //Input: 
      printf("Enter the lenght and breadth"); 
      scanf("%lf%lf",&length,&breadth);

    // processing 

        peri = 2 * ( length + breadth );

    // Output : print the peri           

       printf("peri = %.2lf\n",peri);  




    return 0; 
}