#include<stdio.h> 
int main()
{
    // jump statment 
    // break,continue,return,goto 

    //int i = 3; 
    //break statement not within loop or switch
    // if(i==3)
    //   break;   

    int i; 
    for(i=1;i<=5;i++)
    {
         printf("%d",i); //1 2 3    
         if(i==3)
           break;  
    }
    printf("Outside the  loop %d\n",i); 

    return 0;
}
