#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int m, n;
  m = 4;
  do {
    n = m;
    do {
      printf("%i \t", m);
      n--;
    } while (n >= 1);
    printf("\n");
    m--;
  } while (m >= 1);
  return 0;
}
