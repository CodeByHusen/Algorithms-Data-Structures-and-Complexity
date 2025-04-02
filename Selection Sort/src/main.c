#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void selectionSort(int A[], int n) {
    for (int j = 0; j< n - 1; j++) {
      int min = j;
      for (int i = j + 1; i < n; i++) {
  
        if (A[i] < A[min])
          min = i;
      }
  
      swap(&A[min], &A[j]);
    }
  }

int main(int argc, char const *argv[])
{
    printf("Selection Sort\n");

    return 0;
}
