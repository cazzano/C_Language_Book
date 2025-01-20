#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int n;
  printf("Enter:\n");
  scanf("%i", &n);
  (n % 3 == 0 ? printf("Divisible by 3\n") : printf("Not Divisible by 3\n"));
  return 0;
}
