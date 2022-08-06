//This program implements an iterative heapsort
#include <stdio.h>

//A function that builds a Max heap where the value of each child is
//always smaller than the value of their parent

void build_max_heap(int arrInt[], int v)
{
    for (int a = 1; a < v; a++)
    {
        //if the child is bigger than the parent
        if (arrInt[a] > arrInt[(a-1)/2])
        {
            int b = a;

            //swap the child and parent until the parent
            //is smaller
            while (arrInt[b] > arrInt[(b-1)/2])
            {
                int temp = arrInt[b];
                arrInt[b] = arrInt[(b-1)/2];
                arrInt[(b-1)/2] = temp;
                b = (b - 1)/2;
            }
        }
    }
}

void heap_sort(int arrInt[], int v)
{
    build_max_heap(arrInt, v);

    for (int a = v-1; a > 0; a--)
    {
        //swap the value of the first indexed with
        //that of the last indexed
        int temp = arrInt[0];
        arrInt[0] = arrInt[a];
        arrInt[a] = temp;

        //maintain the heap property after each swapping
        int b = 0, index;

        do
        {
            index = (2 * b + 1);

            //If the left child is smaller than the right child
            //point the index variable to the right child
            if (arrInt[index] < arrInt[index + 1] && index < (a - 1))
                index++;

            //If the parent is smaller than the child then
            //swap the parent with the child having a higher value
            if (arrInt[b] < arrInt[index] && index < a)
            {
                int temp_1 = arrInt[b];
                arrInt[b] = arrInt[index];
                arrInt[index] = temp_1;
            }

            b = index;
        } while (index < a);
    }
}

//Main code
int main()
{
    int arrInt[] = {20, 60, 100, 40, 0, 80};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);

    printf("Array before sorting: \n");
    for (int i = 0; i < v; i++)
        printf("%d ", arrInt[i]);

    printf("\n");

    heap_sort(arrInt, v);

    //print the array after sorting
    printf("Sorted array: \n");
    for (int i = 0; i < v; i++)
        printf("%d ", arrInt[i]);

    return 0;
}