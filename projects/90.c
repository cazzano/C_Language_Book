#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int num, sum, n, m;
  printf("Enter:\n");
  scanf("%i", &num);
  printf("\n Integer \t Sum \n");
  for (m = 1; m <= num; m++) {
    sum = 0;
    for (n = 1; n <= m; n++) {
      sum += n;
    }
    printf("%3d \t \t %3d \n", m, sum);
  }
  return 0;
}
