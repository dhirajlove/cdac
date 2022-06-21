#include<stdio.h> 
// Global structure 
struct Employee
{
    char name[32]; 
    int empid; 
    float salary; 
};

// Global function 

//struct Employee *ptr = &emp 
void accept_record (struct Employee *ptr)
{
    
    printf("Name    :   ");
    scanf("%s",ptr->name); 
    printf("Empid   :   ");
    scanf("%d",&ptr->empid); 
    printf("Salary  :   ");
    scanf("%f",&ptr->salary); 

}
// struct Employee *ptr  = &emp 
void print_record(struct Employee *ptr )
{
        printf("Name     :   %s\n",ptr->name); 
        printf("Empid    :   %d\n",ptr->empid); 
        printf("Salary   :   %.2f\n",ptr->salary); 
}

int main()
{
     
    struct Employee emp; 

    accept_record(  &emp );
    print_record (  &emp );  


    return 0; 
}

