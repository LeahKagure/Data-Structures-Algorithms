//This program performs a selection sort
# include <stdio.h>

void swap(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

void selection_sort(int arrInt[], int v)
{
    int a, b, min_element;

    //Moving the boundary of the unsorted array
    for (a = 0; a < v - 1; a++)
    {
        //Finding the minimum element in the unsorted array
        min_element = a;
        for (b = a+1; b < v; b++)
            if(arrInt[b] < arrInt[min_element])
                min_element = b;

            //Swap the new minimum element with the previous one
            swap(&arrInt[min_element], &arrInt[a]);
    }
}

//Function to print an array
void print_array(int arrInt[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arrInt[i]);
    printf("\n");
}

//Main code
int main()
{
    int arrInt[] = {30, 0, 25, 5, 20, 10, 15};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("The unsorted array: \n");
    print_array(arrInt, v);
    selection_sort(arrInt, v);
    printf("The sorted array: \n");
    print_array(arrInt, v);
}

//The Time complexity is: 0(n**2)
//The Auxiliary Space is: 0(1)