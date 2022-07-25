// This program performs a bubble sort
#include <stdio.h>

void swap_elements(int *old_element, int *new_element)
{
    int temp = *old_element;
    *old_element = *new_element;
    *new_element = temp;
}

//The function to implement the bubble sort
void bubble_sort(int arrInt[], int v)
{
    int a, b;
    for (a = 0; a < v; a++)
        for (b = 0; b < v - a - 1; b++)
            if (arrInt[b] > arrInt[b + 1])
                swap_elements(&arrInt[b], &arrInt[b + 1]);
}

//Function that prints the array
void print_array(int arrInt[], int size)
{
    int i;
    for (i = 0; i <size; i++)
        printf("%d ", arrInt[i]);
    printf("\n");
}

//Main code
int main()
{
    int arrInt[] = {0, 20, 10, 30, 50, 40};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("Unsorted array: \n");
    print_array(arrInt, v);
    bubble_sort(arrInt, v);
    printf("Sorted array: \n");
    print_array(arrInt, v);
    return 0;
}