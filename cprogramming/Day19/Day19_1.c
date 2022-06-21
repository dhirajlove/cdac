#include<stdio.h> 

// Global structure 
struct emp 
{
    int empno; 
    char name[20]; 
    double sal; 
};
void accept_emp(struct emp a[],int n); 
void print_emp(struct emp a[],int n); 
int main()
{
    struct emp arr[3]; // array of structure      
    
    accept_emp( arr , 3  ); 
    print_emp( arr, 3 ); 
    return 0; 
}
void print_emp(struct emp a[],int n)
{
        int i; 
        for(i=0;i<n;i++) 
        {
          printf("%d %s %lf\n",a[i].empno,a[i].name,a[i].sal); 
        }       
}

void accept_emp(struct emp a[],int n)
{
        int i; 
        for(i=0;i<n;i++) 
        {
               printf("Enter empid name and sal"); 
               scanf("%d%s%lf",&a[i].empno,a[i].name,&a[i].sal); 
        }       
}
