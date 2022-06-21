#include<stdio.h> 

int main()
{   
     
    //1 Employee info -1 

     char name[20]; 
     int empid; 
     float salary; 

     printf("Name   :   ");
     scanf("%s",name);
     printf("Empid  :   ");
     scanf("%d",&empid); 
     printf("Salary :   ");
     scanf("%f",&salary); 

     printf("Name   :   %s\n",name);
     printf("Empid  :   %d\n",empid); 
     printf("salary :   %f\n",salary);     

    return 0; 
}
