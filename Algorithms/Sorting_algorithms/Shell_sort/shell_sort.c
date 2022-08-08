//This program implements the Shell sort
#include <stdio.h>

int shell_sort(int arrInt[], int v)
{
    //Start with a big gap and then reduce the gap
    for (int gap = v/2; gap > 0; gap /=2)
    {
        //Carry out a gapped insertion for this gap size
        //The first gap element arrInt[0...gap-1] are already in gapped order
        //keep adding one element until the entire array is gap sorted
        for (int a = gap; a < v; a += 1)
        {
            //add arrInt[a] to the elements that are gap sorted
            //save arrInt[a] in temp and create a hole at i'th position
            int temp = arrInt[a];

            //Shift the earlier gap-sorted elements up until the correct
            //position for arrInt[a] is found
            int b;
            for (b = a; b >= gap && arrInt[b - gap] > temp; b -=gap)
                arrInt[b] = arrInt[b - gap];

            //Place the original arrInt[a] in temp at its correct position
            arrInt[b] = temp;
        }
    }
    return 0;
}
//Function to print the array
void print_array (int arrInt[], int v)
{
    for (int i = 0; i < v; i++)
        printf("%d ", arrInt[i]);
}

//Main code
int main()
{
    int arrInt[] = {80, 40, 20, 60, 0, 100};
    int v = sizeof(arrInt) / sizeof(arrInt[0]);

    printf("Before sorting: \n");
    print_array(arrInt, v);
    shell_sort(arrInt, v);
    printf("\nAfter sorting: \n");
    print_array(arrInt, v);

    return 0;
}