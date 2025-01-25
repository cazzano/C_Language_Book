#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int x, num;
  for (x = 1; x <= 5; x++) {
    printf("Enter:\n");
    scanf("%i", &num);
    if (num <= 0) {
      break;
    }
    printf("You entered %i \n", num);
  }
  return 0;
}
