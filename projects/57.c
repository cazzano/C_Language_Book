#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int c = 1;
  do {
    printf("%i \t % i \n", c, c * c * c);
    c++;
  } while (c <= 5);
  return 0;
}
