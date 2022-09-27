//This program shows how to implement the binary searching
//algorithm iteratively
 
 /*
 - This is a searching algorithm used in a sorted array by repeatedly
 dividing the search interval by half
 */

/*
1) Begin with the mid element of the entire data structure as a search key
2) If the value of the search target is equal to the item then return the
index of the search target
3) If the value of the search target is less than that of the item in the
middle of the interval, narrow the interval to the lower half
4) Otherwise narrow it to the upper half
5) Repeat from step(2) until the value is found or the interval is empty
*/

#include<stdio.h>

int search_binary(int arrInt[], int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right-left) / 2;
        //check if value is present at mid
        if (arrInt[mid] == target)
            return mid;

        //if target is greater than mid ignore the left half
        if (arrInt[mid] < target)
            left = mid + 1;

        //if target is smaller than mid, ignore the right half
        else
            right = mid - 1;
    }
    //the element was not present
    return -1;
}

//Main code
int main(void)
{
    int arrInt[] = {0, 5, 10, 15, 20, 25, 30};
    int size = sizeof(arrInt) / sizeof(arrInt[0]);
    int target = 5;
    int res = search_binary(arrInt, 0, size-1, target);
    (res == -1)
    ? printf("The element %d is not present\n\n", target)
    : printf("The element %d is present at index %d\n\n", target, res);

    return 0;
}

//Time complexity is: 0(log n)
//Auxiliary space is: 0(1)