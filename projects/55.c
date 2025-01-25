#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  char s;
  do {
    printf("Enter the current state of phone (\'w\' for working \'d\' for "
           "dead) \n");
    scanf("%c", &s);
  } while (s != 'w' && s != 'd');
  return 0;
}
