//This program shows how to perform a delete operation in an unsorted array
//It is deleted using linear search and once the deletion is done
//the elements are shifted

#include <stdio.h>

//Searching for the element to be deleted
int find_the_element(int arrInt[], int v, int key);

//The function to delete the element
int delete_the_element(int arrInt[], int v, int key)
{
    //finding the position of the element to be deleted
    int position = find_the_element(arrInt, v, key);

    if (position == -1)
    {
        printf("The element cannot be found");
        return v;
    }

    //Deleting the element
    int a;
    for (a = position; a < v - 1; a++)
        arrInt[a] = arrInt[a + 1];

    return v - 1;
}

//The function to implement the searching operation
int find_the_element(int arrInt[], int v, int key)
{
    int a;
    for (a = 0; a < v; a++)
        if (arrInt[a] == key)
            return a;

    return -1;
}

//Main code
int main()
{
    int a;
    int arrInt[] = {0, 20, 40, 60, 80, 100};

    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    int key = 60;

    printf("Array befor deletion\n");
    for (a = 0; a < v; a++)
        printf("%d ", arrInt[a]);

    v = delete_the_element(arrInt, v, key);

    printf("\nArray after deletion\n");
    for (a = 0; a < v; a++)
        printf("%d ", arrInt[a]);

    return 0;
}
//The Time Complexity is: 0(n)
//The Auxiliary Space is: 0(1)