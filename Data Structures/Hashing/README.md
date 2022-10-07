**Hash Data Structure**

Hashing is the technique or process of mapping keys, and values into a hash table by using the hash function.
Hashing is carried out for faster access to elements
The efficiency of mapping depends on the efficiency of the hash function that has been used.

It is a popular technique for storing and retrieval of data as fast as possible. The main reason behind the use of hashing is that *it gives optimal results as it performs optimal searches.*
In hashing, insert,searching and delete operations can be performed in *0(1)* or *constant time*. It has a worst case time complexity of *0(n)* and an average case of *0(1)*

**Basic Operations**
1. **HashTable** - This operation is used to create a new hash table
2. **Delete** - This operation is used to delete a key-value pair from a hash table
3. **Get** - This operation is used to search for a key inside a hash table and return its associated value
4. **Put** - This operation is used in order to insert a new key-value in a hash table
5. **DeleteHashTable** - This operation is used to delete the entire hash table

**Hashing Components**
1. **Hash Table** - It can be said to be a generalization of an array.It gives the functionality in which a collection of data is stored in a way that makes it easy to find items later if required. It makes searching very efficient
2. **Hash Function** - This is a function that is used to transform a given key into a specific slot index. Its main job is to map each key into a unique slot index
If each key is mapped into a unique slot index, then the hash function is termed as a *perfect hash function*. 
A programmer's goal is to create a hash function with whose help the number of collisions are as few as possible.
**Properties of a good hash function:**
- It is efficiently computable
- It should uniformly distribute the keys
- It should minimize collisions
- It should have a low load factor
3. **Collision Handling** - Because a hash function gets a small number for a big key, there is a high chance that two keys will result in the same value
*Collision* is the situation where a newly inserted key maps to an already occupied slot in the hash table
**Collision handling techniques:**
- **Chaining** - Also known as *closed addressing*. This is where each cell of a hash table is made to point to a linked list of records that have the same hash function value. It is simple but it requires additional memory outside the table
- **Open addressing** - All elements are stored in the hash table. Each entry into the table contains either a record or NIL. It involves generating a location for storing or searching the dat in a process known as *probe*.Probing can be; *linear probing, quadratic probing, double hashing*
When searching for an element, the table slots are examined one by one until the desired element is found or its clear that it is not in the table

**Applications of Hash**
- It is used in databases for indexing
- It is used in disk-based data structures
- In programming languages i.e Python and JavaScript, the hash is used to implement objects

**Real-time application of Hash**
- Hash can be used for cache mapping for fast data access
- It can be used for password verification
- It is used in cryptography as a message digest

**Advantages of hash**
- Hash provides better synchronization than other data structures
- Hash tables are more efficient than search trees or other data structures
- It provides constant time for searching, insertion and deletion operations on average

**Disadvantages of hash**
- Hash is inefficient when there are many collisions
- Hash collisions cannot be practically avoided when there's a large set of keys
- Hash does not allow null values
