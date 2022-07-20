//This is a program that demonstrates how to create an array

#include <stdio.h>

int main ()
{
	//creating an integer array named arrInt of size 5
	int arrInt[5];
	//accessing the element at index 0 and setting its value to 5
	arrInt[0] = 2;
	//printing the value set for index 0
	printf("arrInt -> %d\n", arrInt[0]);

	//creating an character array (string) arrChar and setting its values at their indexes
	char arrChar[] = {'m', 'y', ' ', 'n', 'a', 'm', 'e'};
	//printing the the value at index 3
	printf("arrChar -> %c", arrChar[3]);

	return 0;
}
