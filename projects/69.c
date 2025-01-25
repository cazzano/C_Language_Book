#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int c, n, f;
  f = 1;
  printf("Enter:\n");
  scanf("%i", &n);
  for (c = 1; c <= n; c++) {
    f *= c;
  }
  printf("The Factorial of %i is %i \n", n, f);
  return 0;
}
