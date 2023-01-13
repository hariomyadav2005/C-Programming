#include <stdio.h>
int main() {
  int a, b, i, j, t, hcf, lcm;
  printf("Enter two integers\n");
  scanf("%d%d", &i, &j);
  a = i;
  b = j;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  hcf = a;
  lcm = (i*j)/hcf;
  printf("highest common factor of %d and %d = %d\n", i, j, hcf);
  printf("Least common multiple of %d and %d = %d\n", i, j, lcm);
  return 0;
}

