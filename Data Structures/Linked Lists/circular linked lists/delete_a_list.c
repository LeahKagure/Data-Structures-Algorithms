//This program implements how to delete a circular
//singly linked list

#include<stdio.h>
#include<stdlib.h>

//Create a structure for the node
struct Node {
    int data;
    struct Node *next;
};

//A function to insert a node at the beginning of the 
//linked list
void insert_at_beginning(struct Node **head_ref, int data)
{
    //create a new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head_ref;

    //if list is not NULL, set the next of the last node
    if (*head_ref != NULL)
    {
        //find the node before head and update its next
        struct Node *temp = *head_ref;
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = new_node;
    }
    else
        new_node->next = new_node; //for the first node

    *head_ref = new_node;
}
/*
A node can be deleted from a circular linked list in 3 ways:
- If it the only node in the list
- If it is the last node
- If it any node in the list

1) Deleting if the node is the only node in the circular
linked list
- free the node's memory. The last value should be NULL.

2) Deleting the node if it is the last node
- Locate the node before the last node in the list. Store the
address of the node next to the last node in temp, delete the 
memory of the last node and make temp the new last node.

3) Deleting any node from a circular linked list
- If the list is empty, return
- Else, define two pointers, current and previous, and initialize
the pointer current to the head node
- Traverse the list using current to find the node to be deleted.
Before moving from current to the next node, always set previous = current
- If the node is found, check if it the only node in the list, if it is,
set head = NULL and free current
- If the list has more than one node, check if it is the first node,
head == current, if it is, move previous until it reaches the last node
and after set head = head->next and previous->next = head. And delete current
-If current isn't the first node, check if it is the last node in the list
current->next == head. 
If it is, set previous->next = head and delete the node freeing current
- If the node to be deleted isn't the first or the last node,
set previous->next = current->next and delete current 
*/
//Function to delete a given node from the circular linked list
void delete_the_node(struct Node *head, int key)
{
    if (head == NULL)
        return;

    //Find the required node
    struct Node *current = head, *previous;
    while (current->data != key)
    {
        if (current->next == head)
        {
            printf("\nGiven node is not found in the list!!!");
            break;
        }
        previous = current;
        current = current->next;
    }
    //Check if the node is the only node
    if (current->next == head)
    {
        head = NULL;
        free(current);
        return;
    }
    //If more than one node, check if it's the first node
    if (current == head)
    {
        previous = head;
        while (previous->next != head)
            previous = previous->next;
        head = current->next;
        previous->next = head;
        free(current);
    }
    //Check if the node is the last node
    else if (current->next == head && current == head)
    {
        previous->next = head;
        free(current);
    }
    else
    {
        previous->next = current->next;
        free(current);
    }
}

//Function to print the nodes in a circular linked list
void print_list(struct Node *head)
{
    struct Node *temp = head;
    if (head != NULL)
    {
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
    printf("\n");
}

//Main code
int main()
{
    //initialize the list as empty
    struct Node *head = NULL;
    //create a linked list
    insert_at_beginning(&head, 10);
    insert_at_beginning(&head, 8);
    insert_at_beginning(&head, 6);
    insert_at_beginning(&head, 4);
    insert_at_beginning(&head, 2);
    insert_at_beginning(&head, 0);

    printf("The circular linked list before deletion:\n");
    print_list(head);

    delete_the_node(head, 6);

    printf("The linked list after deleting 6:\n");
    print_list(head);

    delete_the_node(head, 2);

    printf("The linked list after deleting 2:\n");
    print_list(head);
    printf("\n");
}

/*
- Time complexity is: 0(N)
- AUxiliary space is: 0(1)
*/