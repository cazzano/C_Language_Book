#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int a, b, c;
  printf("Enter:\n");
  scanf("%i%i%i", &a, &b, &c);
  if (a == b) {
    if (a == c) {
      printf("All numbers are equal.\n");
    } else {
      printf("Numbers are different.\n");
    }
  } else {
    printf("Numbers are different.\n");
  }
  return 0;
}
