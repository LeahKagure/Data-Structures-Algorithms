**Shell Sort algorithm**

This is a variation of the Insertion sort. In insertions sort, elements are only moved one position ahead. The idea of shellsort is to allow the exchange of far items
In this sorting algorithm, we make the array 'm'-sorted for a large value of 'm'
We then keep reducing the value of 'm' until it becomes 1
An array is 'm'-sorted if all the sublists of every m'th element are soted

**Algorithm**
- *Step 1*: Start 
- *Step 2*: Initialize the value of the gap size i.e 'm'
- *Step 3*: Divide the array or list into smaller sub-parts. Each having equal intervals to 'm'
- *Step 4*: Sort the subarrays or sublists using insertion sort
- *Step 5*: Repeat step 2 until the array or list is sorted
- *Step 6*: Print the sorted array or list
- *Step 7*: Stop

**Time complexity:** 0(n^2). This is because the gap is reduced by half in every iteration
**Worst case complexity:** 0(n2)

**Best case compelexity:** nLogn. When the array given is already sorted, the total count of comparisons of each interval is equal to the array's size

**Average case somplexity:** 0(n * log(n)) It depends on the interval selected by the programmer

**Space complexity:** 0(1)

**Applications of Shell sort**
1. To replace insertion sort where it takes a long time to complete a task
2. To call stack overhead
3. It is used when recursion exceeds a particular limit
4. For the medium to large sized
5. In insertion sort in order to reduce the number of operations
