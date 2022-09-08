//A program to rearrange an array such that arrInt[i]=i
#include <stdio.h>

//Function to transform the array
void arrange_array(int arrInt[], int v)
{
    int a, b, temp;

    //iterating over the attay
    for (a = 0; a < v; a++)
    {
        for (b = 0; b < v; b++)
        {
            //Check that any arrInt[b] exists
            //such that arrInt[b] is equal to a
            if (arrInt[b] == a)
            {
                temp = arrInt[b];
                arrInt[b] = arrInt[a];
                arrInt[a] = temp;
                break;
            }
        }
    }
    //Iterating over an array
    for (a = 0; a < v; a++)
    {
        if (arrInt[a] != a)
        {
            arrInt[a] = -1;
        }
    }
    //Printing the output
    printf("\nArray after Rearranging\n");
    for (a = 0; a < v; a++)
    {
        printf("%d ", arrInt[a]);
    }
}

//Main code
int main()
{
    int v, arrInt[] = {0, 2, -1, 6, -1, -1, 4, 9, 7, -1};
    v = sizeof(arrInt) / sizeof(arrInt[0]);

    printf("Before rearranging the array\n");
    for (int i = 0; i < v; i++)
    {
        printf("%d ", arrInt[i]);
    }
    //Call the function
    arrange_array(arrInt, v);
}

//Time COmplexitity: 0(n^2)
//Auxiliary Space: 0(1)