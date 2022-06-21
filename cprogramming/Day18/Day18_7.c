#include<stdio.h> 
#define VER 3
int main() {
 #ifndef VER
 #error "VER not defined"
 #endif
 #if VER == 1
 printf("This is Version 1.\n");
 #elif VER == 2
 printf("This is Version 2.\n");
 #else
 printf("This is 3+ Version.\n");
 #endif
 return 0;
}

/*
        Version = 1 
        Version = 2 
        Version = 3 

        // version = 2

        if(Version == 1 )
        {
                5000 lines code 
        }
        else if (Version == 2)
        {
                5000 lines code 
        }
        else if (Version == 3)
        {       
                5000 lines code 
        }






*/