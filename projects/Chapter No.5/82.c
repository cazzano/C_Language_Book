#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int n;
  n = 1;
  while (n != -1) {
    printf("Enter:\n");
    scanf("%i", &n);
    printf("You entered %i \n", n);
  }
  printf("End of Program... \n");
  return 0;
}
