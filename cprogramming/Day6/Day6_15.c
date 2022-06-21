#include<stdio.h> 
int main()
{
    // int ans; 
    // int a =0; 
    // int b =1;
    // int c =0;  
    
    // ans = a++ && b++ || c++ ;
    // //    (a++ && b++) || c++ ;
    // //        Opr1     ||  Opr2  
    // //         F       ||   F 
    // //              F   

    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
    
    
    // int ans; 
    // int a =1; 
    // int b =1;
    // int c =0;  
    
    // ans = a++ && b++ || c++ ;
    // //    (a++ && b++) || c++ ;
    // //         Opr1    || XXX  
    // //       T         ||  XXX
    

    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
    
    // int ans; 
    // int a =0; 
    // int b =0;
    // int c =11;  
    
    // ans = ++a && b || c++ ;
    
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
    
    // int ans; 
    // int a =1; 
    // int b =1;
    // int c =0;  
    
    // ans = a || b && c ;
    // //   a || (b && c)
    // //  opr1 || opr2  
    // //   T   || XXXX
    // //    T

    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
   

    // int ans; 
    // int a =0; 
    // int b =10;
    // int c =11;  
    
    // ans = a++ || b++ && c++ ;
    // //   a    || (b++ && c++)
    // //  opr1 || opr2  
    // //   F    || T

    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
   
    // int ans; 
    // int a =1; 
    // int b =1;
    // int c =0;  
    
    // ans = a++ || b++ || c++ ;
    // //      T || XXX || XXX
   
    // printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
   

    int ans; 
    int a =1; 
    int b =1;
    int c =0;  
    
    ans = a++ && b++ && c++ ;
    //    (a++ && b++) &&  c++
    //       opr1     && opr2   
    //        T     && F
    //              F

    printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 
   
    // int a = 0; 
    // int b = 2;
    // int c = 3; 
    // int ans; 

    // ans = a++ || b++ && ++c && a++ || b++;   

    // //( a++) || ( (b++ && ++c) && a++ ) || b++;
    // //  F++  || (( T++ && ++T )) || ?? 
    // //  F++  || ( T  ) || ?? 
    // //      T || XXX 
    // //         T  


    //printf("ans=%d a=%d b=%d c=%d",ans,a,b,c); 

    return 0;
}



