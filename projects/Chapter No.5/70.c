#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int f;
  float c;
  printf("Farengeit \t Celsuis \n");
  for (f = 50; f <= 100; f += 5) {
    c = 5.0 / 9.0 * (f - 32);
    printf("%3i \t %6.2f \n", f, c);
  }
  return 0;
}
