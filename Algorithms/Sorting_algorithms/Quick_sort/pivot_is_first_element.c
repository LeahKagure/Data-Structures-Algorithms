//This program implements the Quicksort algorithm where the pivot is the first element
#include <stdio.h>

//Function to swap elements
void swap_elements(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//A function that takes the first element as the pivot
//it places the pivot element at its correct position
//in a sorted array, and it places all smaller elements
//to the left of the pivot and all larger ones to the
//right of the pivot
int array_partition(int arrInt[], int low, int high)
{
    int a = low;
    int b = high;
    int pivot = arrInt[low];
    while (a < b)
    {
        while (pivot >= arrInt[a])
            a++;
        while (pivot < arrInt[b])
            b--;
        if (a < b)
            swap_elements(&arrInt[a], &arrInt[b]);
    }
    swap_elements(&arrInt[low], &arrInt[b]);
    return b;
}

//The function that implements the quicksort algorithm
//arrInt[] - is the array to be sorted,
//low - is the starting index
//high - is the ending index
void quick_sort(int arrInt[], int low, int high)
{
    if (low < high)
    {
        int pivot = array_partition(arrInt, low, high);
        quick_sort(arrInt, low, pivot-1);
        quick_sort(arrInt, pivot+1, high);
    }
}

//Function that prints the array
void print_array(int arrInt[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arrInt[i]);
}

//Main code
int main()
{
    int arrInt[] = {50, 10, 60, 40, 20, 30, 0};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("Before quicksort: \n");
    print_array(arrInt, v);
    printf("\nAfter quicksort: \n");
    quick_sort(arrInt, 0, v-1);
    print_array(arrInt, v);
    return 0;
}