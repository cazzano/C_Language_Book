#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int n, c;
  printf("Enter:\n");
  scanf("%i", &n);
  for (c = 10; c >= 1; c--) {
    printf("%i * %i = %i\n", n, c, n * c);
  }
  return 0;
}
