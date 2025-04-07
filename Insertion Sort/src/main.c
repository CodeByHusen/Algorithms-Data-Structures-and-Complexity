#include <stdio.h>


void insertion_sort(int* arr, int n)
{
	int i, j, k;
	for(i = 1; i<n; ++i){
		int temp = arr[i];

		for(j = i; j > 0 && arr[j -1] > temp; --j)
		swap(&arr[j - 1], &arr[j]);

	}
}


int main(int argc, char const *argv[])
{
    

    return 0;
}
