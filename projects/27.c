#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  printf("Enter:\n");
  int y;
  scanf("%i", &y);
  if (y % 4 == 0) {
    printf("%i is a leap year.\n", y);
  } else {
    printf("%i is not a leap year.\n", y);
  }
  return 0;
}
