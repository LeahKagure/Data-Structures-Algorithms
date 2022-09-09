//This program implements three methods used to add a node to a linked list

/*
A node can be inserted into a linked list in 3 ways:
- At the front of a linked list
- After a given node
- At the end of the linked list
*/

#include <stdio.h>
#include <stdlib.h>

//Create a node for the linked list
struct Node
{
    int data;
    struct Node *next;
};

/* 
1) Adding a node at the front of a linked list
The new node is added before the head of the linked list
and it becomes the new head of the linked list.
The function recieves a pointer to the head and it changes
the new node's point to become the head pointer

Time complexity is : 0(1)
Auxiliary space is : 0(1)
*/
void insert_at_front(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

/*
2) Adding a new node after a given node
Begin by checking if the given previous node is NULL or not
then allocate a new node. Assign data to the new node making 
the next of the new node to become the next of the previous node.
Move the next of the previous as a new node

Time complexity is : 0(n), where n is the size of the linked list
Auxiliary space is : 0(1)
*/

void insert_after_node(struct Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("The given previous node can't be NULL\n");
        return;
    }

    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

/*
3) Adding a node at the end of the linked list/ append
The new node is always added after the last node of the linked list
hence, begin by traversing the list until the end and then change 
the next of the last node to a new node

Time complexity is : 0(n),  where n is the number of nodes in the list
Auxiliary space is : 0(1)
*/

void insert_at_end(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    struct Node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    
    last->next = new_node;
    return;
}

void print_list(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

//Main code
int main()
{
    struct Node *head = NULL;
    insert_at_end(&head, 6);
    print_list(head);
    printf("\n");
    insert_at_front(&head, 7);
    print_list(head);
    printf("\n");
    insert_at_front(&head, 1);
    print_list(head);
    printf("\n");
    insert_at_end(&head, 4);
    print_list(head);
    printf("\n");
    insert_after_node(head->next, 8);

    printf("\n The final created Linked list is: \n");
    print_list(head);
    printf("\n");
    printf("\n");

    return 0;
}