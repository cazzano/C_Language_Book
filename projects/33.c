#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  float area, radius, circum;
  int choice;
  printf("Enter:\n");
  scanf("%f", &radius);
  printf("Enter:\n");
  scanf("%i", &choice);
  if (choice == 1) {
    area = radius * radius * 3.141;
    printf("Area: %5.2f\n", area);
  } else if (choice == 2) {
    circum = 2.0 * 3.141 * radius;
    printf("Circumference: %5.3f\n", circum);
  } else {
    printf("Invalid choice.\n");
  }
  return 0;
}
