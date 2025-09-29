//Ananya Swadia 
//24070123012

#include <iostream>
#define MAX 5
using namespace std;

class Stack {
private:
int array[MAX];
int top;

public:
// constructor
Stack() {
top = -1; // initially stack is empty
}

// check if stack is empty
bool isEmpty() {
return (top == -1);
}

// check if stack is full
bool isFull() {
return (top == MAX - 1);
}

// push operation
void push(int value) {
if (isFull()) {
cout << "Stack Overflow! Cannot push " << value << endl;
} else {
array[++top] = value;
cout << value << " pushed into stack." << endl;
}
}

// pop operation
void pop() {
if (isEmpty()) {
cout << "Stack Underflow! Nothing to pop." << endl;
} else {
cout << array[top--] << " popped from stack." << endl;
}
}

// peek (top element)
int peek() {
if (isEmpty()) {
cout << "Stack is empty!" << endl;
return -1; // return dummy value
} else {
return array[top];
}
}

// display elements
void display() {
if (isEmpty()) {
cout << "Stack is empty." << endl;
} else {
cout << "Stack elements: ";
for (int i = 0; i <= top; i++) {
cout << array[i] << " ";
}
cout << endl;
}
}
};

// main function
int main() {
Stack s;

s.push(10);
s.push(20);
s.push(30);
s.display();

cout << "Top element is: " << s.peek() << endl;

s.pop();
s.display();

s.push(40);
s.push(50);
s.push(60); // should show overflow
s.display();

return 0;
}


/* output 
10 pushed into stack.
20 pushed into stack.
30 pushed into stack.
Stack elements: 10 20 30 
Top element is: 30
30 popped from stack.
Stack elements: 10 20 
40 pushed into stack.
50 pushed into stack.
60 pushed into stack.
Stack elements: 10 20 40 50 60 

*/
