/* Program to implement Sorting Algorithms:
    1. Selection Sort
    2. Bubble Sort
    3. Insertion Sort
====================================================================*/

//file inclusion section
#include<stdio.h>

//global declaration section
#define SIZE 10

#define SWAP(a, b) { int temp; temp = a; a = b; b = temp; }

void display_array_elements(int arr[]);//pointer to 1-d array
void selection_sort(int arr[]);
void bubble_sort(int arr[]);
void efficient_bubble_sort(int arr[]);
void insertion_sort(int arr[]);

//entry point function
int main(void)
{
    int arr[ SIZE ] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    //int arr[ SIZE ] = { 30, 40, 10, 20, 70, 80, 90, 100, 50, 60 };
    //int arr[ SIZE ] = { 30, 20, 60, 50, 10, 40 };
    //int arr[ SIZE ] = { 10, 20, 30, 40, 50, 60 };

    printf("bfore sort => ") ; display_array_elements(arr);
    
    //selection_sort(arr);
    //bubble_sort(arr);
    //efficient_bubble_sort(arr);
    
    insertion_sort(arr);

    printf("after sort => ") ; display_array_elements(arr);

    return 0;
}


void insertion_sort(int arr[])
{
    int i;
    int iterations=0;
    int while_cnt=0;

    for( i = 1 ; i < SIZE ; i++ )
    {
        int key = arr[ i ];
        int j = i-1;

        iterations++;
        //if index is valid && compare key with ele at that index	
        while( j >= 0 && key < arr[ j ] )
        {
            while_cnt++;    
            arr[ j+1 ] = arr[ j ];//shift ele towards its right by 1 pos
            j--;//goto prev ele
        }
        
        //insert key into an array at its approproate position
        arr[ j+1 ] = key;
    }

    printf("no. of iterations are : %d\n", iterations);
    printf("while_cnt = %d\n", while_cnt);
}


void efficient_bubble_sort(int arr[])
{
    int pos;
    int iterations=0;
    int comparisons=0;
    int itr;
    int flag = 1;

    for( itr = 0 ; itr < SIZE-1 && flag == 1 ; itr++ )//outer for loop is for iterations
    {
        iterations++;
        flag=0;

        for( pos = 0 ; pos < SIZE-1-itr ; pos++ )//inner for loop is for pos
        {
            comparisons++;
            //if prev pos ele > next pos ele i.e. if pair is not in order => swap them
            if( arr[ pos ] > arr[ pos+1 ] ){
                flag=1;
                SWAP(arr[ pos ], arr[ pos+1 ] );
            }
            //if all pairs are in order => control will go inside if block and flag remains 0
            //no need to go to next iteration
        }
    }

    printf("no. of iterations are : %d\n", iterations);
    printf("no. of comparisons are : %d\n", comparisons);
}


void bubble_sort(int arr[])
{
    int pos;
    int iterations=0;
    int comparisons=0;
    int itr;

    for( itr = 0 ; itr < SIZE-1 ; itr++ )//outer for loop is for iterations
    {
        iterations++;

        for( pos = 0 ; pos < SIZE-1-itr ; pos++ )//inner for loop is for pos
        {
            comparisons++;
            //if prev pos ele > next pos ele i.e. if pair is not in order => swap them
            if( arr[ pos ] > arr[ pos+1 ] )
                SWAP(arr[ pos ], arr[ pos+1 ] );
        }
    }

    printf("no. of iterations are : %d\n", iterations);
    printf("no. of comparisons are : %d\n", comparisons);
}


void selection_sort(int arr[])
{
    int sel_pos;
    int pos;
    int iterations=0;
    int comparisons=0;

    for( sel_pos = 0 ; sel_pos < SIZE-1 ; sel_pos++ )//outer for loop is for iterations
    {
        iterations++;

        for( pos = sel_pos+1 ; pos < SIZE ; pos++ )//inner for loop is for pos
        {
            //if ele at selected pos > ele at pos => swap them
            comparisons++;
            if( arr[ sel_pos ] > arr[ pos ] )
                SWAP(arr[ sel_pos ], arr[ pos ]);
        }
    }

    printf("no. of iterations are : %d\n", iterations);
    printf("no. of comparisons are : %d\n", comparisons);
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