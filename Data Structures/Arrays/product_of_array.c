//Given an arrInt[] of n integers, construct a product array prod[] (of the same size)
//such that prodarr[i] is equal to the product of all elements of arrInt[] except arrInt[i]
//Solve it without division operator in 0(n) time

#include <stdio.h>
#include <stdlib.h>

//Function to print the product array
void product_array(int arrInt[], int v)
{
    //Base case
    if (v == 1)
    {
        printf("0");
        return;
    }

    //Allocate memory for temporary arrays
    int *left = (int*)malloc(sizeof(int) *v);
    int *right = (int*)malloc(sizeof(int) *v);

    //Allocate memory for the product array
    int *product = (int*)malloc(sizeof(int) *v);

    int a, b;

    //Leftmost element of the left array is always 1
    left[0] = 1;

    //Rightmost element of the right array is always 1
    right[v-1] = 1;

    //Construct the left array
    for (a = 1; a < v; a++)
        left[a] =arrInt[a-1] * left[a-1];

    //Construct the right array
    for (b = v-2; b >= 0; b--)
        right[b] = arrInt[b+1] * right[b+1];

    //Construct the product array using left[] and right[]
    for (int i = 0; i < v; i++)
        product[i] = left[i] * right[i];

    //Print the constructed array
    for (int i = 0; i < v; i++)
        printf("%d ", product[i]);

    return;
}
//Main code
int main()
{
    int arrInt[] = {5, 10, 2, 3, 4};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("The original array is:\n");
    for (int i = 0; i < v; i++)
    {
        printf("%d ", arrInt[i]);
    }
    printf("\nThe product array is: \n");
    product_array(arrInt, v);
    getchar();
}