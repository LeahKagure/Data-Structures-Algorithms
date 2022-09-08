//This program performs the optimized implementation of the bubble sort
#include <stdio.h>
#include <stdbool.h>

void swap_elements(int *old_element, int *new_element)
{
    int temp = *old_element;
    *old_element = *new_element;
    *new_element = temp;
}

//An optimized version of bubble sort
void bubble_sort(int arrInt[], int v)
{
    int a, b;
    bool is_swapped;
    for (a = 0; a < v-1; a++)
    {
        is_swapped = false;
        for(b = 0; b < v-a-1; b++)
        {
            if (arrInt[b] > arrInt[b+1])
            {
                swap_elements(&arrInt[b], &arrInt[b+1]);
                is_swapped = true;
            }
        }
        //If the inner loop didn't perform any swaps
        if (is_swapped == false)
            break;
    }
}

//Function to print an array
void print_array(int arrInt[], int size)
{
    int i;
    for (i = 0; i < size; i++)
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
//Time Complexity: 0(N^2)
//Auxiliary Space: 0(1)