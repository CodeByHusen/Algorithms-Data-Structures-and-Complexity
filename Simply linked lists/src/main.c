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


void insert_after(struct List* p, int key)  //ins.key after list elem. p
{
	struct List *q = new_List(key);
	
    q-> next = p->next;
    p->next = q;
	//q->key=key;
	//q->next = p ->next;
	//p->next =q;
}

struct List *delete_head(struct List *L) // del. first elem. from list
{
    if (L == NULL)
    {
        return NULL;
    }
    struct List *p = L->next;
    free_List(L);
    L = p;
    return L;
    /* struct List* removed;

     if (L == NULL)		return NULL;
     removed = L;
     L = removed ->next;
     free(removed);*/
};


void delete_after(struct List* p)  // del. elem. after p from list
{
    struct List* q;
    q = p -> next;
    p->next = q ->next;
    free(q);
}


void print_List(struct List* L)  // prints all list elements in one line like "[42 12 7 9]"
{
	printf("[ ");
	struct List* q = L;
	while (q != NULL){
		printf("%d ", q->key);
		q = q->next;
	}
	printf("]\n");
}


struct List* search_list(struct List* L, int key) // return p with p->key==key or NULL
{
	struct List *q = L;
	
	while(q != NULL)
	{
		if(q-> key == key)
		{
			return q;
		}
		q=q->next;
	}
	return NULL;
};


int main()
{

    
    
    return 0;
}