# Stack_Implmentation_In_CPP
# Aim
To implement stack data stucture in C++/

# Theory
What are stacks?
In C++, a stack is a container adapter provided by the Standard Template Library (STL) that implements a stack data structure. It operates on the Last-In, First-Out (LIFO) principle, meaning the last element added to the stack is the first one to be removed.

image
Key Characteristics and Operations:
LIFO Principle: Elements are added and removed only from one end, referred to as the "top" of the stack.
push(): Adds an element to the top of the stack.
pop(): Removes the element from the top of the stack.
top(): Returns a reference to the element at the top of the stack without removing it.
empty(): Checks if the stack is empty, returning true if it is, and false otherwise.
size(): Returns the number of elements currently in the stack.
Common Use Cases
Stacks are widely used in various programming scenarios, including: Function Call Management

Expression Evaluation

Undo/Redo Functionality

Browser History

Syntax Parsing

Basic Operations
Inserting Elements-In stack, new elements can only be inserted at the top of the stack by using push() method.

Accessing Elements-Only the top element of the stack can be accessed using top() method.

Deleting Elements-In stack, only the top element of the stack can be deleted by using pop() method in one operation.

empty()-This checks whether the stack is empty. It returns true if the stack has no elements; otherwise, it returns false.

Size of stack-The size() function in a stack returns the number of elements currently in the stack. It helps to determine how many items are stored without modifying the stack.

# Algorithm
Initialize an empty stack.
Push 10 onto the stack.
Push 20 onto the stack.
Push 30 onto the stack.
Display all elements in the stack→ Output: 10 20 30
Retrieve and display the top element of the stack→ Output: 30
Pop the top element from the stack→ Element removed: 30
Display all elements in the stack→ Output: 10 20
Push 40 onto the stack.
Push 50 onto the stack.
Push 60 onto the stack.
Display all elements in the stack→ Output: 10 20 40 50 60

# Conclusion
We learnt to implement bsic operations on stacks.
