# Singly Linked List Reversal in C

This C program demonstrates how to create, read, reverse, and print a **singly linked list** using dynamic memory allocation.

## 💡 Features

- Reads a list of integers from user input.
- Builds a singly linked list from the input.
- Reverses the list in-place.
- Prints the reversed list in a readable format.

## 🧱 Structure Definition

The list is built using a simple `struct`:

```c
struct List {
    int key;
    struct List* next;
};
```
## ▶️ How It Works
1. Input:
The user is prompted to enter integers on a single line, separated by spaces.
Input ends when 0 is entered (which is not included in the list).
2. Building the List:
read_list() reads the input and constructs the linked list.
3. Reversing:
revert() reverses the list in-place using pointer manipulation.
4. Output:
print_List() displays the reversed list in the format:
[ 5 4 3 2 1 ]

## 💻 Example
Input:
```css
1 2 3 4 5 0
```
Output:
```css
[ 5 4 3 2 1 ]
```

## 🧼 Memory Management
- new_List(int key) allocates a new node.

- free_List(struct List *p) currently frees only a single node.

- A full list deallocation routine could be added for complete memory cleanup.

🚀 Possible Improvements
- Add full memory deallocation for the list.

- Add error handling for invalid input.

- Extend to support doubly linked lists or other operations.