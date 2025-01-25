#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int i, j;
  i = 1;
  do {
    j = 1;
    do {
      printf("Outer: %i Innder: %i \n", i, j);
      j++;
    } while (j <= 3);
    i++;
  } while (i <= 2);
  return 0;
}
