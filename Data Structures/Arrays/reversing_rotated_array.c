//Given an array arrInt[] of size N, rotate the array by D positions to the left
//It can be solved by using a temporary array, rotating one by one, using a juggling algorithm
//The reversal algorithm can be used. The steps are:
//-Reverse the whole array
//-Reverse the last d elements
//-Reverse the fiist (N-d) elements

//A program to implement the reversal algorithm of array rotation
#include <stdio.h>

//Function to print an array
void print_array(int arrInt[], int size);

//Function to reverse arrInt[] from start to end
void reverse_array(int arrInt[], int start, int end);

//Function to left rotate arrInt[] of size v by d positions
void rotate_array(int arrInt[], int d, int v)
{
    if (d == 0)
        return;
    //if the rotating factor is greater than the length
    d = d % v;

    reverse_array(arrInt, 0, d - 1);
    reverse_array(arrInt, d, v - 1);
    reverse_array(arrInt, 0, v - 1);
}

void print_array(int arrInt[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arrInt[i]);
}

void reverse_array(int arrInt[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arrInt[start];
        arrInt[start] = arrInt[end];
        arrInt[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arrInt[] = {0, 20, 40, 60, 80, 100};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    int d = 3;

    printf("The original array:\n");
    print_array(arrInt, v);
    printf("\nThe array will be rotated %d times\n", d);
    rotate_array(arrInt, d, v);
    print_array(arrInt, v);
    return 0;
}
//Time Complexity: 0(n)
//Auxiliary Space: 0(1)