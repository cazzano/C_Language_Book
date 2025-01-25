#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int c, sum;
  sum = 0;
  for (c = 1; c < 100; c += 2) {
    sum += c;
  }
  printf("Sum is %i \n", sum);
  return 0;
}
