#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int c, n;
  int sum;
  printf("Enter:\n");
  scanf("%i", &n);
  for (c = 1; c <= n; c++) {
    sum = sum + (c * c);
  }
  printf("Sum is %i \n", sum);
  return 0;
}
