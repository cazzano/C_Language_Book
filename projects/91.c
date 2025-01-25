#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int num, m, n;
  int f;
  printf("Enter:\n");
  scanf("%i", &num);
  printf("\nInteger \t Factorial \n");
  for (m = 1; m <= num; m++) {
    f = 1;
    for (n = 1; n <= m; n++) {
      f *= n;
    }
    printf("%3d \t\t %61d \n", m, f);
  }
  return 0;
}
