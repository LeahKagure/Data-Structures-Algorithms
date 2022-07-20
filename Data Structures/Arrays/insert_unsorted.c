//This program shows how to perform an inset operation in an unsorted array
//It is faster than in a sorted array because in an unsorted array
//you don't have to care about the position of the new inserted element

#include <stdio.h>

//It inserts a key in arrInt[] of given capacity
//v is the current size of arrInt[]. This function return n + 1 if insertion
//is successful, else n.

int insert_the_element(int arrInt[], int v, int key, int capacity)
{
    //More elements cannot be inserted if v is more or equal to capacity
    if (v >= capacity)
        return v;

    arrInt[v] = key;

    return (v + 1);
}

//main code
int main()
{
    int arrInt[10] = {0, 10, 20, 30, 40, 50};
    int capacity = sizeof(arrInt) / sizeof(arrInt[0]);
    int v = 6;
    int a, key = 60;

    printf("\n Before Insertion: ");
    for (a = 0; a < v; a++)
        printf("%d ", arrInt[a]);

    // Inserting key to the array
    v = insert_the_element(arrInt, v, key, capacity);

    printf("\n After Insertion: ");
    for (a = 0; a < v; a++)
        printf("%d ", arrInt[a]);

    return 0;
}
//The Time Complexity is: 0(1)
//The Auxiliary Space is: 0(1)