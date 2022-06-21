#include<stdio.h> 

int main()
{
    char str[50]; 
    printf("Enter the string"); 
    //scanf("%[^a-z]",str); 

    //scanf("%[a-z]",str); 
      //get user input till char a-z (small case )   

    //scanf("%[a-zA-Z]",str); 
    //get user input till char a-z A-Z(small case + upper case  )   

     scanf("%[0-9]",str);    
     // get user input in range 0-9 ( only digit )
    /*
            [^a-z]
            get user input until char in a-z is found 
            (stop reading on small case )
            SUNBEAMiNFOTECH ==> SUNBEAM 
    */

    printf("%s",str); 
    return 0; 
}