#include<stdio.h> 
int main()
{
    int number; // var declaration 
    int roll = 123; //var declaration + initialization
    double basic_salary = 2000.00, total_salary=1000.00; 
    // can declare multiple variables in single line 

    char ch = 'A'; ////var declaration + initialization

    //Variables and datatypes 
    printf("Variables and datatypes.\n"); 
    number = 12; // assignment 
    //number-->12 
    printf("number-->%d\n",number); // 12  
    //      number-->12    

    printf("%lf %lf\n",basic_salary,total_salary); 
    //      2000.00 1000.00

    // print --> number ,  basic_salary , total_salary 

    printf("%d,%lf,%lf\n",number,basic_salary,total_salary); 
    //      12,1000.00,2000.00

    printf("%c",ch);//A  

    return 0;
}
/*
    class-work 
*/