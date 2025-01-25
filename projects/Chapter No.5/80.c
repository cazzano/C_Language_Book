#include <math.h>
#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int x, n, i;
  float sum;
  sum = 0;
  printf("Enter:\n");
  scanf("%i", &x);
  printf("Enter:\n");
  scanf("%i", &n);
  for (i = 1; i <= n; i++) {
    sum = sum + pow(x, i);
  }
  printf("Sum = %.3f \n", sum);
  return 0;
}
