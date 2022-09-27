//A program to show the implemention of the linear searching
//algorithm recursively

/*
1) If the size of the array is 0, return -1. This can also be treated
as the base condition of the recursive call
2) Otherwise check if the element at the current index in the data structure
is equal to the target or not i.e. (arrInt[size-1] == target)
3) If it is equal, return the index of the found target
*/

#include<stdio.h>

int search_linear(int arrInt[], int size, int target)
{
    if (size == 0)
    {
        return -1;
    }
    else if (arrInt[size-1] == target)
    {
        return size-1; //the index of the found target
    }
    else {
        int res = search_linear(arrInt, size-1, target);
        return res;
    }
}

//Main code
int main()
{
    int arrInt[6] = {0, 2, 4, 6, 8, 10};
    int target = 8;

    int res = search_linear(arrInt, 6, target);
    if (res == -1)
    {
        printf("The element %d is not found\n\n", target);
    }
    else {
        printf("The element %d is found at index %d\n\n", target, res);
    }
    return 0;
}

//Time complexity is: 0(N)
//Auxiliary space is: 0(N) - for using recursive stack space
