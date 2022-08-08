**Bucket Sort algorithm**

Also called *bin sort*, it is mainly useful when the input is uniformly distributed over a range
Given an array with a large set of floating point numbers that are uniformly distributed over a range, the bucket sort algorithm is the best to sort this is because comparison basd sorting algorithms cannot do better than nLogn, and counting sort cannot be applied where there are floating point numbers as keys are used as indexes

The bucket sort is used where the algorithm is:
1. Create 'x' empty buckets (or lists)
2. For every array element, insert array[i] into arrBucket[x * array[i]]
3. Sort the individual buckets by using insertion sort
4. Concatenate all sorted buckets

**Time complexity of bucket sort**
1. **Best Case: 0(x+r)** - It occurs when the array is sorted and there is no sorting required. 0(x) is the complexity when making buckets and 0(r) is the complexity of sorting buckets (Linear complexity as the array is already sorted). The overall complexity is 0(x+r)

2. **Average Case: 0(x+r)** - It occurs when an array is jumbled and not in either ascending or descending order. 0(x) is the complexity of making buckets and 0(r) is the complexity of sorting buckets. Hence the overall complexity is 0(x+r)

3. **Worst Case: 0(x^2)** - Occurs when all the elements are placed in the same bucket. 0(x) is the complexity of making buckets and 0(x) for having them sorted. The overall complexity then becomes 0(x * x)

4. **Space Complexity: 0(x * r)** - Creating 'x' buckets and storing the elements will take space of order of x * r, so the space complexity is 0(x * r)
