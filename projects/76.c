#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int c;
  for (c = 1; c <= 99; c += 2) {
    if (c % 7 != 0) {
      printf("%i \t", c);
    }
  }
  return 0;
}
