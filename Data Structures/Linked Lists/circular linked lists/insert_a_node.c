//This program implements three methods used to add node to a circular
//singly linked list

/*
A node can be inserted in 4 ways into a circular singly linked list
- In an empty list
- At the beginning of the list
- At the end of the list
- In between the nodes

- Insertion in a circular linked list takes constant time, irrespective
of the length of the list
*/

#include <stdio.h>
#include <stdlib.h>

//Create a node for the linked list
struct Node {
    int data;
    struct Node *next;
};

/*
1) Inserting a node in an empty list
- The last pointer will be NULL initially when the list is empty,
after insertion, the new node is the last node and the first node 
points to itself

- Time complexity is: 0(1)
- Auxiliary space is: 0(1)
*/

struct Node *insert_to_empty(struct Node *last, int data)
{
    if (last != NULL)
        return last;
    //creating a new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    //assigning the data
    new_node->data = data;
    last = new_node;
    //link the node to itself
    new_node->next = last;

    return last;
}

/*
2) Inserting a node at the beginning of the list
- Create a node, change the next pointer of the last node to
be the new node's next pointer and the last node's next pointer 
point to the new node. 

.. create a node i.e. N
.. N->next = last->next
.. last->next = N

- Time complexity is: 0(1)
- Auxiliary space is: 0(1)
*/

struct Node *insert_at_beginning(struct Node *last, int data)
{
    if (last == NULL)
        return insert_to_empty(last, data);
    //create a new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    //assign the data
    new_node->data = data;
    new_node->next = last->next;
    last->next = new_node;

    return last;
}

/*
3) Inserting a node between/after a node in a list
- Create a node, search for the node after which the new node needs to
be inserted. Change the next pointer of the prevoius node to be the next node
of the new node. And change the previous node's next to point to the new node

.. create a node i.e. N
.. search for the previous node i.e. P
.. N->next = P->next
.. p->next = N

- Time complexity is: 0(N)
- Auxiliary space is: 0(1)
*/

struct Node *insert_between(struct Node *last, int data, int item)
{
    if (last == NULL)
        return NULL;

    struct Node *new_node, *prev;
    prev = last->next;

    //searching for the node
    do {
        if (prev->data == item)
        {
            new_node = (struct Node *)malloc(sizeof(struct Node));
            //assign data
            new_node->data = data;
            new_node->next = prev->next;
            prev->next = new_node;

            if (prev == last)
                last = new_node;

            return last;
        }
        prev = prev->next;
    } while (prev != last->next);

    printf("The item is not present in the list.\n");
    return last;
}

/*
4) Inserting a node at the end of the list
- Create a node, change the next of the last node to be the next of the new
node. Let the next of the last node point to the new node. Assign the new node
to be the last node

.. create a node i.e. N
.. N->next = last->next
.. last->next = N
.. last = T

- Time complexity is: 0(1)
- AUxiliary space is: 0(1)
*/

struct Node *insert_at_end(struct Node *last, int data)
{
    if (last == NULL)
        return insert_to_empty(last, data);

    //create a node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    //assign the data
    new_node->data = data;
    new_node->next = last->next;
    last->next = new_node;
    last = new_node;

    return last;
}

//A function to print the list
void print_list(struct Node *last)
{
    struct Node *p;
    //if list is empty
    if (last == NULL)
    {
        printf("The linked list is empty.\n");
        return;
    }
    //points to the first node in the list
    p = last->next;

    do {
        printf("%d ", p->data);
        p = p->next;
    } while (p != last->next);
    printf("\n");
}

//Main code
int main()
{
    struct Node *last = NULL;
    last = insert_to_empty(last, 10);
    print_list(last);
    last = insert_at_beginning(last, 5);
    print_list(last);
    last = insert_at_beginning(last, 0);
    print_list(last);
    last = insert_at_end(last, 20);
    print_list(last);
    last = insert_between(last, 15, 10);
    print_list(last);
    last = insert_at_end(last, 25);

    print_list(last);
    printf("\n");
    return 0;

}