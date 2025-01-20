#include <stdio.h>
int main(){
int r,a,b;
printf("Enter the starting number:");
scanf("%i",&a);
printf("Enter the ending number:");
scanf("%i",&b);
r=a;
while(r<=b){
if(r%2==0)
    printf("%i \n",r);
r++;
}
}
