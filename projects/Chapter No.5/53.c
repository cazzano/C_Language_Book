#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int n, c, f;
  c = 1;
  f = 1;
  printf("Enter:\n");
  scanf("%i", &n);
  while (c <= n) {
    f *= c;
    c += 1;
  }
  printf("The factorial is % i is %i \n", n, f);
  return 0;
}
