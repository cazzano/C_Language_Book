#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int c, n;
  c = 1;
  printf("Enter:\n");
  scanf("%i", &n);
  do {
    printf("%i * %i = %i \n", n, c, c * n);
    c++;
  } while (c <= 10);
  return 0;
}
