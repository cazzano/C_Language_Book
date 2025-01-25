#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int n, s, e;
  printf("Enter:\n");
  scanf("%i", &s);
  printf("Enter:\n");
  scanf("%i", &e);
  n = s;
  while (n <= e) {
    if (n % 2 == 0) {
      printf("%i\n", n);
    }
    n++;
  }
  return 0;
}
