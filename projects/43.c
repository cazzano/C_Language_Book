#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  float value;
  char con;
  printf("Enter Conversion Type:\n");
  printf("C for centimeters:\n");
  printf("L for liters:\n");
  printf("K for kilometers:\n");
  printf("G for Kilograms:\n");
  scanf("%c", &con);
  printf("Enter:\n");
  scanf("%f", &value);
  switch (con) {

  case 'c':
  case 'C': {
    printf("Value is %f \n", value * 2.54);
    break;
  }
  case 'l':
  case 'L': {
    printf("Value is %f \n", value * 3.785);
    break;
  }
  case 'k':
  case 'K': {
    printf("Value is %f \n", value * 1.609);
    break;
  }
  case 'g':
  case 'G': {
    printf("Value is %f \n", value * .4536);
    break;
  }
  default: {
    printf("Invalid conversion type!");
  }
  }
  return 0;
}
