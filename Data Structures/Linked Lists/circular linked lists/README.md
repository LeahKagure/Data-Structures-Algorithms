**Circular Linked Lists**

This is a linked list where all nodes are connected to form a circle. In the list, the first node and the last node are connected to each other forming a circle. There is no NULL at the end

There are two types of circular linked lists:
1. **Circular singly linked list** - In this one, the last node of the list contains a pointer to the first node of the list. It has no beginning or end. No NULL value is present in the next part of any node

```
//The structure of a circular singly linked list

struct Node {

        int value;

        //points to the next node

        struct Node *next

};

```


Circular linked lists are similar to singly linked lists with the exception of connecting the last node to the first node.

**Advantages of circular linked lists**
- Any node can be a starting point
- Useful for implementation of a queue
- Circular lists are useful in applications to repeatedly go around the list
- Used for the implementation of advanced data structures e.g *Fibonacci heap*

**Disadvantages of circular linked lists**
- Compared to singly linked lists, circular lists are more complex
- Reversing a circular list is more complicated than a singly or doubly circular list
- It's possible for the code to go into an infinite loop if it isn't handled carefully
- It's harder to find the end of the list and control the loop

**Applications of a circular linked list**
- Multiplayer games use it to give eachb player a chance to play
- It can be used to organize multiple running applications on an O.S. The applications are iterated over by the O.S.

**Why a circular linked list?**
- A node always points to another node. So NULL assignment is not necessary
- Any node can be set as the starting point
- Nodes are traversed quickly from the first to the last


2. **Circular doubly linked list** - This has properties of both doubly linked lists and circular linked lists in which two consecutive elements are linked or connected by the previous and next pointer. The first node points to the last node by the previous pointer.

```
//The structure of a circular doubly linked list

struct Node {

        int value;

        //points to the next node

        struct Node *next

        //points to the previous node

        struct Node *previous

};

```


**Advantages of circular doubly linked lists**
- The list can be traversed from both directions i.e. *from head to tail or from tail to head*
- Jumping from head to tail or from tail to head is done in constant time 0(1)
- The circular doubly linked lists are used in the implementation of advanced data structures like the *Fibonacci heap*

**Disadvantages of circular doubly linked lists**
- It takes slightly extra memory in each node to accomodate the previous pointer
- Alot of pointers are involved in implementing or performing operations on the list, thus the pointers should be handled carefully otherwise data on the list may get lost

**Applications of circular doubly linked lists**
- Managing song playlists in media player applications
- Managing shopping carts in online shopping
