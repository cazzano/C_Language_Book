#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int tab, len, c;
  printf("Enter:\n");
  scanf("%i", &tab);
  printf("Enter:\n");
  scanf("%i", &len);
  for (c = 1; c <= len; c++) {
    printf("%i * %i = %i \n", tab, c, tab * c);
  }
  return 0;
}
