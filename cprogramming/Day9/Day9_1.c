#include<stdio.h> 

// Annonymous enum  
// enum  
// {
//      RED=1,BLUE,GREEN

// }c1,c2,c3;  
// enum color 
// {
//      RED=1,BLUE,GREEN

// }c1,c2,c3;  
int main()
{
    enum color 
    {
        RED=1,BLUE,GREEN

    }c1,c2,c3;
    
    c1 = RED; 
    c2 = BLUE; 
    c3 = GREEN; 
    printf("%d %d %d",c1,c2,c3);  
    return 0;
}


// //Global 
// enum color //created the datatype 
// {
//      RED=1,BLUE,GREEN
//     //RED=1,BLUE=11,GREEN
//      //RED=1,BLUE=1,GREEN
//      //RED,BLUE=1,GREEN
//     //RED=1.5,BLUE,GREEN

// };  
// int main()
// {
//        enum color c1,c2,c3;  
//        printf("%d",sizeof(enum color)); //4 bytes 
//        //enum color ==> datatype 
//        // c1 ==> c1 is the variable 

//         printf("%d ",RED);
//         printf("%d ",BLUE);
//         printf("%d ",GREEN); 
//     return 0;
// }


// //Global 
// enum color //created the datatype 
// {
//     RED,BLUE,GREEN
    
// };  
// int main()
// {
//     //primitive/builtin 
//     // datatypes 
//     //int,float,char,double
//     // int          var; 
//     // datatype     variable-name

//     //  printf("%d ",RED);
//     //  printf("%d ",BLUE);
//     //  printf("%d ",GREEN);   

//     // datatype variable-name
//        //enum color c1;  
//        enum color c1,c2,c3;  
//        //enum color ==> datatype 
//        // c1 ==> c1 is the variable 

//     //    c1  = RED; 
//     //    c2 = BLUE; 
//     //    c3 = GREEN;    

//     //    printf("%d %d %d \n",c1,c2,c3); 
//     //    c1++; 
//     //    c2++;  
//     //    c3++;   
//     //    printf("%d %d %d \n",c1,c2,c3); 

//     //RED++;  // 0++ 
//     // 0 = 0 + 1 
//     // Lvalue error 
    
//     return 0;
// }




