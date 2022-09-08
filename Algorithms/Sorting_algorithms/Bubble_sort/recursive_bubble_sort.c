//This program performs the bubble sort recursively
#include <stdio.h>

void swap_elements(int *old_element, int *new_element)
{
    int temp = *old_element;
    *old_element = *new_element;
    *new_element = temp;
}

void bubble_sort(int arrInt[], int v)
{
    if (v == 0 || v == 1)
    {
        return;
    }
    for (int a = 0; a < v - 1; a++)
    {
        if (arrInt[a] > arrInt[a + 1])
        {
            swap_elements(&arrInt[a], &arrInt[a+1]);
        }
    }
    bubble_sort(arrInt, v -1);
}

//Main code
int main()
{
    int arrInt[6] = {0, 20, 10, 30, 50, 40};
    printf("Unsorted array: \n");
    for (int i =0; i < 6; i++)
    {
        printf("%d ", arrInt[i]);
    }
    bubble_sort(arrInt, 6);
    printf("\nSorted array: \n");
    for (int i =0; i < 6; i++)
    {
        printf("%d ", arrInt[i]);
    }
    return 0;
}