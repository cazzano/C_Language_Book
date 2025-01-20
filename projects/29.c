#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int n;
  printf("Enter:\n");
  scanf("%i", &n);
  if (n > 0) {
    printf("The number is positive.\n");
  } else if (n < 0) {
    printf("The number is negative.\n");
  } else {
    printf("The number is zero.\n");
  }
  return 0;
}
