//This program implements the radix sort
#include <stdio.h>

//Function to get the maximum value in arrInt[]
int get_maximum(int arrInt[], int v)
{
    int max = arrInt[0];
    for (int a = 1; a < v; a++)
        if (arrInt[a] > max)
            max = arrInt[a];
    return max;
}

//Function that does counting sort for arrInt[]
//according to the digit represented by exp
void count_sort(int arrInt[], int v, int exp)
{
    int out_array[v]; //the output array
    int b, count_array[10] = { 0 };

    //Stores the count of occurrences in count_array[]
    for (b = 0; b < v; b++)
        count_array[(arrInt[b] / exp) % 10]++;

    //Changes count_array[b] so that it contain the actual 
    //position of the digit in the out_array[]
    for (b = 1; b < 10; b++)
        count_array[b] += count_array[b - 1];

    //Building the output array
    for (b = v - 1; b >= 0; b--)
    {
        out_array[count_array[(arrInt[b] / exp) % 10] - 1] = arrInt[b];
        count_array[(arrInt[b] / exp) % 10]--;
    }

    //Copying the output array to arrInt[], so it can
    //contain the sorted numbers according to the current digit
    for (int i = 0; i < v; i++)
        arrInt[i] = out_array[i];
}

//The function that implements radix sort
void radix_sort(int arrInt[], int v)
{
    //Find the maximum number to know the number of digits
    int M = get_maximum(arrInt, v);

    //Do the counting sort for every digit, exp is passed in place
    //of the digit number
    //exp is 10^i, where i is the current digit number
    for (int exp = 1; M/exp > 0; exp *= 10)
        count_sort(arrInt, v, exp);
}

//Function to print an array
void print_array(int arrInt[], int v)
{
    for (int i = 0; i < v; i++)
        printf("%d ", arrInt[i]);
}

//Main code
int main()
{
    int arrInt[] = {555, 120, 0, 10, 978, 2, 777, 100};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("Before sorting: \n");
    print_array(arrInt, v);
    //Function call
    radix_sort(arrInt, v);
    printf("\nAfter sorting: \n");
    print_array(arrInt, v);
    return 0;
}