#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int tab, c;
  printf("Enter:\n");
  scanf("%i", &tab);
  for (c = 1; c <= 10; c++) {
    printf("%i * %i = %i \n", tab, c, tab * c);
  }
  return 0;
}
