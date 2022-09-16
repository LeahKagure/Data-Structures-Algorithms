//This program demonstrates the four methods used to insert a node
//in a doubly linked list

#include <stdio.h>
#include <stdlib.h>

//Create a doubly linked list node
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

/*
1) Adding a node at the beginning of the doubly linked list
- The new node is always added before the head of the linked list and it
becomes the new head of the DLL.
- The function to add a node recieves a pointer to the head because it changes
the head pointer to 'point' to a new node
*/

void insert_at_front(struct Node **head_ref, int new_data)
{
    //allocate the new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    //input data
    new_node->data = new_data;
    //change the next of the new node as head and its previous to NULL
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    //change the previous of head node to new node
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    //move the head to point to the new node
    (*head_ref) = new_node;
}

/*
2) Adding a node after a given node
- The pointer to the prev_node is given and the new node
is inserted after the given node
*/

void insert_after(struct Node *prev_node, int new_data)
{
    //check whether the given prev_node is NULL
    if (prev_node == NULL)
    {
        printf("The given previous node cannot be NULL\n");
        return;
    }
    //allocate a new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    //input data
    new_node->data = new_data;
    //make the next of the new node, to be the next of the prev_node
    new_node->next = prev_node->next;
    //make the next of prev_node to be the new_node
    prev_node->next = new_node;
    //make the prev_node as the previous of the new_node
    new_node->prev = prev_node;
    //change the previous of the next node of the new node
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

/*
3) Adding a node at the end
- The new node is always added after the last node.
- The list is traversed until the end and the next of the last node
is changed to the new node
*/

void insert_at_end(struct Node **head_ref, int new_data)
{
    //allocate the node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    //input data
    new_node->data = new_data;
    //since the new node is the last node, its next will be NULL
    new_node->next = NULL;
    //if the linked list is empty, make the new node as the head
    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    //otherwise traverse until the last node
    while (last->next != NULL)
        last = last->next;
    //change the next of the last node
    last->next = new_node;
    //make the last node the previous of the new node
    new_node->prev = last;
    return;
}
/*
4) Adding a node before a given node
- The pointer to the node is next_node and the 
data is added as new_data
*/
void insert_before(struct Node **head_ref, struct Node *next_node, int new_data)
{
    //check if the given next_node is NULL
    if (next_node == NULL)
    {
        printf("The given previous node cannot be NULL\n");
        return;
    }
    //allocate the new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    //input data
    new_node->data = new_data;
    //make the previous of new_node as previous of next node
    new_node->prev = next_node->prev;
    //make the previous of next_node as the new_node
    next_node->prev = new_node;
    //make the next_node as next of new_node
    new_node->next = next_node;
    //change the previous of the new_node's next_node
    if (new_node->prev != NULL)
    {
        new_node->prev->next = new_node;
    }
    else {
        (*head_ref) = new_node;
    }
}
//Function to print the doubly linked lists from the given node
void print_list(struct Node *node)
{
    struct Node *(last);
    printf("\nTraversal in the forward direction\n");
    while (node != NULL)
    {
        printf("%d ", node->data);
        last = node;
        node = node->next;
    }

    printf("\nTraversal in the reverse direction\n");
    while (last != NULL)
    {
        printf("%d ", last->data);
        last = last->prev;
    }
}

//Main code
int main()
{
    struct Node *head = NULL;
    insert_at_front(&head, 10);
    insert_at_front(&head, 5);
    insert_after(head->next, 20);
    insert_before(&head, head->next->next, 15);
    insert_at_end(&head, 25);

    printf("The final DLL is: ");
    print_list(head);

    getchar();
    return 0;
}

/*
- Another method uses constructor calls inside the node
class in order to minimize the number of lines of code
and the memory allocation work
*/