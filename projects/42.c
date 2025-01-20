#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int a, b;
  char op;
  printf("Enter:\n");
  scanf("%i %i %c", &a, &b, &op);
  switch (op) {
  case '+': {
    printf("%i + %i = %i \n", a, b, a + b);
    break;
  }
  case '-': {
    printf("%i - %i = %i \n", a, b, a - b);
    break;
  }
  case '*': {
    printf("%i * %i = %i \n", a, b, a * b);
    break;
  }
  case '/': {
    printf("%i / %i = %i \n", a, b, a / b);
    break;
  }
  case '%': {
    printf("%i %% %i = %i \n", a, b, a % b);
    break;
  }
  default: {
    printf("Invalid Operator");
  }
  }
  return 0;
}
