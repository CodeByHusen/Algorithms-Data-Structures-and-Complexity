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

struct List* merge(struct List* L1, struct List* L2)
{
    struct List* result = NULL;
    struct List** lastPtrRef = &result;
     
  while(1)
  {
    if (L1 == NULL)
    {
      *lastPtrRef = L2;
       break;
    }
    else if (L2==NULL)
    {
       *lastPtrRef = L1;
       break;
    }
    if(L1->key <= L2->key)
    {
      MoveNode(lastPtrRef, &L1);
    }
    else
    {
      MoveNode(lastPtrRef, &L2);
    }
   
    /* tricky: advance to point to the next ".next" field */
    lastPtrRef = &((*lastPtrRef)->next);
  }
  return(result);
};

struct List* merge_alternate(struct List* L1, struct List* L2)
{
    struct List* result = NULL;
    struct List** lastPtrRef = &result;

    while (L1 != NULL || L2 != NULL) {
        if (L1 != NULL) {
            MoveNode(lastPtrRef, &L1);
            lastPtrRef = &((*lastPtrRef)->next);
        }
        if (L2 != NULL) {
            MoveNode(lastPtrRef, &L2);
            lastPtrRef = &((*lastPtrRef)->next);
        }
    }

    return result;
}

int main()
{
    printf("Input (L1 and L2):\n");
    struct List* L1 = read_list();
    struct List* L2 = read_list();

    struct List* L = merge_alternate(L1, L2);
    printf("Output:\n");
    print_List(L);

    return 0;
}