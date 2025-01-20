#include <stdio.h>
int main(){
int a=1;
int f=1;
int r;
printf("Enter a number:");
scanf("%i",&r);
while (a<=r) {
    f=f*a;
    a++;
}
printf("Factorial of %i is %i",r,f);
}
