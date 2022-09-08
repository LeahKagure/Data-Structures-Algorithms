// Given an array of n elements, where each element is at most 'x' away from its target position
// devise an algorithm that sorts in 0(n log x) time

#include <stdio.h>
// A function that sorts an array using insertion sort
void insertion_sort(int arrInt[], int size)
{
    int a, key, b;
    for (a = 1; a < size; a++)
    {
        key = arrInt[a];
        b = a - 1;

        // Move the elemetns of the array that are greater than key,
        //to one position ahead of their current one
        //the loop will run at most 'x' times

        while (b >= 0 && arrInt[b] > key)
        {
            arrInt[b + 1] = arrInt[b];
            b = b-1;
        }
        arrInt[b+1] = key;
    }
}
int main()
{
    int arrInt[] = {0, 40, 10, 20, 30, 50};
    int size = 6;
    int a, x;

    x = 3;

    printf("\nBefore Insertion: ");
    for (a = 0; a < size; a++)
        printf("%d ", arrInt[a]);

    //Performing the insertion sort
    insertion_sort(arrInt, size);

    printf("\nAfter Insertion: ");
    for (a = 0; a < size; a++)
        printf("%d ", arrInt[a]);

    return 0;
}
//Time Complexity: 0 (nx)
//Auxiliary Space: 0(1)
//It can also be efficiently sorted using the Heap Data Structure
//A balanced binary search tree can also be used