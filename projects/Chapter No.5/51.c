#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int n;
  int c = 1;
  printf("Enter:\n");
  scanf("%i", &n);
  while (c <= 10) {
    printf("%i * %i = %i \n", n, c, n * c);
    c++;
  }
  return 0;
}
