#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int unit, surcharge;
  float bill;
  printf("Enter:\n");
  scanf("%i", &unit);
  if (unit > 500) {
    bill = unit * 7;
  } else if (unit > 300) {
    bill = unit * 5;
  } else {
    bill = unit * 2;
  }
  bill = bill + 150;
  if (bill > 2000) {
    bill = bill + (bill * 5.0 / 100.0);
  }
  printf("Total bill is %.2f\n", bill);
  return 0;
}
