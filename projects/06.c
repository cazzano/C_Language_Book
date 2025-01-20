#include <stdio.h>
int main(){
int r=1;
int a;
printf("Enter a number:");
scanf("%i",&a);
while(r<=10){
printf("%i*%i=%i\n",a,r,r*a);
r++;
}
}
