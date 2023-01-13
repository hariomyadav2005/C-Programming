#include <stdio.h>

int main() {
	int n;
	printf("Enter the size of Array : ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		printf("Enter the element: ");
		scanf("%d", &arr[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("Array at %d is : %d\n", i, arr[i]);
	}
	printf("\n");
	int ins;
	int pos;
	printf("Enter the number you want and insert : ");
	scanf("%d", &ins);
	printf("Enter the position : ");
	scanf("%d", &pos);
	n++;
	arr[n];
	for (int i = n - 1; i > pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos] = ins;
	
	printf("\n");
	
	for (int i = 0; i < n; i++) {
		printf("Array at %d is : %d\n", i, arr[i]);
	}
	return 0;
}
