#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int n;
  printf("Enter:\n");
  scanf("%i", &n);
  if (n % 2 == 0) {
    printf("You entered even number.\n");
  } else {
    printf("You entered odd number.\n");
  }
  return 0;
}
