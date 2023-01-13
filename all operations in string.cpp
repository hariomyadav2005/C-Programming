#include <stdio.h>
#include <string.h>

int main() {
	char str[20] = "Blestar";
	char a[20] = "Omega";
	char d[20] = "Hello";
	int b = strlen(str);
	printf("Normal Strings -\n1)- str  : %s\n2)- a : %s\n3)- d : Hello\n\n", str, a, d);
	printf("String length of str is : %d\n", b);
	strcpy(str, d);
	printf("Copy String d to str : %s\n", str);
	strcat(str, a);
	printf("Adding String str and a : %s\n", str);
	strrev(d);
	printf("Reverse the String d : %s\n", d);
	int s = strcmp(str, d);
	printf("Compare String str and a : %d", s);
	return 0;
}
