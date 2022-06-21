#include<stdio.h> 

struct book 
{
    int id;   //4 
    char name[20]; //20  
    char author[20]; // 20 
}; 
int main()
{
    struct book b1 = { 1, "Cprogram","DennisRitchie"}; 
    struct book b2;
    b2 = b1;
    //printf("%d %s %s",b2.id,b2.name,b2.author);    

    // if(b1==b2)
    //     printf("same"); 
    // else 
    //     printf("Not same");     

}



