#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int c, num, f;
  c = 1;
  f = 1;
  printf("Enter:\n");
  scanf("%i", &num);
  do {
    f *= c;
    c++;
  } while (c <= num);
  printf("Factorial of %i is %i \n", num, f);
  return 0;
}
