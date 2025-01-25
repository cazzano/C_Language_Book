#include <math.h>
#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  float number;
positive:
  printf("Enter:\n");
  scanf("%f", &number);
  if (number < 0) {
    goto positive;
  } else {
    printf("Sqaure root of %0.2f is %0.2f\n", number, sqrtf(number));
  }
  return 0;
}
