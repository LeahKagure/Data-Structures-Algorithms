/* A C program to create a linked list */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

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

    //The 3 blocks have been allocated dynamically.
    //There are pointers to the 3, being head, second, third
    /*
    head            second             third
     |                 |                 |
     |                 |                 |
 +-------+         +-------+          +-------+
 | # | # |         | # | # |          | # | # |
 +-------+         +-------+          +-------+
 '#' represents any random value as we haven't assigned anything yet
 */
    head->data = 1; //Data has been assigned to the first node
    head->next = second; //A link between the first and the second node

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
/*
    head
     |
     |
 +-------+         +-------+          +---------+
 | 1 | o --------->| 2 | o ---------->| 3 | NULL|
 +-------+         +-------+          +---------+
 */
    return 0;
}