#include<stdio.h> 
// Global structure 
struct Employee
{
    char name[32]; 
    int empid; 
    float salary; 
};

//struct Employee *ptr = &emp 
void print(struct Employee *ptr)
{
    printf("Name     :   %s\n",ptr->name); 
    printf("Empid    :   %d\n",ptr->empid);
    printf("Salary   :   %.2f\n",ptr->salary);  
}
int main()
{
     
    struct Employee emp = {"Ketan",1,1000.00f}; 

    print(&emp);  // pass by address     
    return 0; 
}

