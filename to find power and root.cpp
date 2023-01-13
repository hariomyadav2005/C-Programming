#include <stdio.h>
#include <math.h>

int main () {
	int n, p;
	printf("enter any number :");
	scanf("%d", &n);
	printf("enter power of number :");
	scanf("%d", &p);
	int a = pow(n, p);
	float b = pow(n, 0.5);
	printf("  \t  number = %d    \n   \t  root = %f", a, b);
	
	return 0;
}
