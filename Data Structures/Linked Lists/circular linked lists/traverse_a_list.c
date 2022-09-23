//This program implements traversal in a circular
//singly linked list

/*
In a circular linked list, traversal stops when the first
node is reached again. In other linked list types, the list
is traversed from the head node and upon reaching NULL it stops

- Time complexity is: 0(N)
- Auxiliary space is: 0(1)

Traversal can also be done through recursion
*/

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

//A function to insert a node at the beginning of the list
void insert_at_beginning(struct Node **head_ref, int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head_ref;
    new_node->data = data;
    new_node->next = *head_ref;

    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = new_node;
    }
    else
        new_node->next = new_node;

    *head_ref = new_node;
}

//A function to traverse the list
void print_list(struct Node *head)
{
    struct Node *temp = head;
    if (head != NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
    printf("\n");
}

//Main function
int main()
{
    struct Node *head = NULL;

    insert_at_beginning(&head, 10);
    insert_at_beginning(&head, 8);
    insert_at_beginning(&head, 6);
    insert_at_beginning(&head, 4);
    insert_at_beginning(&head, 2);
    insert_at_beginning(&head, 0);

    printf("List contents after traversing:\n");
    print_list(head);
    printf("\n");
}