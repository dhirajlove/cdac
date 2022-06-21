/* Program to implement Searching Algorithms:
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

bool_t binary_search(int arr[], int key);
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

    /*
    //1. linear search:
    //step-1: accept key from user
    printf("enter the value of key : ");
    scanf("%d", &key);

    if( linear_search(arr, key) )
        printf("%d is found in an array, total no. of comparisons = %d\n", key, comparisons);
    else
        printf("%d is not found in an array, total no. of comparisons = %d\n", key, comparisons);

    */

    //2. binary search:
    //step-1: accept key from user
    printf("enter the value of key : ");
    scanf("%d", &key);

    if( binary_search(arr, key) )
        printf("%d is found in an array, total no. of comparisons = %d\n", key, comparisons);
    else
        printf("%d is not found in an array, total no. of comparisons = %d\n", key, comparisons);

    return 0;
}


bool_t binary_search(int arr[], int key)
{
    int left = 0;
    int right = SIZE-1;
    comparisons=0;

    while( left <= right )//if subarray is valid -> next iteration takes place
    {
        //step-2: calculate mid poistion
        int mid = (left +right) / 2;

        //step-3: compare value of key with an ele at mid pos if it matches then return true
        comparisons++;
        if( key == arr[ mid ] )
            return true;

        //step-4: if key do not matches with ele at mid pos
        //goto search key either into left subarray or into right subarray
        if( key < arr[ mid ] )//goto search key into the left subarray
            right = mid-1;
        else//if( key > arr[ mid ] ) -> goto search key into the right subarray
            left = mid+1;
    }//step-5: repeat step-2, step-3 & step-4 till either key do not found or max till subarray is valid

    //we get invalid subarray => key do not found
    return false;
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