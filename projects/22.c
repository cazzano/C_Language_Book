#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int a, b;
  printf("Enter a number:");
  scanf("%i", &a);
  printf("Enter a number:");
  scanf("%i", &b);
  if (a * a == b) {
    printf("2nd number is square of 1st number.");
  }
  return 0;
}
