#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int fail, full, marks, total, c;
  float avg = 0.0;
  fail = full = total = 0;
  for (c = 1; c <= 35; c++) {
    printf("Enter:\n");
    scanf("%i", &marks);
    total += marks;
    if (marks == 0) {
      fail++;
    }
    if (marks == 100) {
      full++;
    }
  }
  avg = total / 35.0;
  printf("Average marks: %.2f \n", avg);
  printf("Failed Students: %i \n", fail);
  printf("Students who scored 100: %i \n", full);
  return 0;
}
