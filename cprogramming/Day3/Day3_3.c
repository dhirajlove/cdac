#include<stdio.h> 

int main()
{
    int num = 10; // variable decln + intialization 
    char ch = 'A';// variable decln + intialization
    double dvar = 12.33; // variable decln + intialization        

    printf("%d\n",num); //10 
    num = 11;   //Assignment
    printf("%d\n",num); //11  
    num = 12;
    num = 13;
    num = 14;    
    printf("%d\n",num); //14  

    ch = 'B'; //Assignment 
    printf("%c\n",ch); //B 

    dvar = 10.33; // Assignment
    printf("%lf\n",dvar); //10.33    
    return 0;

    // Assignment can be done multiple number of times 

    /*
        datatype variablename  ==> variable declaration 

        datatype variablename = value;  
        variable declaration  + initialization 
   
        variablename = value;  
        Assignment 
   
    */


}


