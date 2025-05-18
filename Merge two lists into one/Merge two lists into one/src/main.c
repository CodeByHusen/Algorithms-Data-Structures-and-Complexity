#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


struct List
{
	int key;  				
	struct List* next; 		
	
};

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

void free_List(struct List *p)
{
	free(p);
}

void print_List(struct List* L)  // prints all list elements in one line like 
{
	printf("[ ");
	struct List* q = L;
	while (q != NULL){
		printf("%d ", q->key);
		q = q->next;
	}
	printf("]\n");
}

int main(int argc, char const *argv[])
{
    
}
