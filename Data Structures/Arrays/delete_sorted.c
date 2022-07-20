//This program demonstrates deleting an element in a sorted array
//The element to be deleted is searched using binary search then
//the delete operation is performed by shifting the elements
#include <stdio.h>

//Search the key to be deleted
int find_the_element(int arrInt[], int low, int high, int key);

//Deleting the element
int delete_the_element(int arrInt[], int v, int key)
{
    //Find the position of element to be deleted
    int position = find_the_element(arrInt, 0, v - 1, key);

    if (position == -1) {
        printf("Element not found");
        return v;
    }
    //Delete the element
    int a;
    for (a = position; a < v; a++)
        arrInt[a] = arrInt[a + 1];

    return v - 1;
}
int find_the_element(int arrInt[], int low, int high, int key)
{
    if (high < low)
        return -1;
    int mid = (low + high) / 2;
    if (key == arrInt[mid])
        return mid;
    if (key > arrInt[mid])
        return find_the_element(arrInt, (mid + 1), high, key);
    return find_the_element(arrInt, low, (mid -1), key);
}

//Main code
int main()
{
    int a;
    int arrInt[] = {0, 20, 40, 60, 80, 100};

    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    int key = 40;

    printf("Array before deletion\n");
    for (a = 0; a < v; a++)
        printf("%d ", arrInt[a]);

    v = delete_the_element(arrInt, v, key);

    printf("\n\nArray after deletion\n");
    for (a = 0; a < v; a++)
        printf("%d ", arrInt[a]);
}
//The Time Complexity is: 0(n) in the worst case that all elements have to be moved
//The Auxiliary Space is: 0(log n) an implicit stack will be used