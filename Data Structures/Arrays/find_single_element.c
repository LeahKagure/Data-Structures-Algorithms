//Given an array of integer. All numbers occur twice except one number which occurs once.
//Find the number in 0(n) time & constant extra space

// Checking every element if it appears once or not and returning
// an element with a single occurrence. The time complexity is 0(n^2)

//Hashing- where all elements are traversed and put in a hash table
//the elements are used as the key and the count of occurrence used as a value
//It works in 0(n) but requires extra space

//The best solution is to perform XOR
//XOR of all array elements gives us the number with the single occurrence based on:
//XOR of a number with itself is 0
//XOR of a number with 0 is the number itself

//This program finds the array element that appears only once
#include <stdio.h>

int find_single_element(int arrInt[], int arrInt_size)
{
    //Perform XOR on all elements and return
    int result = arrInt[0];
    for (int a = 1; a < arrInt_size; a++)
        result = result ^ arrInt[a];
    return result;
}

//Main code
int main()
{
    int arrInt[] = {0, 5, 10, 15, 15, 10, 5};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);
    printf("The array element occurring once is %d", find_single_element(arrInt, v));
    return 0;
}
//The Time Complexity is: 0(n)
//The Auxiliary Space is: 0(1)