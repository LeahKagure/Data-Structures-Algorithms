// This is a program that demonstrates how to iteratively delete a node from a linked list

#include <stdio.h>
#include <stdlib.h>

//Create a node for the linked list
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

/*
An element can be deleted from a linked list in 3 ways:
1. The beginning - Done by pointing a head to the next node and free any unused memory
2. The end - Done by pointing the head to the previous element and changing the next pointer
to null and freeing any unused memory
3. The middle - Done by finding the previous node of the node to be deleted, changing the next
of the previous node and freeing the memory of the node to be deleted
*/

void insert_an_element(Node **head, int new_data)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

void delete_an_element(Node **head, int position)
{
    Node *temp;
    Node *prev;
    temp = *head;
    prev = *head;

    for (int a = 0; a < position; a++)
    {
        if (a == 0 && position == 1)
        {
            *head = (*head)->next;
            free(temp);
        }
        else {
            if (a == position - 1 && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else {
                prev = temp;

                //The position was greater than the number of nodes
                //in the linked list
                if (prev == NULL)
                    break;
                temp = temp->next;
            }
        }
    }
}

void print_list(Node *head)
{
    while (head)
    {
        printf("[%i] [%p]->%p\n", head->data, head, head->next);
        head = head->next;
    }
    printf("\n\n");
}

//Main code
int main()
{
    Node *list = malloc(sizeof(Node));
    list->next = NULL;
    printf("A new linked list\n");
    insert_an_element(&list, 1);
    insert_an_element(&list, 2);
    insert_an_element(&list, 3);

    print_list(list);

    //Delete a node at the beginning of the list
    delete_an_element(&list, 1);
    printf("Deleting a node from the beginning of the linked list\n");
    print_list(list);

    //Delete a node from the end of the list
    printf("A new linked list\n");
    insert_an_element(&list, 3);
    print_list(list);
    printf("Deleting a node from the end of the linked list\n");
    delete_an_element(&list, 3);
    print_list(list);

    //Delete a node from the middle of the list
    printf("A new linked list\n");
    insert_an_element(&list, 1);
    print_list(list);
    printf("Deleting a node from the middle of the linked list\n");
    delete_an_element(&list, 2);
    print_list(list);
    return 0;
}

