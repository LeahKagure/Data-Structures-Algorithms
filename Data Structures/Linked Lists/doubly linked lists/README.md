**Doubly Linked Lists**

A doubly linked list (DLL) contains three fields which are:
- Left pointer
- Data/information
- Right pointer

A DLL node has the following format:
```
//A node of a doubly linked list

struct Node {

	int data;

	//A pointer to the next node

	struct Node *next;

	//A pointer to the previous node

	struct Node *prev;
}

```
By allowing bi-directional traversal, time complexity of an operation is reduced

**Advantages of doubly linked lists**
- It allows traversing in both forward and backward directions
- Deletion of the nodes can be done easily
- Reversing of a linked list can be easily performed
- Insertion can efficiently be performed at any node

**Disavantages of doubly linked lists**
- Each node has an extra pointer hence it requires extra space
- Doubly linked list operations require more pointers to be handled therefore more time
- Random access to elements is not allowed

**Advantages of DLLs over the singly linked lists**
- A DLL can be traversed in both forward and backward directions
- The delete operation in DLL is more efficient if a pointer to the node to be deleted is given
- A new node can be inserted quickly before a given node
- A previous node can be found using the previous pointer

**Disadvantages of DLLs over the singly linked lists**
- Every node of DLL requires extra space for a previous pointer although it is possible to implement DLL with a single pointer
- All operations require an extra pointer (previous) to be maintained

**Applications of a doubly linked list**
1. It can be used in navigation systems where both forward and backward traversal is required
2. It can be used to implement different tree data structures
3. It can be used to implement undo/redo operations
4. It is used in games e.g. a deck of cards
