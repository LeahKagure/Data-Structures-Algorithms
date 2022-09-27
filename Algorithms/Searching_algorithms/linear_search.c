//A program to show the implementation of a linear searching
//algorithm iteratively

/*
- This is a sequential search algorithm that starts at one end of a data
structure or list and goes through each element until the desired element 
is found, otherwise the search continues until the end of the structure.

- It is the easiest searching algorithm
*/

/*
1) Start from the leftmost element of the arr[] and one by one compare
'x' with each array element
2) If 'x' matches with an element it returns the index
3) If 'x' doesn't match with any of the elements, return -1
*/

#include<stdio.h>

int search_linear(int arrInt[], int v, int target)
{
    int a;
    for (a = 0; a < v; a++)
        if (arrInt[a] == target)
            return a;
    return -1;
}

//Main code
int main(void)
{
    int arrInt[] = {0, 2, 4, 6, 8, 10};
    int target = 6;
    int v = sizeof(arrInt) / sizeof(arrInt[0]);

    int res = search_linear(arrInt, v, target);
    (res == -1)
        ? printf("The element is not present in the array\n\n")
        : printf("The element is present at index %d\n\n", res);
    return 0;
}

//Time complexity is: 0(N)
//Auxiliary space is: 0(1)