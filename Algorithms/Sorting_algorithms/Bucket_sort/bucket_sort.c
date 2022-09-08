//This program implements the Bucket sort
#include <stdio.h>
#include <limits.h>

//Function to find the maximum element of the array
int maximum_element(int arrInt[], int size)
{
    //Initialize the maximum element to the first in the array
    //so that it can be updated when we encounter an element greater
    //than it. The function returns the maximum value in the array
    int max = arrInt[0];
    for (int a = 1; a < size; a++)
    {
        if (arrInt[a] > max)
            max = arrInt[a];
    }
    return max;
}

//Implementing the bucket sort
void bucket_sort(int arrInt[], int size)
{
    //Get the maximum element in the array to be used to create the buckets
    int max = maximum_element(arrInt, size);

    //Create buckets
    int arrBucket[max];

    //Initialize the buckets to zero
    for (int b = 0; b <= max; b++)
        arrBucket[b] = 0;

    //Storing elements into their corresponding buckets
    for (int i = 0; i < size; i++)
        arrBucket[arrInt[i]]++;

    //Merging the buckets
    int j = 0;
    for (int i = 0; i <=max; i++)
    {
        //Run the while loop until there is an element in the bucket
        while (arrBucket[i] > 0)
        {
            arrInt[j++] = i;
            //Decrease the count of the bucket element
            arrBucket[i]--;
        }
    }
}
//Function to print the array
void print_array(int arrInt[], int size)
{
    for (int c = 0; c < size; ++c)
        printf("%d ",arrInt[c]);
}
//Main code
int main()
{
    int arrInt[] = {4, 2, 6, 0, 12, 10, 8, 20, 14, 18, 16};
    int a, v;
    v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("Before sorting: \n");
    print_array(arrInt, v);
    bucket_sort(arrInt, v);
    printf("\nAfter sorting: \n");
    print_array(arrInt, v);
}