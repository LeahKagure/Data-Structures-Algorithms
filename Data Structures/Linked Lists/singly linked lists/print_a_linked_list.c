/* A C program to create a linked list */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

//A function to print the contents of a linked list from
//the given node
void print_linked_list(struct Node *n)
{
    while (n != NULL)
    {
        printf(" %d", n->data);
        n = n->next;
    }
    printf("\n");
}

//Main code
int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    //Allocating 3 nodes in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1; //Data has been assigned to the first node
    head->next = second; //A link between the first and the second node

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    print_linked_list(head);

    return 0;
}