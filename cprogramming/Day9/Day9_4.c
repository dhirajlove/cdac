#include<stdio.h> 

// menu-driven program 
int main()  
{

   // creating the datatype  
    enum operations 
    {
        ADD=1,SUBTRACT=2,MULTIPLY=3,DIVIDE=4 
    };
    
    int num1,num2; 
    
    enum operations choice; 
    int ans; 
    do 
    {
            
            printf("1.Addition \n");
            printf("2.Subtraction \n");
            printf("3.Multiplication \n");
            printf("4.Division \n");
            printf("Enter the choice");
            scanf("%d",&choice); //1  
            
            printf("\n Enter the num1 and num2"); // 2 3 
            scanf("%d%d",&num1,&num2); 


            switch (choice)
            {
                case ADD:           // case 1: 
                ans = num1 + num2;  
                printf("\n ans = %d",ans);   
                break;
                
                case SUBTRACT: 
                ans = num1 - num2;
                printf("\n ans = %d",ans); 
                break; 

                case MULTIPLY: 
                ans = num1 * num2; 
                printf("\n ans = %d",ans); 
                break; 

                case DIVIDE: 
                ans = num1 / num2; 
                printf("\n ans = %d",ans); 
                break;     
            
            default:
                printf("Invalid"); 
                break;
            }
    printf("\n 1 to continue and 0 to exit"); 
    scanf("%d",&choice);         
    }while(choice!=0);        
    return 0;
}
