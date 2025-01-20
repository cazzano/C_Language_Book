#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int score;
  float net;
  printf("Enter:\n");
  scanf("%i", &score);
  if (score >= 90) {
    printf("Your grade is A.\n");
  } else if (score >= 80) {
    printf("Your grade is B.\n");
  } else if (score >= 70) {
    printf("Your grade is C.\n");
  } else if (score >= 60) {
    printf("Your grade is D.\n");
  } else if (score >= 50) {
    printf("Your grade is E.\n");
  } else {
    printf("Fail.\n");
  }
  return 0;
}
