#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  float net;
  int salary;
  printf("Enter:\n");
  scanf("%i", &salary);
  if (salary >= 20000) {
    net = salary - (salary * 7.0 / 100);
  } else if (salary >= 10000) {
    net = salary - 1000;
  } else {
    net = salary;
  }
  printf("Your salary is %f\n", net);
  return 0;
}
