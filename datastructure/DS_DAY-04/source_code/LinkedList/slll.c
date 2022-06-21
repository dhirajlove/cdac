//Program to implement basic operations of Singly Linear Linked List

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;//4 bytes
    struct node *next;//self referential pointer - 4 bytes
}node_t;

//struct node ==> node_t

/*  as next pointer will going to store an addr of such type of variable in which it is defined as
    one of its member, hence next is referred as self referential pointer */

//sizeof(struct node) = 8 bytes - on  32-bit compiler
//sizeof(struct node *) = 4 bytes - on  32-bit compiler


//initially list is empty
node_t *head = NULL;


//declarations of user defined functions - linked list functionalities
node_t *create_node(int data);
void display_list(void);
int count_nodes(void);
void add_node_at_last_position(int data);
void add_node_at_first_position(int data);
void add_node_at_specific_position(int pos, int data);


//entry point function
int main(void)
{
    int pos;
    
    add_node_at_last_position(10);
    add_node_at_last_position(20);
    add_node_at_last_position(30);
    add_node_at_last_position(40);
    add_node_at_last_position(50);
    add_node_at_last_position(60);
    add_node_at_last_position(70);

    
    display_list();

    //add_node_at_first_position(5);

    //add node into the list at specific position
    while( 1 )
    {
        //step-1: accept position from user
        printf("enter the pos : ");
        scanf("%d", &pos);

        //step-2: validate position - if pos is valid then only we can add node at that pos
        if( pos >= 1 && pos <= count_nodes() + 1 )//if pos is valid
            break;//while loop gets breaked

        printf("invalid position !!!\n");
    }
    
    add_node_at_specific_position(pos, 99);

    display_list();

    return 0;
}

//definitions of user defined functions -> linked list functionalities
node_t *create_node(int data)
{
    //1. allocate memory dynamically for a node
     node_t *temp = (node_t *)malloc(sizeof(node_t));

    /* on success malloc() function allocates requested bytes of memory from heap section 
    and it returns starting addr of that dynamically allocated block, which we need to typecast into
    required type of pointer, whereas on failure it returns NULL */
    if( temp == NULL ) //error handling logic
    {
        printf("malloc() failed !!!\n");
        exit(1);
    }
    //if memory got allocated succussfully for a node
    
    //2. initialize members of the node
    //initialize data part of the node by data whichever we passed to the function
    temp->data = data;
    //initialize next part of a node by NULL
    temp->next = NULL;

    //3. return an addr of dynamically allocated node to the calling function
    return temp;
}

void add_node_at_last_position(int data)
{
    //step-1: create a newnode dynamically
    node_t *newnode = create_node(data);

    //step-2: if list is empty => attach newly created node to the head
    if( head == NULL )
    {
        //store an addr of newly created node to the head
        head = newnode;        
    }else//step-3: if list is not empty
    {
        //start traversal of a list from first node
        node_t *trav = head;
        //traverse the list till last node
        while( trav->next != NULL )
        {
            trav = trav->next;//move trav pointer towards its next node
        }
        //attach newly created node to the last node i.e. store an addr newly created node into the
        //next part of last node
        trav->next = newnode;
    }
}


void add_node_at_first_position(int data)
{
    //step-1: create a newnode dynamically
    node_t *newnode = create_node(data);

    //step-2: if list is empty => attach newly created node to the head
    if( head == NULL )
    {
        //store an addr of newly created node to the head
        head = newnode;        
    }else//step-3: if list is not empty
    {
        //store an addr of cur first node into the next part of newly created node
        newnode->next = head;
        //attach newly created node to the head
        head = newnode; 
    }
}

void display_list(void)
{
    //step-1: check list is not empty
    if( head != NULL )//if list is not empty
    {
        //start traversal from first node
        node_t *trav = head;

        printf("no. of nodes in a list are : %d\n", count_nodes());
        printf("list is : head -> ");
        //traverse the list
        while( trav != NULL )
        {
            //visit data part of each node
            printf("%d -> ", trav->data);
            trav = trav->next;//move trav towards its next node
        }
        printf(" null\n");
    }else
        printf("list is empty !!!\n");
}

int count_nodes(void)
{
    int cnt = 0;

    //if list is not empty
    if( head != NULL )
    {
        //start traversal of list from first node
        node_t *trav = head;
        //traverse the list till last node and increment the count after visiting each node
        while( trav != NULL )
        {
            cnt++;
            trav = trav->next;
        }
    }

    return cnt;
}


void add_node_at_specific_position(int pos, int data)
{
    if( pos == 1 )//if pos is the first position
        add_node_at_first_position(data);
    else if( pos == count_nodes() + 1 )//if pos is the last position
        add_node_at_last_position(data);
    else//if pos is in between position
    {
        //step-1: create a newnode
        node_t *newnode = create_node(data);
        int i=1;
        //start traversal of the list from first node
        node_t *trav = head;
        //traverse the list till (pos-1)th node
        while( i < pos-1 ){
            i++;
            trav = trav->next;
        }
        //store an addr of cur (pos)th node into next part newly created node
        newnode->next = trav->next;
        //store an addr of newly created node into the next part of (pos-1)th node
        trav->next = newnode;
    }
}




