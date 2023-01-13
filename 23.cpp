#include <stdio.h>

int main() {
	int n;
	printf("Enter the last term of the series : ");
	scanf("%d", &n);
	
	printf("All prime number till %d are : \n", n);
	printf("2\t");
	for (int i = 3; i <= n; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
			if (j == i - 1) {
				printf("%d\t",i);
				break;
			}
		}
	}
	
	return 0;
}
