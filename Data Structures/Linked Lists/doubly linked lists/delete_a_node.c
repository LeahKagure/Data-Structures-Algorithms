//This programs demonstrates deleting of a 
//node from a doubly linked list

#include <stdio.h>
#include <stdlib.h>
/*
The three methods commonly used to delete a node are:
1) Deleting the head node
2) Deleting the middle node
3) Deleting the last node

All three methods can be handled in two steps:
- if the pointer to the node to be deleted is known
- if the head pointer is known

If the node to be deleted is the head node,
then make the next node the head
If a node is deleted, connect the next and
previous node of the deleted node
*/

//Create a node of a doubly linked list
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

//A function to delete a node from a linked list
void delete_node(struct Node **head_ref, struct Node *del)
{
    //base case
    if (*head_ref == NULL || del == NULL)
    return;
    //if node to be deleted is the head node
    if (*head_ref == del)
        *head_ref = del->next;
    //change next if the node to be deleted is
    //not the last node
    if (del->next != NULL)
        del->next->prev = del->prev;
    //change prev only if node to be deleted is
    //not the first node
    if (del->prev != NULL)
        del->prev->next = del->next;
    //free the memory space occupied by del
    free(del);
    return;
}

//A function to insert a node at the beginning if the 
//doubly linked list
void insert_node(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

//A function to print the doubly linked list
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
    insert_node(&head, 10);
    insert_node(&head, 8);
    insert_node(&head, 6);
    insert_node(&head, 4);

    printf("The original list:\n");
    print_list(head);

    //delete the nodes from the list
    delete_node(&head, head); //deletes the first node
    printf("\nThe result after deleting the first node:\n");
    print_list(head);
    delete_node(&head, head->next); //deletes the middle node
    printf("\nThe result after deleting the middle node:\n");
    print_list(head);
    delete_node(&head, head->next); //deletes the last node
    printf("\nThe final linked list after deleting the last node:\n");
    print_list(head);

    getchar();
}

//Time Complexity is: 0(1)
//Auxiliary space is: 0(1)