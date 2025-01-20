#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int n;
  printf("Enter:\n");
  scanf("%i", &n);
  switch (n) {
  case 1: {
    printf("Friday.\n");
    break;
  }
  case 2: {
    printf("Saturday.\n");
    break;
  }
  case 3: {
    printf("Sunday.\n");
    break;
  }
  case 4: {
    printf("Monday.\n");
    break;
  }
  case 5: {
    printf("Tuesday.\n");
    break;
  }
  case 6: {
    printf("Wednesday.\n");
    break;
  }
  case 7: {
    printf("Tuesday.\n");
    break;
  }
  default: {
    printf("Invalid number\n");
  }
  }
  return 0;
}
