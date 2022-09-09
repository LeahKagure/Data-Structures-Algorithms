**Linked Lists Data Structure**

This is a linear data structure in which elements are not stored in contiguous memory locations. Instead the elements in a linked list are linked using pointers.
A linked list contains nodes where each node has a data field and a reference (link) to the next node in the list

**Why a linked list?**
- An array has a fixed size
- The insertion of new elements/deletion of existing elements of arrays is expensive

**Advantages of linked lists over arrays**
- It behaves like a dynamic array
- There is ease of insertion or deletion of elements

**Drawbacks of using linked lists**
- Random access is not allowed as linked lists have to accessed sequentially starting from the first node
- Extra memory space for a pointer with each element is required
- It is not cache friendly. This is because they are not stored at contiguous memory locations hence there is no locality of reference

**Types of linked lists**
1. *Singly linked list* - Movement/traversal in the linked list is in only one direction
2. *Doubly linked list* - Movement/traversal in the linked list is in both directions (forward and backward)
3. *Circular linked list* - The last node of the entire linked list contains the link of the first/head node in its 'next' pointer
While the first/head node has the link of the last node of the entire linked list in its 'prev' pointer

**Basic operations on linked list**
1. Deletion
2. Insertion
3. Serching
4. Display

**Time complexities**
1. Search - worst case:  0(n)
	  - average case: 0(n)
2. Insert - worst caase: 0(1)
	  -average case: 0(1)
3. Delete - worst case: 0(1)
	  -average case: 0(1)

**Auxiliary Space**
The required space for a linked list is *0(n)*
