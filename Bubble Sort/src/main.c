#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubbleSort(int A[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)     
 
       
       for (j = 0; j < n-i-1; j++)
           if (A[j] > A[j+1])
              swap(&A[j], &A[j+1]);
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

bubbleSort(A, n);
for( int i=0; i<n; ++i ) {
    printf("%i ", A[i]);   
}
printf("\n");


return 0;
}


/*
    input=3 6 2 5 18 -3 2
    output=-3 2 2 3 5 6 18
*/
