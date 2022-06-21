#include<stdio.h> 

// Global declaration 
struct emp 
{
    int empid  ; // 4 
    char name[20] ; //20  
    double salary; // 8 
};
void print_emp( struct emp e ); 
void accept_emp( struct emp  *p ); 
int main()
{
    //int num; 
    //accept_num(&num); 
    
    struct emp e1;   

    accept_emp(&e1); // pass by address / call by address   

    print_emp(e1); // call by value / pass by value 

    return 0; 
}

void print_emp( struct emp e )
{
        printf("%d %s %.2lf",e.empid,e.name,e.salary); 
}


void accept_emp( struct emp  *p )
{
        printf("Enter the empid");
        scanf("%d",&p->empid);
        printf("Enter the name");
        scanf("%s",p->name); 
        printf("Enter the salary");
        scanf("%lf",&p->salary); 

}
