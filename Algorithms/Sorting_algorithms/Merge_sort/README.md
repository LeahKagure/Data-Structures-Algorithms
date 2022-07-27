**Merge Sort**

A sorting algorithm is considered an example of the divide and conquer strategy
The array is initially divided into two equal halves and then combined in a sorted manner
It can be thought of as a recursive algorithm that continuously splits the array in half until it cannot be further divided

If an array becomes empty or has only one element left, the dividing stops - this is the base case that stops the recursion
Merge operation is the process of taking two smaller sorted arrays and combining them to eventually make a larger one

**Time Complexity:** 0(n log n) for all the three cases
-It divides the array into two halves and takes linear time to merge two halves

**Auxiliary Space:**0(n) as all elements are copied into an auxiliary array

**Algorithmic paradigm** is divide and conquer

**Space Complexity:** In merge sort, all elements are copied into an auxiliary array. So *N* space is required for merge sort

In a typical implementation it is not *In place*

The merge sort is stable

**Applications**
1. It is useful for sorting linked lists in 0(n log n) time
2. Inversion count problem
3. It is used in external sorting

**Drawbacks**
1. It is slower compared to other sort algorithms for small tasks
2. It requires additional memory space of 0(n) for the temporary array
3. It goes through the whole process even if the array is sorted
