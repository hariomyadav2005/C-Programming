#include <stdio.h>

int main() {
	int n;
	printf("Enter the size of Array : ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		printf("Enter the element : ");
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("Array at %d is : %d\n", i, arr[i]);
	}
	int pos;
	printf("Enter the element you want to delete : ");
	scanf("%d", &pos);
	int c;
	for (int i = 0; i < n; i++) {
		if (arr[i] == pos) {
			c = i;
			break;
		}
	}
	for (int i = c; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	n--;
	arr[n];
	for (int i = 0; i < n; i++) {
		printf("Array at %d is : %d\n", i, arr[i]);
	}
	
	return 0;
}
