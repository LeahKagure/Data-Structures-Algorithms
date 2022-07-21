//Given an array of integers find the peak element in it
//An array element is a peak if it is NOT smaller than its neighbours
//An array element is a corner element is only one neighbour is considered

//Can be solved using the corner elements:
//If the input array is sorted in strictly increasing order, the last element is always a peak
//If the input array is sorted in strictly decreasing order, the first element is always a peak
//If all elements are the same, every element is a peak

//Can be solved using the naive approach
//The array is traversed and the element whose neighbours are less than the element is returned

//The program to find a peak element
#include <stdio.h>

//Function to find the peak element in the array
int find_peak_element(int arrInt[], int v)
{
    //If the first or last element is a peak element
    if (v == 1)
        return 0;
    if (arrInt[0] >= arrInt[1])
        return 0;
    if (arrInt[v-1] >= arrInt[v-2])
        return v-1;

    //Check for every other element
    for (int a = 1; a < v -1; a++)
    {
        //Check if the neighbors are smaller
        if (arrInt[a] >= arrInt[a-1] && arrInt[a] >= arrInt[a+1])
            return a;
    }
}

//Main code
int main()
{
    int arrInt[] = {0, 20, 40, 60, 100, 80};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("The index of a peak point is %d", find_peak_element(arrInt, v));
    return 0;
}

//The Time complexity is: 0(n)
//The Auxiliary space is: 0(n)
//The Divide and Conquer using binary search technique can also be used