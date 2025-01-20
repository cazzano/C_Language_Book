#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int a, b, c;
  printf("Enter:\n");
  scanf("%i%i%i", &a, &b, &c);
  if (a > b && a > c) {
    printf("Maximum number is %i\n", a);
  } else if (b > a && b > c) {
    printf("Maximum number is %i\n", b);
  } else {
    printf("Maximum number is %i\n", c);
  }
  return 0;
}
