**Radix Sort algorithm**

The lower bound for comparison-based algorithms (Merge sort, Heapsort, Quicksort) is nLogn. The algorithms cannot do better than this.
Counting sort is a linear time sorting algorithm that sorts in 0(x+r) time when elements are in the range 1 to 'r'

**How do you solve elements in the range 1 to n^2?**
The counting sort cannot be used because it will take 0(n^2) which will make it even worse than comparison-based algorithms

Radix sort can sort an array in linear time. Its idea is to perform digit by digit sort, sorting from the least significant digit to the most significant digit
It uses counting sort as a subroutine to sort an array

**Applications of radix sort**
- In a typical computer that is a sequential random-access machine, where the records are keyed by multiple fields, radix sort is used
- It was used in the card sorting machines

**Is Radix sort preferred to comparison-based algorithms**
*Comparing with quick sort*
If there are log2n bits for every digit, then the running time of radix appears to be better than that of quick sort for a wise range of input numbers. The constant factors that are hidden in asymptomatic notation are higher for radix and the hardware quick sort uses caches more effectively. Radix uses counting sort as a subroutine and it takes extra space to sort numbers 

**Key points about Radix sort**
1. It makes assumptions about the data i.e. *the data must be between a range of elements*
2. The input array must have elements with the same radix and width
3. The radix sort works on sorting that is based on individual digit or letter position
4. Sorting must start from the right most position and use a stable algorithm for each position
5. Radix sort is *NOT* an In-place algorithm as it uses a temporary count array

The radix sort can also be implemented using the bucket sort technique

**Radix sort in strings**
This sorting algorithm is mainly used to sort numerical values or real values, but it can be modified to sort string values in a lexicographical order. It follows the same procedure as for numerical order
