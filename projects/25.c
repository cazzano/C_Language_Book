#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int a, b;
  printf("Enter:\n");
  scanf("%i%i", &a, &b);
  if (a == b) {
    printf("Numbers are equal.\n");
  } else {
    printf("Numbers are different.\n");
  }
  return 0;
}
