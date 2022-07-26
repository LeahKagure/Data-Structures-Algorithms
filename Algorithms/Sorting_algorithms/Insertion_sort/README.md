**Insertion Sort**

An array is split into a sorted and an unsorted part. The values from the unsorted part are picked and placed at the correct position in the solved part

**Characteristics**
1. One of the simplest algorithms with the simplest implementation
2. It is efficient for small data values
3. It is adaptive in nature i.e. *appropriate for data sets which are already partially solved*

**Time complexity:** 0(N^2)
**Auxiliary Space:** 0(1)

**Boundary cases:** It takes the maximum time to sort if the elements are in reverse order.
- It takes the minimum time when elements are already sorted

**Algorithmic paradigm** - It follows the *incremental approach*
It is a stable algorithm

The insertion sort is used when the number of elements is small. It can be useful when the input array is almost sorted and only few elements are misplaced in a complete large array

*Binary insertion sort* uses *binary search* to find the proper location to insert the selected item at each iteration
