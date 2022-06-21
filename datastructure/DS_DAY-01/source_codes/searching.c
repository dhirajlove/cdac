/* Program to implement searching algorithms
    1. Lienar Search
    2. Binary Search
====================================================================*/

//file inclusion section
#include<stdio.h>

//global declaration section
#define SIZE 10
#define true 1
#define false 0

typedef int bool_t;

bool_t linear_search(int arr[], int key);
void display_array_elements(int arr[]);//pointer to 1-d array

int comparisons=0;


//entry point function
int main(void)
{
    int arr[ SIZE ] = { 10, 20, 30, 40, 50, 60, 20, 80, 90, 100 };
    //int arr[ SIZE ] = { 30, 40, 10, 20, 70, 80, 90, 100, 50, 60 };
    int key;

    display_array_elements(arr);

    //1. linear search:
    //step-1: accept key from user
    printf("enter the value of key : ");
    scanf("%d", &key);

    if( linear_search(arr, key) )
        printf("%d is found in an array, total no. of comparisons = %d\n", key, comparisons);
    else
        printf("%d is not found in an array, total no. of comparisons = %d\n", key, comparisons);


    return 0;
}

bool_t linear_search(int arr[], int key)
{
    int index;
    comparisons=0;

    //traverse an array and compare value of key with each array ele
    for( index = 0 ; index < SIZE ; index++ )
    {
        //if value of key matches with any array element 
        comparisons++;
        if( key == arr[ index ] )
            return true;
    }

    //value of the key do not matches with any array element
    return false; 
}

void display_array_elements(int arr[])
{
    int index;

    printf("array ele's are : ");
    for( index = 0 ; index < SIZE ; index++ )
    {
        printf("%4d", arr[ index ] );
    }
    printf("\n");
}