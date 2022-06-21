#include<stdio.h> 

// Global declaration 
struct emp 
{
    int empid  ; // 4 
    char name[20] ; //20  
    double salary; // 8 
};

int main()
{
    // int arr[3] = {1,2,3}; 

    struct emp arr[3] ={
                    {1,"Ketan",1000.00}, 
                    {2,"Amit",2000.00}, 
                    {3,"Aditya",3000.00}
    };  

    int i; 
    for(i=0;i<3;i++)
        printf("%d %s %.2lf\n",arr[i].empid,arr[i].name,arr[i].salary);
    return 0; 
}

