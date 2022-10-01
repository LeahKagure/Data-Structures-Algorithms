**Stack Data Structure**

A stack is a linear data structure that follows a particular order in which operations are performed.
The order that may be followed include:
1. **LIFO (Last In First Out)**
The element that is inserted last will be the first one to come out of the structure

2. **FILO (First In Last Out)**
The element that is inserted first will be the last to come out of the structure

**Basic operations on the stack**
- *Push()* : This operation adds an item to the stack. If the stack is full, it is said to be an *overflow condition*

- *Pop()* : This operation removes an item from the stack. The items are popped out in the reverse order in which they were pushed. If the stack is empty, it is said to be an *underflow condition*

- *Top()* : Returns the top element of the stack

- *isEmpty()* : Returns true if the stack is empty it returns false

- *size()* : This operations returns the size of the stack

**Complexity Analysis**
*Time Complexity & Auxiliary Space*
1. push() -> 0(1)
2. pop() -> 0(1)
3. isEmpty() -> 0(1)
4. size() -> 0(1)

**Types of stacks**
1. *Register stack* : This is also a memory element present in the memory unit and can only handle a small amount of data
- It's height is always limited as the size of a register stack is small compared to the memory

2. *Memory stack* : This can handle a large amount of memory data. The height of the memory stack is flexible since it occupies a large amount of data

**Applications of the stack**
- Infix to Postfix/Prefix conversion
- Redo-undo features in many areas i.e. Photoshop, editors
- Forward and backward features i.e. web browsers
- It is used in many algorithms e.g. *Tower of Hanoi, Tree traversals*
- Backtracking is one of the algorithm designing techniques. In order to get back from a current state, we need to store the previous state and this is a reason to need a stack
- In grapgh algorithms e.g. *Topological sorting, Storing connected components*
- In memory management. Any mordern computer, uses a stack as the primary management for a running purpose. Each program running in a computer system has its own memory allocations
- String reversal is another application of stack. After performing the pop operations on the stack, we are able to get a string in reverse order

**Two ways to implement a stack**
1. Using arrays
2. Using linked lists

**Advantages of array implementation of a stack**
- It is easy to implement
- Memory is saved as pointers are not involved

**Disadvantages of array implementation of a stack**
- It is not dynamic
- It does not grow and shrink depending on needs at runtime

**Advantages of linked list implementation of a stack**
- This implementation can grow and shrink according to needs at runtime
- It is used in many virtual machines i.e. *JVM*
- Stacks are more secure anf reliable as they don't get corrupted easily
- Stacks clean up the objects automatically

**Disadvantages of linked list implementation of a stack**
- Requires extra memory due to the use of pointers
- Random accessing is not possible in stack
- The total size of the stack must be defined before
- If the stack falls outside the memory, it can lead to abnormal termination
