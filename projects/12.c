#include <stdio.h>
int main(){
    float r =3.0;
    float a=1.0;
    do{
        r=r+1.0/a;
        a=a+2;
    } while (a<=99);
printf("Result is %f",r);
}
