#include<stdio.h> 

int main()
{
    int num; 
    char ch; 
    printf("Enter the values");
    //scanf("%d%*c%c",&num,&ch); 
    scanf("%c%d",&ch,&num); 
    printf("%c %d",ch,num); 
    return 0; 
}

// int main()
// {
//     int num; 
//     char ch; 
//     printf("Enter the number");
//     scanf("%d%*c",&num); 
    
//     // \n ==> newline 
//     // '\n' ==> char
//     printf("Enter the character"); 
//     scanf("%c",&ch); 
    
//     printf("%d %c",num,ch); 
//     return 0; 
// }
// int main()
// {
//     int num; 
//     char ch; 
//     printf("Enter the character"); 
//     scanf("%c",&ch); 
//     printf("Enter the number");
//     scanf("%d",&num); 
//     printf("%c %d",ch,num); 
//     return 0; 
// }