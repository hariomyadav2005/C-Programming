#include <stdio.h>

int main() {
	char arr[100];
	int a[100] = {0};
	printf("Enter the String : ");
	fgets(arr, 100, stdin);
	for (int i = 0; arr[i] != '\0'; i++) {
		for (int j = 0; arr[j] != '\0'; j++) {
			if (arr[i] == arr[j]) {
				a[i]++;
			}
		}
	}
	
	for (int i = 0; arr[i] != '\0'; i++) {
		if (arr[i] == arr[i+1]) {
			continue;
		}
		printf("%c is occures %d times\n", arr[i], a[i]);
	}
	
	return 0;
}
