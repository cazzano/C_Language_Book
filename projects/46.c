#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int x, y;
  printf("Enter:\n");
  scanf("%i %i", &x, &y);
  if (x == 0) {
    if (y == 0) {
      printf("The point lie on the origin.\n");
    } else {
      printf("The point lie on the y-axis\n");
    }
  } else if (x > 0) {
    if (y == 0) {
      printf("The point lie on x-axis\n");
    } else if (y > 0) {
      printf("The point lie on 1st quadrant\n");
    } else {
      printf("The point lie on 4th quadrant.\n");
    }
  } else {
    if (y == 0) {
      printf("The point lie on x-axis\n");
    } else if (y > 0) {
      printf("The point lie on 2nd quadrant\n");
    } else {
      printf("The point lie on 3rd quadrant\n");
    }
  }
  return 0;
}
