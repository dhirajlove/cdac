#include<stdio.h> 
void readArray(int arr[3][3],int row, int col); 
void printArray(int arr[3][3],int row, int col); 
int main()
{
    int arr[3][3]; 
    printf("Enter the array elements"); 
    readArray(arr,3,3); 
    printArray(arr,3,3); 
    return 0; 
}
void readArray(int arr[3][3],int row, int col)
{
        int r,c; 
        for(r=0;r<row;r++)
        {
               for(c=0;c<col;c++)
               {
                    scanf("%d",&arr[r][c]); 
               } 
        }   
}
void printArray(int arr[3][3],int row, int col)
{
        int r,c; 
        for(r=0;r<row;r++)
        {
               for(c=0;c<col;c++)
               {
                    printf("%4d",arr[r][c]); 
               }
               printf("\n");  
        }   
}

