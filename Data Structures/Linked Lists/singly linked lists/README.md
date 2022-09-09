**Representation of a linked list**
A linked list is represented by a *pointer to the first node of the list*. It is called the *head of the linked list*
If the linked list is empty, the value of the head points to *NULL*
Each node had two points:
- A data item
- Pointer (reference) to the next node or the address of the node
In C, a node can be represented using structures. While in Java or C#, a linked list can be represented as a class and a node as a seperate class. The linked list class contains a reference of node class type

Creating a linked list node is as follow:
//A linked list node
Struct Node {
	int data;
	struct Node *next;
};
