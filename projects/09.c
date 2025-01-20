#include <stdio.h>
int main(){
    float r =1.0;
    float a=2.0;
    while (a<=100) {
        r=r+1.0/a;
        a=a+2;
    }
printf("Result is %f",r);
}
