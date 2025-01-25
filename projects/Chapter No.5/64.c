#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  float c, r;
  c = 3.0;
  r = 1.0;
  do {
    r += 1.0 / c;
    c += 2;
  } while (c <= 99);
  printf("Result is %f \n", r);
  return 0;
}
