//This program performs a merge sort 
#include <stdio.h>
#include <stdlib.h>
  
// Merges two subarrays of arrInt[].
// First subarray is arrInt[l..m]
// Second subarray is arrInt[m+1..r]
void merge(int arrInt[], int l, int m, int r)
{
    int a, b, k;
    int v1 = m - l + 1;
    int v2 = r - m;
  
    // Create temporary arrays
    int L[v1], R[v2];
  
    // Copying data to temporary arrays L[] and R[]
    for (a = 0; a < v1; a++)
        L[a] = arrInt[l + a];
    for (b = 0; b < v2; b++)
        R[b] = arrInt[m + 1 + b];
  
    // Merge the temporary arrays back into arrInt[l..r]
    a = 0; // The initial index of first subarray
    b = 0; // The initial index of second subarray
    k = l; // The initial index of merged subarray
    while (a < v1 && b < v2) {
        if (L[a] <= R[b]) {
            arrInt[k] = L[a];
            a++;
        }
        else {
            arrInt[k] = R[b];
            b++;
        }
        k++;
    }
  
    // Copying the remaining elements of L[], if any
    while (a < v1) {
        arrInt[k] = L[a];
        a++;
        k++;
    }
  
    // Copying the remaining elements of R[], if any
    while (b < v2) {
        arrInt[k] = R[b];
        b++;
        k++;
    }
}
  
// l is for left index and r is right index of the
// sub-array of arrInt to be sorted
void mergeSort(int arrInt[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
  
        // Sort first and second halves
        mergeSort(arrInt, l, m);
        mergeSort(arrInt, m + 1, r);
  
        merge(arrInt, l, m, r);
    }
}
  
// Function to print an array
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
  
// Main code
int main()
{
    int arrInt[] = { 0, 40, 30, 100, 20, 60, 80 };
    int arr_size = sizeof(arrInt) / sizeof(arrInt[0]);
  
    printf("Unsorted array: \n");
    printArray(arrInt, arr_size);
  
    mergeSort(arrInt, 0, arr_size - 1);
  
    printf("Sorted array: \n");
    printArray(arrInt, arr_size);
    return 0;
}