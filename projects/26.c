#include <math.h>
#include "conio.h"
#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  double Sqroot = 1.0;
  int x = 0;
  printf("Enter:\n");
  scanf("%i", &x);
  if (x >= 0) {
    Sqroot = sqrt(x);
    printf("The square root of a is %1.2f\n", Sqroot);
  } else {
    printf("invalid number.\n");
  }
  getch();
  return 0;
}
