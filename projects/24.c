#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int a;
  printf("Enter:\n");
  scanf("%i", &a);
  if (a % 2 == 0) {
    printf("a is even.\n");
  } else {
    printf("a is odd.\n");
  }
  return 0;
}
