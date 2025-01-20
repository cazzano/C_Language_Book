#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  printf("Enter:\n");
  char ch;
  scanf("%c", &ch);
  if (ch >= 'A' && ch <= 'Z') {
    printf("The chracter is %c capital letter.\n", ch);
  } else if (ch >= 'a' && ch <= 'z') {
    printf("The character is %c small letter.\n", ch);
  } else if (ch >= '0' && ch <= '9') {
    printf("The character is a number %c\n", ch);
  } else {
    printf("The character is a symbol %c\n", ch);
  }
  return 0;
}
