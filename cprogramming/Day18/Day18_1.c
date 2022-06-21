#include<stdio.h>  // find in standard directory 
#include"stdlib.h"// find in current directory and then find in standard directory  
#include"Day18_1.h"//find file in current directory   
int main()
{
    double rad,area; 

    printf("Enter the radius: "); 
    scanf("%lf",&rad); 

    area = PI * rad * rad; 

    printf("area = %.2lf",area); 

    //exit(0); // terminate the program : 0 means success 

    return 0;
}
/*
    gcc day18_1.c -E -o Day18_1.i 

    gcc day18_1.c -o Day18_1.exe 

*/