#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int n, sum, pro;
  sum = 0;
  pro = 1;
  for (n = 1; n <= 10; n++) {
    if (n % 2 == 0) {
      pro *= n;
    } else {
      sum += n;
    }
  }
  printf("Sum of positive odd numbers : %i \n", sum);
  printf("Product of positive even numbers: %i \n", pro);
  return 0;
}
