//This program demonstrates how to reverse a doubly linked list

#include <stdio.h>
#include <stdlib.h>

/*
The steps involved in reversing are:
- Travers the linked list using a pointer
- Swap the prev and next pointers for all nodes
- Lastly change the head pointer of the doubly linked list
*/

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

//Function to reverse the list
void reverse_list(struct Node **head_ref)
{
    struct Node *temp = NULL;
    struct Node *current = *head_ref;

    //swap the prev and next nodes for the entire list
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    //check if the list has one node or empty
    if (temp != NULL)
        *head_ref = temp->prev;
}

//Function to insert a node at the beginning in the linked list
void insert_list(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

//Function to print the doubly linked list
void print_list(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

//Main code
int main()
{
    struct Node *head = NULL;
    //Insert into the linked list
    insert_list(&head, 10);
    insert_list(&head, 8);
    insert_list(&head, 6);
    insert_list(&head, 4);
    insert_list(&head, 2);

    printf("The original linked list:\n");
    print_list(head);

    reverse_list(&head);

    printf("\nThe reversed linked list:\n");
    print_list(head);

    getchar();
}

//Time Complexity is: 0(N)
//Auxiliary space is: 0(N)

/*
A doubly linked list can also be reversed using a stack
The steps involved are:
- Traverse the whole linked list and keep pushing the
node's data into a stack
- Then pop the elements out of the stack and update the
doubly linked list

-Time Complexity is: 0(N)
-Auxiliary space is: 0(N)
*/