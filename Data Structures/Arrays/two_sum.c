//Write a program that, given an array A[] of n numbers and another number x
//determines whether or not there exist two elements in A[]
//whose sum is exactly x
#include <stdio.h>

//The function to find and print the pair
int check_pair(int arrInt[], int arrInt_size, int x)
{
    for (int a = 0; a < (arrInt_size - 1); a++)
    {
        for (int b = (a + 1); b < arrInt_size; b++)
        {
            if (arrInt[a] + arrInt[b] == x)
            {
                printf("Pair with the given sum %d is (%d, %d)\n", x, arrInt[a], arrInt[b]);

                return 1;
            }
        }
    }
    return 0;
}

//Main code
int main(void)
{
    int arrInt[] = {0, 10, -10, 20, -20, 30, -30};
    int x = -10;
    int arrInt_size = sizeof(arrInt) / sizeof(arrInt[0]);

    if (check_pair(arrInt, arrInt_size, x))
    {
        printf("Valid pair exists\n");
    }
    else {
        printf("No valid pair exists for %d\n", x);
    }
    return 0;
}
//The Time Complexity is: 0(n^2)
//The Auxiliary Space is: 0(1)

//The two pointer technique can also be used 