#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  int i,j;
  for(i=1;i<=7;i++){
    j=i;
    while(j<=7){
        printf("*");
        j++;
    }
    printf("\n");
  }
  return 0;
}
