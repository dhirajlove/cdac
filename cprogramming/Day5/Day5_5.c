#include<stdio.h> 

/*
     calculate area and circumeference of circle 
     PI = 3.142 
     area = PI * r * r
     cirucm = 2 * PI * r  
*/

int main()
{
    // variable declaration part 
    
    float radius,area,cirumference;  

    //1. Input 
    printf("Enter the radius"); 
    scanf("%f",&radius); 

    //2 Processing the logic 
      //area =  PI * r * r
      //cirucm = 2 * PI * r  

    area = 3.1412 * radius * radius;
    cirumference = 2 * 3.1412 * radius; 

    //3. Output 

    printf("Area = %.2f \n",area);
    printf("Cirumference = %.2f",cirumference);  


    return 0; 
}

