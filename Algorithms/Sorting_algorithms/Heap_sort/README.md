**Heap Sort algorithm**

This is a comparison-based sorting technique based on the Binary Heap tree data structure
It is similar to the selection sort where we first find the minimum element and place it at the beginning. The process is then repeated for the remaining elements.
It is an *in-place algorithm* and it is typically *not a stable algorithm* but it can be made to be
It is typically 2-3 times slower than a well-implemented Quicksort. The reason for the slowness is *a lack of locality of reference*

**Advantages**
- **Efficiency** - The time required to perform the heap sort, increases logarithmically
- **Memory usage** - Its use of memory is minimal
- **Simplicity** - It is simpler to understand

**Application of Heapsort**
- It is used in Hybrid algorithms e.g. *Intro sort*
- Sort a nearly (k sorted) sorted array
- To sort the K largest (or smallest) elements in an array

**What is Heapify**
The process of creating a heap data structure from a binary tree represented using an array
Used to create minimum heap or maximum heap
Start from the first index of the non-leaf node whose index is given by N/2-1
Heapify uses **recursion**

**The two phases of Heapsort**
- The first phase is to convert the array into a maximum heap/minimum heap
- In the second phase the highest/lowest element is removed (at the tree root) and the remaining elements create a new maximum or minimum heap

**Why a heap sort is not stable**
Because the operations performed in a heap can change the relative ordering of the equivalent keys

**A heap sort is NOT a divide and conquer algorithm**
This is because it uses the heap data structure to efficiently sort its elements and not a divide and conquer approach

**Which is better? Heap sort or Merge sort**
Their comparison lies in time complexity and space requirement. The merge sort is slightly faster than the heap sort but on the other hand, the merge sort takes up extra memory. Depending on the requirements, a choice is made between the two 

**Is Heap sort better than Selection sort?**
The two are similar but Heap sort is a much better way to get the maximum element. Takes advantage of the Heap sort to get the maximum elements in constant time
