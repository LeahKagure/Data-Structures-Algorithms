//A program to implement a stack using linked lists
#include<limits.h>
#include<stdio.h>
#include<stdlib.h>

//A structure to represent a stack
struct StackNode {
    int data;
    struct StackNode *next;
};

struct StackNode *new_node(int data)
{
    struct StackNode *stackNode = (struct StackNode *)malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int is_empty(struct StackNode *root)
{
    return !root;
}

void push_element(struct StackNode **root, int data)
{
    struct StackNode *stackNode = new_node(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d is pushed to the stack\n", data);
}

int pop_element(struct StackNode **root)
{
    if (is_empty(*root))
        return INT_MIN;
    struct StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek_element(struct StackNode *root)
{
    if (is_empty(root))
        return INT_MIN;
    return root->data;
}

//Main code
int main()
{
    struct StackNode *root = NULL;

    push_element(&root, 0);
    push_element(&root, 10);
    push_element(&root, 20);
    push_element(&root, 30);
    push_element(&root, 40);
    push_element(&root, 50);
    push_element(&root, 60);

    printf("\nTo demonstrate popping the elements.\n");
    printf("%d is popped from the stack\n", pop_element(&root));
    printf("%d is popped from the stack\n", pop_element(&root));
    printf("%d is popped from the stack\n", pop_element(&root));

    printf("\nTo demonstrate checking for the top element\n");
    printf("The top element is %d\n\n", peek_element(root));

    return 0;
}