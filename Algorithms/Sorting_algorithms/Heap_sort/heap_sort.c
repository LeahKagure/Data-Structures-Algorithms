//This program implements the Heap sort
#include <stdio.h>

//Function to swap the position of two elememnts

void swap_elements(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//To heapify a subtree rooted with node 'n'
//which is an index in arrInt[]
//'v' is the size of the heap

void heapify(int arrInt[], int v, int n)
{
    //Finding the largest among the root ,
    //left child and right child

    //Initialize the largest as root
    int largest = n;

    //left child = 2*n + 1
    int left_child = 2 * n + 1;

    //right child = 2*n + 2
    int right_child = 2 * n + 2;

    //If the left child is larger than the root
    if (left_child < v && arrInt[left_child] > arrInt[largest])
        largest = left_child;

    //If right child is larger than the root
    if (right_child < v && arrInt[right_child] > arrInt[largest])
        largest = right_child;

    //Swap and continue heapifying as long as the root is not the largest
    //If the largest is not root 
    if (largest != n)
    {
        swap_elements(&arrInt[n], &arrInt[largest]);

        //Recursively heapify the affected sub-tree
        heapify(arrInt, v, largest);
    }
}

//Function that performs the Heap sort
void heap_sort(int arrInt[], int v)
{
    //Build a max heap
    for (int n = v/2 -1; n >=0; n--)
        heapify(arrInt, v, n);
    
    //Performing a Heap sort
    for (int n = v-1; n >=0; n--)
    {
        swap_elements(&arrInt[0], &arrInt[n]);

        //Heapify root element to get the highest element at root again
        heapify (arrInt, n, 0);
    }
}

//Funtion to print the array of size v
void print_array(int arrInt[], int v)
{
    for (int i =0; i<v; i++)
        printf("%d ", arrInt[i]);
}

//Main code
int main()
{
    int arrInt[] = {20, 60, 100, 40, 0, 80};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("Before sorting: \n");
    print_array(arrInt, v);
    printf("\nAfter sorting: \n");
    heap_sort(arrInt, v);
    print_array(arrInt, v);
}