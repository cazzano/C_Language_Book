#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int sum = 0;
  int n = 1;
  while (n <= 5) {
    printf("%i \n", n);
    sum = n + sum;
    n++;
  }
  printf("The sum is %i \n", sum);
  return 0;
}
