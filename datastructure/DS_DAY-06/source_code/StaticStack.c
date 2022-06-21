/* Program to implement Stack by using an array => "Static Stack" */
#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

//defined stack structure
typedef struct
{	
	int arr[ SIZE ];//20 bytes
	int top;//4 bytes
} stack_t;

typedef int bool_t;


//declarations of stack functionalities
void init_stack(stack_t *ps);
bool_t is_stack_full(stack_t *ps);
bool_t is_stack_empty(stack_t *ps);
void push_element(stack_t *ps, int ele);
int peek_element(stack_t *ps);
void pop_element(stack_t *ps);



int menu(void)
{
    int choice;

    //dislay menu list
    printf("***** static stack ******\n");
    printf("0. exit\n");
    printf("1. push element\n");
    printf("2. pop element\n");
    printf("3. peek element\n");

    //accept choice from user
    printf("enter the choice: ");
    scanf("%d", &choice);

    //return the choice to the calling function
    return choice;
}

enum menu_options{ EXIT, PUSH, POP, PEEK };

int main(void)
{
    //printf("sizeof(stack_t): %lu bytes\n", sizeof(stack_t));
    stack_t s;
    int ele;

    init_stack(&s);
    while( 1 )
    {
        int choice = menu();
        switch (choice)
        {
            case EXIT:
                exit(0);

            case PUSH:
                //step-1: check stack is not full 
                if( !is_stack_full(&s) )//if stack is not full then only element can be pushed onto it from top end
                {
                    printf("enter an element : ");
                    scanf("%d", &ele);
                    push_element(&s, ele);
                    printf("%d pushed onto the stack ....\n", ele);
                }
                else
                    printf("stack overflow !!!\n");
                break;

            case POP:
                //step-1: check stack is not empty 
                if( !is_stack_empty(&s) )//if stack is not empty then only element can be popped which is at top end
                {
                    ele = peek_element(&s);
                    pop_element(&s);
                    printf("popped ele is : %d\n", ele);
                }
                else
                    printf("stack underflow !!!\n");
                break;

            case PEEK:
                //step-1: check stack is not empty 
                if( !is_stack_empty(&s) )//if stack is not empty then only element can be peeked which is at top end
                {
                    ele = peek_element(&s);
                    printf("topmost ele is : %d\n", ele);
                }
                else
                    printf("stack underflow !!!\n");
                break;

        default:
            printf("invalid choice !!!\n");
            break;
        }

    }




    return 0;
}

//definitions of stack functionalities
void init_stack(stack_t *ps)
{
    //initialize value of top as -1
    ps->top =-1;   
}

bool_t is_stack_full(stack_t *ps)
{
    return ( ps->top == SIZE-1 );
}

bool_t is_stack_empty(stack_t *ps)
{
    return ( ps->top == -1 );
}

void push_element(stack_t *ps, int ele)
{
    //step-2: increment the value of top by 1
    ps->top++;

    //step-3: insert an element onto the stack at top end
    ps->arr[ ps->top ] = ele;
}

int peek_element(stack_t *ps)
{
    //step-2: return the value of topmost element (without incrementing/decrementing value of top).
    return ( ps->arr[ ps->top ] );
}

void pop_element(stack_t *ps)
{
    /* step-2: decrement the value of top by 1
    [ by means of decrementing value of top by 1 we are achieving deletion of an element from the stack ].*/
    ps->top--;
}



