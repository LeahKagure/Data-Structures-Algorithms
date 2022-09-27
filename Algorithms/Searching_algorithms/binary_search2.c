//This program shows how to implement the binary search
//algorithm recursively

#include<stdio.h>

int search_binary(int arrInt[], int left, int right, int target)
{
    if (right >= left)
    {
        int mid = left + (right-1) / 2;
        
        //if the element is present at the middle
        if (arrInt[mid] == target)
            return mid;
        
        //if the element is smaller than mid, narrow search
        //to the left subarray
        if (arrInt[mid] > target)
            return search_binary(arrInt, left, mid-1, target);

        //else the element is in the right subarray
        return search_binary(arrInt, mid+1, right, target);
    }
    //the element was not present in the array
    return -1;
}

//Main code
int main(void)
{
    int arrInt[] = {0, 5, 10, 15, 20, 25, 30};
    int size = sizeof(arrInt) / sizeof(arrInt[0]);
    int target = 20;
    int res = search_binary(arrInt, 0, size-1, target);
    (res == -1)
    ? printf("The element %d is not present in the array\n\n", target)
    : printf("The element %d is at index %d\n\n", target, res);

    return 0;
}

//Time complexity is: 0(log n)
//Auxiliary space is: 0(log n)