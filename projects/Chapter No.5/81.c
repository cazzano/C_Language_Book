#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int x, t, r;
  printf("Enter:\n");
  scanf("%i", &x);
  r = 0;
  for (t = x; t != 0; t /= 10) {
    r = 10 * r + t % 10;
  }
  printf("Actual number is %i \n", x);
  printf("Reverse number is %i \n", r);
  return 0;
}
