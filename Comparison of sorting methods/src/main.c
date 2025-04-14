#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int A[10000];


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

int main()
{
    printf("CLOCKS_PER_SEC=%d\n", CLOCKS_PER_SEC );
    for( int n=1000; n<=10000; n+=1000 ) {
        for( int i=0; i<n; ++i ) {
            A[i] = rand();
        }
        clock_t tick = clock();
        bubbleSort( A, n );
        clock_t tock = clock();
        printf("%8d %8d\n", n, tock-tick );
    }
    return 0;
}