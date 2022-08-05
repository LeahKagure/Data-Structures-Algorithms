**Quick Sort Algorithm**

This is a Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot.
The different versions of the quicksort algorithm select a pivot in the following ways:
- Always pick the first element as a pivot
- Always pick the last element as a pivot
- Pick a random element as a pivot
- Pick the median as the pivot

The key process in quicksort is a *partition*. The target of the partition given an array and an element 'x' of the array as the pivot, is to put 'x' at its correct position in a sorted array and to put all the elements smaller than 'x' before it ('x'), and all greater elements after 'x'.
This should be done in linear time.

The quicksort algorithm is a recursive function.
**Its case scenarios**
1. *Worst case* - (n^2)
2. *Best case* - (n log n)
3. *Average case* - 0(n log n)

Quicksort qualifies as an in place sorting algorithmas it uses extra space only for storing recursive function calls but not for manipulating the input.

In a **3-way quicksort**, an array arrInt[l...r] in a case where the array's pivot is one of many redundant elements is divided into 3 parts:
1. arrInt[l...i] elements which are lesser than the pivot
2. arrInt[i+1...j-1] elements which are equal to the pivot
3. arrInt[j...r] elements which are greater than the pivot
