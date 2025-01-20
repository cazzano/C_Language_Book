#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  char c;
  printf("Enter:\n");
  scanf("%c", &c);
  switch (c) {
  case 'A': {
    printf("You entered Vowel.\n");
    break;
  }
  case 'a': {
    printf("You entered Vowel.\n");
    break;
  }
  case 'e': {
    printf("You entered Vowel.\n");
    break;
  }
  case 'E': {
    printf("You entered Vowel.\n");
    break;
  }
  case 'i': {
    printf("You entered Vowel.\n");
    break;
  }
  case 'I': {
    printf("You entered Vowel.\n");
    break;
  }
  case 'O': {
    printf("You entered Vowel.\n");
    break;
  }
  case 'o': {
    printf("You entered Vowel.\n");
    break;
  }
  case 'u': {
    printf("You entered Vowel.\n");
    break;
  }
  case 'U': {
    printf("You entered Vowel.\n");
    break;
  }
  default: {
    printf("You entered consonant.\n");
  }
  }
  return 0;
}
