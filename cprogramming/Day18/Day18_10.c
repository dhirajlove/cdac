#include<stdio.h> 
#include<string.h> 

// Global declaration 
struct emp 
{
    int empid  ; // 4 
    char name[20] ; //20  
    double salary; // 8 
}; 

// datatype variable-name
// int      num = 10 ; // 4 bytes    
//struct emp e1 = {"Ketan",1,12.33f};  // 28 bytes 

int main()
{

    // local structure 
    struct student 
    {
            int roll; 
            char name[20]; 
    }; 
    // datatype variable-name 

    struct emp e1 = {1,"Ketan",1000.00};  
    struct emp e2 = {2,"Amit"};  
    struct emp e3;  // only declaration 
    struct emp e4;  //only declaration 

    //printf("%d %s %.2lf\n",e1.empid,e1.name,e1.salary);  

    struct emp *p = &e1;   

    //printf("%d %s %.2lf\n",p->empid,p->name,p->salary);  

    /*
            int num; 
            num = 10;
    */

   //assign members 
    e3.empid = 3;  
    strcpy(e3.name,"Rahul"); 
    e3.salary = 2000.00; 
    printf("%d %s %.2lf\n",e3.empid,e3.name,e3.salary);  

    printf("Enter empid name and salary");
    scanf("%d%s%lf",&e4.empid,e4.name,&e4.salary);     

    printf("%d %s %.2lf\n",e4.empid,e4.name,e4.salary); 

    return 0;
}




