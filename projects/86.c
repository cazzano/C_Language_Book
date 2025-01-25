#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int i, j;
  for (i = 0; i <= 5; i++) {
    for (j = 0; j <= i; j++) {
      printf("%i \t", j * j);
    }
    printf("\n");
  }
  return 0;
}
