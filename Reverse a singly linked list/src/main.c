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

// Prints all elements of the list in one line, e.g. [ 1 2 3 ]
void print_List(struct List* L)
{
    printf("[ ");
    struct List* q = L;
    while (q != NULL)
    {
        printf("%d ", q->key);  // Print current node's value
        q = q->next;            // Move to next node
    }
    printf("]\n");
}

// Reads a list of integers from standard input
// Input ends when a 0 is entered
struct List* read_list()
{
    char line[256];
    fgets(line, sizeof(line), stdin);  // Read a line from input

    struct List* L = NULL;       // Head of the list
    struct List* last = NULL;    // Pointer to the last node in the list

    // Split the line into tokens (numbers), using space and newline as delimiters
    char* number = strtok(line, " \n");

    if (number == NULL) {
        return L;  // If no number was entered, return empty list
    }

    int key = atoi(number);  // Convert first token to integer

    // Keep reading numbers until 0 is entered
    while (key != 0) {
        struct List* p = new_List(key);  // Create new node

        if (L == NULL) {
            L = p;  // First node becomes the head
        } else {
            last->next = p;  // Append to the end of the list
        }

        last = p;  // Update the last node pointer

        number = strtok(NULL, " \n");  // Read next token
        if (number == NULL) {
            return L;  // End of input
        }

        key = atoi(number);  // Convert to integer
    }

    return L;  // Return the constructed list
}

int main()
{
    struct List* L1 = read_list();    // Read list from user input
    struct List* L = revert(L1);      // Reverse the list
    print_List(L);                    // Print the reversed list

    return 0;

}
