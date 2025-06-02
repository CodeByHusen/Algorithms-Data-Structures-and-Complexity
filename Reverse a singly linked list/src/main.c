#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Definition of the structure for a node in a singly linked list
struct List {
    int key;              // The value stored in the node
    struct List* next;    // Pointer to the next node
};

// Creates a new node with the given key
struct List *new_List(int key)
{
    // Allocate memory for a new node
    struct List *p = (struct List *)malloc(sizeof(struct List));
    if (p == NULL)
    {
        // If memory allocation fails, print error and exit
        fprintf(stderr, "malloc failed, exit");
        exit(EXIT_FAILURE);
    }

    // Initialize the node
    p->key = key;     // Set the value
    p->next = NULL;   // No next node yet (end of list)

    return p;  // Return pointer to the new node
}

// Frees the memory of a single node (not the entire list)
void free_List(struct List *p)
{
	free(p);
}

// Reverses a singly linked list
struct List* revert(struct List* L)
{
    struct List* q;       // Temporary pointer to store current node
    struct List* p = NULL;  // Pointer to the head of the reversed list

    // Traverse the list
    while (L)
    {
        q = L;         // Store current node
        L = L->next;   // Move to the next node in the original list
        q->next = p;   // Reverse the link: point current node to the new list
        p = q;         // Move the head of the new list to the current node
    }

    return p;  // Return the new head of the reversed list
}


int main()
{

}
