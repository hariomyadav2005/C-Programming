#include <stdio.h>

void Sum(int a, int b, int *sum) {
	*sum = a + b;
}

int main() {
	int a, b, sum;
	printf("Enter the two numbers : ");
	scanf("%d %d", &a, &b);
	Sum(a, b, &sum);
	printf("The Sum is : %d", sum);
	return 0;
}
