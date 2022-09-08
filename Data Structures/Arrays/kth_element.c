//A program to find the smallest/largest element in an unsorted array
#include <stdio.h>
#include <stdlib.h>

//Compare function for quick sort
int compare_function(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

//Function to return k'th smallest elements ina  given array
int kth_smallest(int arrInt[], int v, int k)
{
    //Sorting the given array
    qsort(arrInt, v, sizeof(int), compare_function);
    //Return the K'th element in the array
    return arrInt[k-1];
}

//Main code
int main()
{
    int arrInt[] = {0,5,10,15,20,25,30};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    int k = 4;
    printf("The array is:\n");
    for (int i = 0; i < v; i++)
    {
        printf("%d ", arrInt[i]);
    }
    printf("\nThe %d'th smallest element is %d\n", k, kth_smallest(arrInt, v, k));
    return 0;
}
//Time complexity: 0(n log n)