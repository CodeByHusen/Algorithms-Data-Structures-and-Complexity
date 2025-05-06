#include <stdio.h>
#include <stdlib.h>

struct List
{
	int key;
	struct List* next;
	
};

// constructs a new list element
struct List *new_List(int key)
{
    // allocate memory
    struct List *p = (struct List *)malloc(sizeof(struct List));
    if (p == NULL)
    {
        fprintf(stderr, "malloc failed, exit");
        exit(EXIT_FAILURE);
    }

    // init struct
    p->key = key;
    p->next = NULL;

    return p;
};

// deconstructs a List element p
void free_List(struct List *p)
{
	free(p);
}

struct List* insert_head(struct List* L, int key)  // ins. key as new list head
{
	struct List *q = new_List(key);
	q->next = L;
    L = q;
    return L;

	
};



int main()
{

    
    
    return 0;
}