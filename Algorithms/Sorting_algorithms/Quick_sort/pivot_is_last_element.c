//This program implements the Quicksort algorithm where the pivot is the last element
#include <stdio.h>

//A function that swaps two elements
void swap_elements(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//A function that takes the last element as the pivot
//it places the pivot element at its correct position
//in a sorted array, and it places all smaller elements
//to the left of the pivot and all larger ones to the
//right of the pivot
int array_partition(int arrInt[], int low, int high)
{
    int pivot = arrInt[high];
    int i = (low - 1);

    for (int j = low; j <= high-1; j++)
    {
        //If the current element is smaller than the pivot
        //then increment the index of the smaller element
        if (arrInt[j] < pivot)
        {
            i++;
            swap_elements(&arrInt[i], &arrInt[j]);
        }
    }
    swap_elements(&arrInt[i+1], &arrInt[high]);
    return (i + 1);
}

//The function that implements the quicksort algorithm
//arrInt[] - is the array to be sorted,
//low - is the starting index
//high - is the ending index
void quick_sort(int arrInt[], int low, int high)
{
    if (low < high)
    {
        //The partition index - p_index
        int p_index = array_partition(arrInt, low, high);

        //Seperate sorted elements before and after the partition
        quick_sort(arrInt, low, p_index-1);
        quick_sort(arrInt, p_index+1, high);
    }
}

//Function to print the array
void print_array (int arrInt[], int size)
{
    int a;
    for (a = 0; a < size; a++)
        printf("%d ", arrInt[a]);
}

//Main code
int main()
{
    int arrInt[] = {0, 30, 20, 40, 60, 10, 50};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("Before quicksort: \n");
    print_array(arrInt, v);
    printf("\nAfter quicksort: \n");
    quick_sort(arrInt, 0, v-1);
    print_array(arrInt, v);
    return 0;
}