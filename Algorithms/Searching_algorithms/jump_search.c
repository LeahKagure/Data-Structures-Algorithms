//This program shows how to implement the jump searching algorithm

/*
- This is a searching algorithm for sorted arrays.
- It's goal is to check fewer elements by jumping ahead by
fixed steps or skipping some elements instead of searching all the elements
- The best step size is m = sqrt(size)
- Jump search works only with sorted arrays. The optimal size of a block to 
be jumped is sqrt(size). This makes its time complexity (0(sqrt(size))).
- It's time complexity is between linear search (0(n)) and binary search (0(log n))
- Where the binary search is costly, use jump start algorithm as it has the advantage
to be traversed back only once.

linear search < jump search < binary search
*/

#include<stdio.h>
#include<math.h>

int min(int a, int b)
{
    if (b>a)
        return a;
    else
        return b;
}

int search_jump(int arrInt[], int target, int size)
{
    //calculate the step size
    int step = sqrt(size);

    //finding the block where the element is present
    int previous = 0;
    while (arrInt[min(step, size)-1] < target)
    {
        previous = step;
        step += sqrt(size);
        if (previous >= size)
            return -1;
    }

    //perform a linear search for the target in the block
    //beginning with previous
    while (arrInt[previous] < target)
    {
        previous++;

        //if the next block is reached or the element is not present
        if (previous == min(step, size))
            return -1;
    }
    //if the element is found
    if (arrInt[previous] == target)
        return previous;

    return -1;
}
//Main code
int main()
{
    int arrInt[] = {0, 10, 20, 30, 40, 50, 60, 70, 80};
    int target = 80;
    int size = sizeof(arrInt) / sizeof(arrInt[0]);
    int res = search_jump(arrInt, target, size);
    if(res >= 0)
        printf("The element %d is at index %d\n\n", target, res);
    else
        printf("The element %d is not present in the array", target);
    return 0;
}

//Time complexity is: 0(sqrt(size))
//Auxiliary space is: 0(1)