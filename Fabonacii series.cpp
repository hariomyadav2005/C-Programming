#include <stdio.h>
int main() {
  int i, n,a=0,b=1;
  printf("Enter the nth number for fibonacci series  : ");
  scanf("%d", &n);
  printf("%d\t%d\t", a, b);
  for (i = 1; i <=n-2; i++)
   {
    int c = a + b;
    printf("%d\t", c);
    a = b;
    b = c;
  }
  return 0;
}




