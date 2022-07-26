//This program performs the insertion sort
#include <math.h>
#include <stdio.h>

//Function to sort an array using insertion sort
void insertion_sort(int arrInt[], int v)
{
    int a, key, b;
    for (a = 1; a < v; a++)
    {
        key = arrInt[a];
        b = a - 1;

        //Move the elements greater than the key, to
        //one position ahead of their current one
        while (b >= 0 && arrInt[b] > key)
        {
            arrInt[b + 1] = arrInt[b];
            b = b - 1;
        }
        arrInt[b + 1] = key;
    }
}
//A function to print an array of size v
void print_array(int arrInt[], int v)
{
    int i;
    for (i = 0; i < v; i++)
        printf("%d ", arrInt[i]);
    printf("\n");
}

//Main program
int main()
{
    int arrInt[] = {0, 40, 30, 100, 20, 60, 80};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("Before insertion sort: \n");
    print_array(arrInt, v);
    insertion_sort(arrInt, v);
    printf("After insertion sort: \n");
    print_array(arrInt, v);

    return 0;

}
//Time Complexity: 0(N^2)
//Auxiliary Space: 0(1)