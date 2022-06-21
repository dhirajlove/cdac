#include<stdio.h> 
void sumpro(int *a, int *b, int *ps, int *pp) {

    *ps = *a  + *b;
    /*
        valueat(ps) = valueat(a) + valueat(b)
                    = valueat(100) + valueat(200)
                    =     12       +   4  
                    =      16
        (Address) 300 ===> 16             
    */ 
   *pp = *a * *b; 
   /*   
         valueat(a) * valueat(b)
         valuat(100) * valuat(200)
            12       *   4 
            48 

     valueat(pp) ==>  valuat(400) ==> p ==> 48  
              
   */    

}
int main() 
{
 int x = 12, y = 4, s, p;
 sumpro(&x, &y, &s, &p);
 printf("%d %d", s, p); //16 48  
 return 0;
}
