#include <stdio.h>

int main() {
  int a, b, c, max;
  printf("Enter:\n");
  scanf("%i", &a);
  printf("Enter:\n");
  scanf("%i", &b);
  printf("Enter:\n");
  scanf("%i", &c);
  max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  printf("The Maximum number is %i\n", max);
  return 0;
}
