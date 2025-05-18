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

struct List* read_list()
{
    char line[256];
    fgets( line, sizeof(line), stdin);
    struct List* L = NULL;
    struct List* last = NULL;
    char* number = strtok(line, " \n");
    if(number==NULL) {
        return L;
    }
    int key = atoi(number);
    while(key != 0) {
        struct List* p = new_List(key);
        if(L == NULL) {
            L = p;
        } else {
            last->next = p;
        }
        last = p;
        number = strtok(NULL, " \n");
        if(number==NULL) {
            return L;
        }
        key = atoi(number);
    }
    return L;

}

void MoveNode(struct List** destRef, struct List** sourceRef)
{
    /* the front source node  */
    struct List* newNode = *sourceRef;
    assert(newNode != NULL);
 
    /* Advance the source pointer */
    *sourceRef = newNode->next;
 
    /* Link the old dest off the new node */
    newNode->next = *destRef;
 
    /* Move dest to point to the new node */
    *destRef = newNode;
}

int main(int argc, char const *argv[])
{
    
}
