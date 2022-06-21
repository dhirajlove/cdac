#include<stdio.h> 

int main()
{
    char name[80],city[40],job[40];

    printf("Enter the city"); 
    scanf("%s%*c",city); 
    /*
        %s will read upto white space ( space , tab , newline )

        scanset 
    */
    printf("Enter the name"); 
    scanf("%[^\n]%*c",name);

    



    printf("Enter the job"); 
    gets(job); // preferred way of reading whole line 
    // gets() will scan the string upto \n 

    printf("city = %s \n name=%s \n job=%s",city,name,job);

    return 0; 
}