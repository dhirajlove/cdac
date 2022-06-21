#include<stdio.h> 
int num = 10 ; 
int main()
{
    // local structure 
    struct Employee
    {
        char name[32]; 
        int empid; 
        float salary; 
    }; 
    struct Employee emp; 
    //struct Employee : Datatype 
    // emp : variable / object 
    
    
    printf("Name    :   ");
    scanf("%s",emp.name);

    printf("Empid   :   ");
    scanf("%d",&emp.empid); 

    printf("Salary  :   ");
    scanf("%f",&emp.salary); 


    printf("Name    :   %s\n",emp.name); 
    printf("Empid   :   %d\n",emp.empid); 
    printf("Salary  :   %f\n",emp.salary); 

    return 0; 
}

// char *str = "hello";  //RO data section   