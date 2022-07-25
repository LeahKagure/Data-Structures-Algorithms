**Bubble Sort Algorithm**

This algorithm works repeatedly swapping the adjacent elements if they are in the wrong order

It is not suitable for large data sets as its average and worst case time complexity is quite high

When the array is sorted, the algorithm still needs one whole pass without any swap to know it is sorted

The time complexity is 0(n^2) even though the array is sorted. Optimization can be done by stopping the algorithm if the inner loop didn't cause any swap

**Time complexity:** 0(N^2)

**Auxiliary Space:** 0(1)

The **worst case** for time complexity is when the array is reverse sorted and this is also the **average case**

The **best case** for time complexity (0(N)) occurs when the array is sorted

The bubble sort algorithm can also be implemented recursively which works by placing the largest element at their position ensuring it is placed at the end of the array

The bubble sort is an *In-place* algorithm as it swaps adjacent pairs without using a major data structure

It is a stable algorithm
