#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  char ch;
  printf("Enter:\n");
  scanf("%c", &ch);
  if (ch == 'a' || ch == 'A' || ch == 'E' || ch == 'e' || ch == 'I' ||
      ch == 'i' || ch == 'O' || ch == 'o' || ch == 'u' || ch == 'U') {
    printf("You entered a vowel. %c\n", ch);
  } else {
    printf("You did not enter a vowel %c\n", ch);
  }
  return 0;
}
