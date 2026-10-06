->Stack is a linear data-structure that works on LIFO (Last-in First-out principle) here insertion and deletion is performed from one end called TOP of stack.

->Internally Stack is implemented using Dequeue. It can be implemented using array, singly linked list, and standard template library.There are some operations of stack--

PUSH()                              EMPLACE()
──────                              ────────

You                                 You
 │                                   │
 │ create object                    │ constructor arguments
 ↓                                   ↓
Student s1                          Stack
 │                                   │
 │ push(s1)                          │ emplace("Rahul", 20)
 ↓                                   ↓
Stack                               Student object
 │                                   │
 │ stores/inserts                   │ constructed directly
 ↓                                   ↓
Student object                      Stack

| Function      | Purpose            |     Complexity |
| ------------- | ------------------ | -------------: |
| `push()`    | Add element        |          O(1)* |
| `pop()`     | Remove top         |           O(1) |
| `top()`     | Access top         |           O(1) |
| `empty()`   | Check empty        |           O(1) |
| `size()`    | Number of elements |           O(1) |
| `emplace()` | Construct at top   |          O(1)* |
| `swap()`    | Exchange stacks    | O(1) typically |

Vector and Stack serve different purposes. Vector is a general-purpose dynamic array that allows random access and flexible insertion/removal operations. Stack provides a restricted LIFO interface where insertion and deletion occur only at the top. This restriction makes Stack suitable for applications such as function calls, recursion, undo/redo, DFS, expression evaluation, and backtracking.

When a vector's capacity becomes full, it may need to allocate a larger contiguous memory block and move or copy its existing elements to the new location, followed by releasing the old storage. This makes that particular insertion O(n), although `push_back()` is amortized O(1) over a sequence of insertions.

VECTOR
↓
General-purpose + random access + dynamic array

STACK
↓
Restricted interface + LIFO

VECTOR RESIZING
↓
Capacity full
↓
Allocate larger block
↓
Move/copy elements
↓
Release old block
↓
Insert new element

APPLICATIONS OF STACK:-

1. Function Calls
2. Recursion
3. Undo/Redo
4. Parentheses Matching
5. Expression Evaluation
6. DFS
7. Backtracking
8. Browser History
9. Compiler Parsing
10. Call Stack
11. Stack Overflow
12. Maze Solving
13. Monotonic Stack
14. Next Greater Element
15. Stock Span
16. Largest Rectangle in Histogram
17. Daily Temperatures

-----------------------------------------------------------------------------------------------------------------------------------------

* [ ] -> Reverse the array
* [ ] -> Insert the element at bottom
* [ ] -> remove all adjacent duplicates from string
* [ ] -> minimum add to make valid parenthesis
* [ ] -> valid parenthesis
* [ ] -> backspace string compare
* [ ] -> score of parenthesis
* [ ] -> get min at pop
* [ ] -> print bracket number
