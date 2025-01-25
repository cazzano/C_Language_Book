#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  float c, r;
  c = 2.0;
  r = 1.0;
  while (c <= 100) {
    r += 1.0 / c;
    c += 2;
  }
  printf("The result is %f \n", r);
  return 0;
}
