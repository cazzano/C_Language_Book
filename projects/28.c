#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  float salary, bonus;
  int grade;
  printf("Enter:\n");
  scanf("%f", &salary);
  printf("Enter:\n");
  scanf("%i", &grade);
  if (grade >= 15) {
    bonus = salary * 50. / 100.;
  } else {
    bonus = salary * 25.0 / 100.0;
  }
  salary = salary + bonus;
  printf("Your total salary is Rs. %.2f\n", salary);
  return 0;
}
