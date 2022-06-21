#include<stdio.h> 

int main()
{
    int num = 10; 
    int num2 = 20;

    int *ptr1 = &num; 
    int *ptr2 = &num2; 
    
    int result; 

    //result = ptr1 + ptr2; // NO 
    //result = ptr1 /  ptr2; // NO  
    //result = ptr1 * ptr2; // NO 
      
      result = ptr1 - ptr2; // OK  

    return 0; 
}
// int main()
// {
//     int num = 10; 
//     int *ptr = &num; 
    
//     // ptr = ptr + 1;
//     // ptr = ptr - 1;
//     // ptr++; 
//     // ptr--;    

//     //ptr = ptr / 2;  // NO 
//     //ptr = ptr * 2;  // NO 
//     *ptr = *ptr * 2; 
//     //     valueat(ptr) * 2 
//     //     valueat(100) * 2 
//     //        10 * 2 
//     //          20 

//     //*ptr ==> 100 location ==> 20 
//     printf("%d %d",num,*ptr); 
//     //             20   20     
//     return 0; 
// }