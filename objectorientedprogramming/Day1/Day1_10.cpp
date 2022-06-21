#include<stdio.h> 
// Global structure 
struct Employee
{
    private: 
    char name[32]; 
    int empid; 
    float salary; 

    public: 
    //struct Employee *ptr = &emp 
    void accept_record ( void )
    {
        
        printf("Name    :   ");
        scanf("%s",name); 
        printf("Empid   :   ");
        scanf("%d",&empid); 
        printf("Salary  :   ");
        scanf("%f",&salary); 

    }
    
    void print_record( void  )
    {
            printf("Name     :   %s\n",name); 
            printf("Empid    :   %d\n",empid); 
            printf("Salary   :   %.2f\n",salary); 
    }


};



// Global function 
int main()
{
     
    struct Employee emp; 

    emp.accept_record( );   
    //emp.salary = 0; 
    emp.print_record( );  
    


    return 0; 
}

