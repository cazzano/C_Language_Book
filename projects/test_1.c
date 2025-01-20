#include "conio.h"
#include <stdio.h>

int main() {
  printf("Hello To Program\n");
  char name[] = "Ics";
  clrscr();
  gets(name, sizeof(name));
  printf("Name is %s", name);
  getch();
}
