**Counting Sort algorithm**

This is a sorting technique based on the keys that lie within a specific range. It works by counting the number of objects that have distinct key values (a kind of hashing)
Then some arithmetic is done to calculate the position of each object in the output sequence

**Characteristics**
- It makes assumptions about the input data i.e *it assumes the values will be in some sort of range or that all the input numbers will be real numbers*
- It is not a comparison-based algorithm, it hashes the values in a temporary count array and uses the values for sorting
- Because it uses a temporary array, it is **NOT** an *In-place algorithm*

**Points to note**
1. Counting sort is efficient if the input data range is not significantly greater than the number of objects that are to be sorted
2. As it is not a comparison-based sorting algorithm, its running time complexity is 0(n) with its space being proportional to the range of its data. Counting sort is able to achieve this complexity because assumptions are being made about the data to be sorted
3. It is often used as a sub-routine to another algorithm like *radix sort*
4. Counting sort uses partial hashing to count the occurrences of the data objects in 0(1)
5. Counting sort can also be extended to work for negative inputs
6. It is **NOT** a stable algorithm but it can be made to be with some changes in the code
