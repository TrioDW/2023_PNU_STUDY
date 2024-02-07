#include <stdio.h>
#include <stdlib.h>

int main() {
		
	int *arr;
	int n;
	
	printf("Please enter the size of the array: ");
	scanf("%d", &n);

	arr = (int *) malloc (n * sizeof(int));

	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	printf("Sum is %d", sum);
	free(arr);

	return 0;
}
