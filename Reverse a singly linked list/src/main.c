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




int main()
{

}
