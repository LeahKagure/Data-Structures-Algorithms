//This program implements Counting sort algorithm
#include <stdio.h>
#include <string.h>
#define RANGE 255

//Function to sort the array in alphabetical order
void count_sort(char arrAlph[])
{
    //The output character array after sorting
    char out_array[strlen(arrAlph)];

    //Creating a count array that stored the count of
    //individual characters and initializing it to 0
    int count_array[RANGE + 1], a;
    memset(count_array, 0, sizeof(count_array));

    //Store the count of each character
    for (a=0; arrAlph[a]; ++a)
        ++count_array[arrAlph[a]];

    //Chnaging count_array[i] so it contains the actual
    //position of the character in the output array
    for (a=1; a<=RANGE; ++a)
        count_array[a] += count_array[a-1];

    //Building the output character array
    for (int i = 0; arrAlph[i]; ++i)
    {
        out_array[count_array[arrAlph[i]] - 1] = arrAlph[i];
        --count_array[arrAlph[i]];
    }

    /*
    To make the algorithm stable
    for (int i = sizeof(arrAlph)-1; i >= 0; --i)
    {
        out_array[count_array[arrAlph[i]] - 1] = arrAlph[i];
        --count_array[arrAlph[i]];
    }
    */

   //Copying the output array to the input array so
   //the input array not has sorted characters
   for (int b = 0; arrAlph[b]; ++b)
    arrAlph[b] = out_array[b];
}

//Main program
int main()
{
    char arrAlph[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    printf("Before sorting:\n %s", arrAlph);

    count_sort(arrAlph);
    printf("\nAfter sorting:\n %s \n", arrAlph);
    return 0;
}
//Time Complexity: 0(x+r) where 'x' is the number of elements
//in the input array and 'r' is the input range
//Auxiliary Space: 0(x+r)
//This code cannot sort elements with negative numbers
//as it has no negative array indices
//How you tackle is by finding the minimum element and storing its
//count at zero index