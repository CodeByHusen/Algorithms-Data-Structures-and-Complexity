#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }

void insertion_sort(int* arr, int n)
{
	int i, j, k;
	for(i = 1; i<n; ++i){
		int temp = arr[i];

		for(j = i; j > 0 && arr[j -1] > temp; --j)
		swap(&arr[j - 1], &arr[j]);

	}
}


int main(){

    char line[256];
fgets( line, sizeof(line), stdin);

char *token;
token = strtok(line, " ");

int A[16];  
int n=0;
while( token != NULL ) {
    A[n++] = atoi(token);
    token = strtok(NULL, " ");
}

insertion_sort(A, n);
for( int i=0; i<n; ++i ) {
    printf("%i ", A[i]);   
}
printf("\n");


return 0;
}
