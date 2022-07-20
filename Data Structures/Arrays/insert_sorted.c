//This program demonstrates inserting in a sorted array
//It is slower in a sorted array since in the unsorted array, it didn't matter
//where the new inserted element will be placed.
#include <stdio.h>

//A key is inserted in arrInt[] of a given capacity
//n is the current size of arrInt[]
//This function returns n+1 if insertion is successful
//else returns n
int insert_the_element(int arrInt[], int v, int key, int capacity)
{
    //More elements cannot be inserted if n is already
    //more than or equal to capacity
    if (v >= capacity)
        return v;

    int a;
    for (a = v - 1; (a >= 0 && arrInt[a] > key); a--)
        arrInt[a + 1] = arrInt[a];

    arrInt[a + 1] = key;

    return (v + 1);
}
//Main program
int main()
{
    int arrInt[20] = {0, 10, 20, 40, 50, 60};
    int capacity = sizeof(arrInt) / sizeof(arrInt[0]);
    int v = 6;
    int a, key = 30;

    printf("\nBefore Insertion: ");
    for (a = 0; a < v; a++)
        printf("%d ", arrInt[a]);

    //Inserting the key
    v = insert_the_element(arrInt, v, key, capacity);

    printf("\nAfter Insertion: ");
    for (a = 0; a < v; a++)
        printf("%d ", arrInt[a]);

    return 0;
}
//The Time Complexity is: 0(n) in the worst case that all elements have to be moved
//The Auxiliary Space is: 0(1)