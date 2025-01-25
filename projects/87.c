#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int m, n;
  for (m = 1; m <= 5; m++) {
    for (n = 1; n <= 5; n++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
