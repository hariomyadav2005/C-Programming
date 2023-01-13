#include <stdio.h>

void value(int a, int b) {
	int c = a;
	a = b;
	b = c;
	printf("Swap using 'Call by Value' -\na = %d, b = %d\n\n", a, b);
}

void refrence(int *c, int *d) {
	int temp = *c;
	*c = *d;
	*d = temp;
}

int main() {
	int a = 3, b = 4;
	int c = 5, d = 6;
	printf("Here, a = %d, b = %d\nand, c = %d, d = %d\n\n",a, b, c, d);
	value(a, b);
	refrence(&c, &d);
	printf("Swap using 'Call by Refrence' -\nc = %d, d = %d", c, d);
	
	return 0;
}
