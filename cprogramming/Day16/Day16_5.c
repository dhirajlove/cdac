#include<stdio.h> 

// Input single digit number from a user 
// 1 ==> one 
// 0 ==> zero 

int main()
{
    char *numbers[] = {"zero","One","two","three"}; 
    int num;
      //printf("%s",numbers[0]);   
      //printf("%s",*(numbers+0));  
      // printf("Enter the single digit number"); 
      //scanf("%d",&num); // 1 

      //printf("%s",numbers[num]); // numbers[1]   

        printf("%d",sizeof(numbers)); // 4 * 4 ==> 16 

    return 0; 
}



