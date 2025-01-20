#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int x, y;
  printf("Enter:\n");
  scanf("%i %i", &x, &y);
  x > y ? printf("%i is larger\n", x) : printf("%i is larger\n", y);
  return 0;
}
