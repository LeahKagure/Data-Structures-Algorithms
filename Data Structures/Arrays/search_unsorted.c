//This program shows how to perform a linear search in an unsorted array
//Can be performed by linear traversal from the first to the last element

#include <stdio.h>

//The function implementing the search operation
int find_the_element(int arrInt[], int v, int key)
{
    int a;
    for (a = 0; a < v; a++)
        if (arrInt[a] == key)
            return a;
    return -1;
}

//main code
int main()
{
    int arrInt[] = {0, 5, 10, 15, 20, 25, 30, 35};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);

    //using the last element in the array as the search element
    int key = 35;
    int index = find_the_element(arrInt, v, key);

    if (index == -1)
        printf("The element cannot be found");
    else
        printf("The element position is: %d\n", index + 1);

    return 0;
}
//The Time complexity is: 0(n)
//The auxiliary space is: 0(1)