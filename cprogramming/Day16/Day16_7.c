#include<stdio.h> 
int main(int argc, char const *argv[],char *envp[])
{
    
   
    
    int i; 
    for(i=0; envp[i]!=NULL; i++)
            puts(envp[i]);
            // last entry of envp is NULL  
    
    return 0;
}


