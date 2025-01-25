#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int c = 1;
  do {
    if (c % 2 != 0) {
      printf("%i \n", c);
    }
    c++;
  } while (c <= 20);
  return 0;
}
