#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int c, s, e;
  printf("Enter:\n");
  scanf("%i", &s);
  printf("Enter:\n");
  scanf("%i", &e);
  c = s;
  do {
    if (c % 2 != 0) {
      printf("%i \n", c);
    }
    c++;
  } while (c <= e);
  return 0;
}
