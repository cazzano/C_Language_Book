#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int product;
  int c;
  product = 1;
  for (c = 1; c <= 10; c += 2) {
    product *= c;
  }
  printf("The product is %i \n", product);
  return 0;
}
