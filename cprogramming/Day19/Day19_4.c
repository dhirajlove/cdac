#include<stdio.h> 
#pragma pack(1) 
struct Test 
{
    int a;  // 4 
    char b; // 1 
    double d1; // 8 
    int c;  // 4 
};  

int main()
{   
    printf("%d",sizeof(struct Test)); 
    return 0; 
}

// #include<stdio.h> 
// #pragma pack(1) 
// struct Test 
// {
//     int a; // 4 
//     char b; // 1   
//     int  c; // 4  
// };  

// int main()
// {   
//     printf("%d",sizeof(struct Test)); // 3 bytes  
//     return 0; 
// }
// struct Test 
// {
//     int a; // 4 
//     char b; // 1 
// }; 
// // size = 5 
// // 4 8 12 16 
// int main()
// {   
//     printf("%d",sizeof(struct Test)); // 3 bytes  
//     return 0; 
// }