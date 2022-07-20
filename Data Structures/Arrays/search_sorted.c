//This program demonstrates searching in a sorted array
//It is performed using binary search

#include <stdio.h>

int find_the_element(int arrInt[], int low, int high, int key)
{
    if (high < low)
        return -1;
    int mid = (low + high) / 2; //low + (high - low)/2;
    if (key == arrInt[mid])
        return mid;
    if (key > arrInt[mid])
        return find_the_element(arrInt, (mid + 1), high, key);
    return find_the_element(arrInt, low, (mid - 1), key);
}

//Main code
int main()
{
    //Let us search for 10 in the array below
    int arrInt[] = {0, 5, 10, 15, 20, 25, 30};
    int v, key;

    v = sizeof(arrInt) / sizeof(arrInt[0]);
    key = 10;

    printf("Index: %d\n", find_the_element(arrInt, 0, v-1, key));
    return 0;
}
//The Time Complexity is: 0(Log n) using binary search
//The Auxiliary Space is: 0(Log n) due to recursive calls