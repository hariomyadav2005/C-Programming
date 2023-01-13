#include <stdio.h>

void Circle(int r) {
	float Area = 3.14 * r * r;
	int Diam = 2 * r;
	float Circum = 2 * 3.14 * r;
	printf("The Area is : %f\nThe Diameter is : %d\nThe Circmumference is : %f\n", Area, Diam, Circum);
}

int main() {
	int r;
	printf("Enter the radius of a Circle : ");
	scanf("%d", &r);
	Circle(r);
	return 0;
}
