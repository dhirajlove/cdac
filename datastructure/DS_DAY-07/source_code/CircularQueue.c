/* Program to implement Circular Queue Operations => by using an array */

#include<stdio.h>
#include<stdlib.h>


#define SIZE 5

typedef struct
{
	int arr[ SIZE ];
	int rear;
	int front;
} queue_t;

//sizeof(queue_t) : 28 bytes
typedef int bool_t;

void init_queue(queue_t *pq);
bool_t is_queue_full(queue_t *pq);
bool_t is_queue_empty(queue_t *pq);
void enqueue(queue_t *pq, int ele);
int get_front(queue_t *pq);
void dequeu(queue_t *pq);


int menu(void)
{
    int choice;

    //display menu list
    printf("***** circular queue *****\n");
    printf("0. exit\n");
    printf("1. enqueue\n");
    printf("2. dequeue\n");

    //accept choice from user
    printf("enter the choice : ");
    scanf("%d", &choice);

    //return it to the calling function
    return choice;
}

enum menu_options{ EXIT, ENQUEUE, DEQUEUE };


int main(void)
{
    queue_t q;
    int ele;

    init_queue(&q);

    while( 1 )
    {

        int choice = menu();
        switch (choice)
        {
            case EXIT:
                exit(0);

            case ENQUEUE:
                //step-1: check queue is not full 
                if( !is_queue_full(&q) )//if queue is not full then only element can be inserted into it from rear end
                {
                    printf("enter an element : ");
                    scanf("%d", &ele);
                    enqueue(&q, ele);
                    printf("%d inserted into the queue ...\n", ele);
                }
                else
                    printf("queue is full !!!\n");
                break;

            case DEQUEUE:
                //step-1: check queue is not empty
                if( !is_queue_empty(&q) )//if queue is not empty then only element can be deleted from it which is at front end
                {
                    ele = get_front(&q);
                    dequeu(&q);
                    printf("deleted ele is : %d\n", ele);
                }
                else
                    printf("queue is empty !!!\n");
                break;

            default:
                printf("invalid choice !!!\n");
                break;
        }
    }


    return 0;
}

void init_queue(queue_t *pq)
{
    pq->front = pq->rear = -1;
}

bool_t is_queue_full(queue_t *pq)
{
    return ( pq->front == (pq->rear+1) % SIZE );
}


bool_t is_queue_empty(queue_t *pq)
{
    return ( pq->rear == -1 && pq->front == pq->rear );
}

void enqueue(queue_t *pq, int ele)
{
    //step-2: increment the value of rear by 1
    pq->rear = ( pq->rear + 1 ) % SIZE;

    //step-3: insert element into the queue from rear end
    pq->arr[ pq->rear ] = ele;

    /* step-4: if( front == -1 )
            front = 0
    */

   if( pq->front == -1 )
    pq->front = 0;
}

int get_front(queue_t *pq)
{
    //return/read the value of an ele which is at front end
    return ( pq->arr[ pq->front ] );
}

void dequeu(queue_t *pq)
{
    if( pq->front == pq->rear )//if we are deleting last ele
        pq->rear = pq->front = -1;//reinitialize queue
    else
    /* step-2: increment the value of front by 1.
    [ by means of incrementing value of front by 1 we are accheving deletion of an element from the queue].*/
    pq->front = ( pq->front + 1 ) % SIZE;
}








