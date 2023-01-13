#include <stdio.h>
#include <math.h>

void toCheck(int n) {
	int count = 0;
	int b = n;
	
	for (int i = 1; b != 0; i++) {
		b /= 10;
		count++;
	}
	
	b = n;
	
	int a, c = 0;
	for (int i = 1; b != 0; i++) {
		a = b % 10;
		b /= 10;
		int p = pow(a, count);
		c = c + p;
	}
	if (c == n) {
		printf("The number is Armstrong\n");
	} else {
		printf("The number is Not Armstrong\n");
	}
	
	c = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			c += i;
		}
	}
	if (c == n) {
		printf("This is the Perfect number\n");
	} else {
		printf("This in Not the Perfect number\n");
	}
	
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
		printf("This is Not the Prime number\n");
		break;
		}
		if (i == n - 1) {
			printf("This is the Prime number\n");
			break;
		}
	}
}

int main() {
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	toCheck(n);
	return 0;
}
