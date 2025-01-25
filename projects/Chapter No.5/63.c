#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int a, b, c, r;
  printf("Enter:\n");
  scanf("%i", &a);
  printf("Enter:\n");
  scanf("%i", &b);
  printf("Enter:\n");
  c = 1;
  r = 1;
  do {
    r *= a;
    c += 1;
  } while (c <= b);
  printf("The Result is %i \n", r);
  return 0;
}
