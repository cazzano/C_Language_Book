#include <stdio.h>
int main() {
  // Escape Sequences:
  //
  // b Escape Sequence:
  int h = 4;
  printf("Value is\b %i\n", h);

  // f Escape Sequence:
  printf("Value\f is %i\n", h);

  // r Escape Sequence:
  //
  printf("Value is\r %i\n", h);
  int b;
  // scanf("%i",&b);
  printf("Value is \"%i\"\n",h);
int a,n,c;
printf("Enter something\n");
scanf("%i",&n);
a=n/100;
n=n%100;
b=n/10;
n=n%10;
printf("The Numbers are %i%i%i\n",n,b,a);
printf("Value is %xdd\n",a);
printf("Value is %ddd\n",b);
printf("Value is %i\n",b);
char chal='a';
printf("Value is %i\n",chal);
}
