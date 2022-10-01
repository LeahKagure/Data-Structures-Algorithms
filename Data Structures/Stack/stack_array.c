// A program to implement a stack using an array
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

//A structure to represent a stack
struct Stack {
    int top;
    unsigned capacity;
    int *array;
};

//A function to create a stack of given capacity.
//It initializes the size of the stack to 0
struct Stack *create_stack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity *sizeof(int));
    return stack;
}

//The stack is full when its top is equal to the last index
int is_full(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

//The stack is empty when the top is equal to -1
int is_empty(struct Stack *stack)
{
    return stack->top == -1;
}

//A function to add an item to the stack.
//It increases top by 1
void push_element(struct Stack *stack, int item)
{
    if (is_full(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to the stack\n", item);
}

//A function to remove an item from the stack
//It decreases top by 1
int pop_element(struct Stack *stack)
{
    if (is_empty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

//A function to return the top without removing it
int peek_element(struct Stack *stack)
{
    if (is_empty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

//Main program
int main()
{
    struct Stack *stack = create_stack(100);

    push_element(stack, 0);
    push_element(stack, 10);
    push_element(stack, 20);
    push_element(stack, 30);
    push_element(stack, 40);
    push_element(stack, 50);
    push_element(stack, 60);
    push_element(stack, 70);
    
    printf("\nDemonstrating the pop operations\n");
    printf("%d popped from the stack\n", pop_element(stack));
    printf("%d popped from the stack\n", pop_element(stack));
    printf("%d popped from the stack\n", pop_element(stack));

    printf("\nDemonstrating how to check the top element of a stack\n");
    printf("The element at the top of the stack is %d\n\n", peek_element(stack));

    return 0;
}